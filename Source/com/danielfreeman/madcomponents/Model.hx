/**
 * <p>Original Author: Daniel Freeman</p>
 *
 * <p>Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:</p>
 *
 * <p>The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.</p>
 *
 * <p>THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.</p>
 *
 * <p>Licensed under The MIT License</p>
 * <p>Redistributions of files must retain the above copyright notice.</p>
 */

package com.danielfreeman.madcomponents;



import openfl.errors.Error;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.IOErrorEvent;
import openfl.events.SecurityErrorEvent;
import openfl.net.URLLoader;
import openfl.net.URLRequest;
import openfl.net.URLRequestMethod;
import openfl.net.URLVariables;


/**
 * The data is loaded
 */
@:meta(Event(name="dataLoaded",type="flash.events.Event"))


/**
 * There was an error 
 */
@:meta(Event(name="dataError",type="flash.events.Event"))


/**
 * Enables connection to a webserver using XML, JSON, or AMF
 * <pre>
 * &lt;model
 *    url = "URL"
 *    service = "SERVICE"
 *    path = "PATH"
 *    action = "loadXML|loadJSON"
 * /&gt;
 * 
 * &lt;sendModel
 *    url = "URL"
 *    sendBy = "get|post|xml"
 *    action = "send|sendAndLoadXML|sendAndLoadJSON"
 * /&gt;
 * </pre>
 */
class Model extends URLLoader
{
    public var page(get, never) : Sprite;
    public var dataAMF(get, set) : Dynamic;
    public var dataXML(never, set) : MadXML;

    
    public static inline var LOADED : String = "dataLoaded";
    public static inline var ERROR : String = "dataError";
    
    private var _schema : MadXML = null;
    private var _sendSchema : MadXML = null;
    private var _parent : Sprite;
    private var _url : String;
    private var _sendUrl : String;
    private var _dataString : URLVariables;
    private var _sendBy : String = "xml";
    private var _service : String;
    private var _path : String = "";
    private var _amfData : Dynamic = null;
    private var _action : String = "";
    private var _filter : String = "";
    private var _request : URLRequest = null;
    
    
    
    public function new(parent : Sprite, xml : MadXML, sendXml : MadXML = null)
    {
        super();
        _parent = parent;
        if (xml != null) {
			var children:MadXMLList = xml.children();
            _schema = (children.length() > 0) ? children.get(0) : null;
            if (xml.has.url) { 
                _url = xml.att.url;
			}
            if (xml.has.service) { 
                _service = xml.att.service;
			}
            if (xml.has.path) { 
                _path = xml.att.path;
			}
            if (xml.has.parse) {
                _path = xml.att.parse;
                if (Std.is(_parent, UIList)) {
                    var pos : Int = _path.lastIndexOf(".");
                    _filter = _path.substring(pos + 1);
                    _path = _path.substring(0, pos);
                }
            }
            if (xml.has.action) {
                _action = xml.att.action;
                refresh();
            }
        }
        if (sendXml != null) {
			var sendChildren:MadXMLList = sendXml.children();
            _sendSchema = sendChildren.get(0);
            if (sendXml.has.url) {
                _sendUrl = sendXml.att.url;
			}
            if (sendXml.has.sendBy) { 
                _sendBy = sendXml.att.sendBy;
			}
            if (sendXml.has.action) {
                if (sendXml.att.action == "send") {
                    sendURL();
				}
                else { 
                	sendURL("", sendXml.att.action);
				}
            }
        }
    }
    
/**
 * An accessor for the Component associated with this model.  Useful for event handlers.
 */
    private function get_page() : Sprite{
        return _parent;
    }
    
/**
 * Filter and escape a string, removing odd characters.
 */
    public static function queryString(value : String) : String{
		new EReg('[^\\x{20}-\\x{7E}\\s\\t\\n\\r]', "g").replace(value,"");
        value = StringTools.htmlEscape(value);
        return value;
    }
    
/**
 * htmlDecode a string
 */
    public static function htmlDecode(value : String) : String {
		(new EReg('\\\\n', "g")).replace(value, "\n");
		(new EReg('&amp;', "g")).replace(value, "&");
		(new EReg('&quot;', "g")).replace(value, '\"');
		(new EReg('&apos;', "g")).replace(value, "'");
		(new EReg('&lt;', "g")).replace(value, "<");
		(new EReg('&gt;', "g")).replace(value, ">");
		return value;
    }
    
    
/**
 * htmlEncode a string
 */
    public static function addSlashes(value : String) : String {
    	(new EReg('\\"', "g")).replace(value, "\\\"");
		(new EReg("\\'", "g")).replace(value, "\\'");
		(new EReg('[\\x{00}-\\x{0C}\\x{0E}-\\x{1F}\\t]', "g")).replace(value, " ");
		return value;
	}
    
/**
 * Repeat the previous server query
 */
    public function refresh() : Void{
        if (_action == "load" || _action == "loadXML") {
            loadXML();
		}
    //    else if (_action == "loadAMF") {
    //        loadAMF();
	//	}
        else if (_action == "loadJSON") {
            loadJSON();
		}
    }
    
/**
 * A url request where the returned data is XML
 */
    public function loadXML(url : String = "", request : URLRequest = null) : Void{
        if (url == "") {
            url = _url;
		}
        else { 
        	_url = url;
		}
        addEventListener(Event.COMPLETE, isLoaded);
        if (request == null) {
            request = (_request != null) ? _request : new URLRequest(url);
		}
        else { 
        	_request = request;
		}
        try{
            load(request);
        }
		catch (error : Error){
            errorFn();
        }
        _action = "loadXML";
    }
    
/**
 * A url request where the returned data is JSON
 */
    public function loadJSON(url : String = "", request : URLRequest = null) : Void{
        if (url == "") { 
            url = _url;
		}
        else { 
        _url = url;
		}
        addEventListener(Event.COMPLETE, jsonIsLoaded);
        if (request == null) {
            request = (_request != null) ? _request : new URLRequest(url);
		}
        else { 
        	_request = request;
		}
        try{
            load(request);
        }        catch (error : Error){
            errorFn();
        }
        _action = "loadJSON";
    }
    
    
/**
 * A url request where the returned data is AMF
 */
    private function loadAMFList(value : Dynamic) : Void{
        dataAMF = value;
        dispatchEvent(new Event(LOADED));
    }
    
/**
 * Set the data within a list or form to an AMF object
 */
    private function set_dataAMF(value : Dynamic) : Dynamic{
        _amfData = value;
        if (_path != "" && value != null) {
            value = followPath(value, _path);
		}
		if (Std.is(_parent, UIList)) {
            if (_schema == null) {
                cast((_parent), UIList).data = value;
            }
            else {
                var arrayOfObjects : Array<Dynamic> = [];
                for (record in Reflect.fields(value)){
					var item : Dynamic = parseAMFlist(record, _schema.parent(), {});
                    if (item != null) {
                        arrayOfObjects.push(item);
                    }
                }
                cast((_parent), UIList).data = arrayOfObjects;
            }
        }
        else 
		{
            cast((_parent), UIForm).data = ((_schema == null)) ? value : parseAMFlist(value, _schema.parent(), {});
       }
        return value;
    }
    
/**
 * Follow a path. 
 */
    private function followPath(pointer : Dynamic, path : String) : Dynamic{
        var items : Array<String> = path.split(".");
        for (item in items){
            if (item == "") {
                for (thing in Reflect.fields(pointer))
                pointer = thing;
            }
            else {
                pointer = Reflect.field(pointer, item);
            }
        }
        return pointer;
    }
    
/**
 * Converts an AMF object to an Object
 */
    private function parseAMFlist(record : Dynamic, schema : MadXML, result : Dynamic, path : String = "") : Dynamic{
        var schemaChildren : MadXMLList = schema.children();
        for (child in schemaChildren){
            var field : String = child.name;
            var pathChild : String = path + "." + field;
            if (!child.hasChildren) {
                if (child.toString() != "") {
                    field = child.toString();
                }
                var head : String = Reflect.field(result, field);
                Reflect.setField(result, field, ((head != null) ? head + " " : "") + Reflect.field(record, pathChild.substr(1)));
            }
            else {
                result = parseAMFlist(record, child, result, pathChild);
            }
        }
        return result;
    }
    
/**
 * Send data to the server
 */
    public function sendURL(url : String = "", action : String = "", request : URLRequest = null) : Void{
        if (url == "") {
            url = _sendUrl;
		}
        else { 
        _sendUrl = url;
		}
        if (action == "sendAndLoadXML") { 
            addEventListener(Event.COMPLETE, isLoaded);
		}
        else if (action == "sendAndLoadJSON") {
            addEventListener(Event.COMPLETE, jsonIsLoaded);
		}
        if (request == null) {
            request = new URLRequest(url);
		}
        if (!request.data) {
            request.data = sendData();
		}
        request.method = ((_sendBy == "get")) ? URLRequestMethod.GET : URLRequestMethod.POST;
        if (_sendBy == "xml") {
            request.contentType = "text/xml";
		}
        try{
            load(request);
        }        catch (error : Error){
            errorFn();
        }
    }
    
/**
 * Error handler
 */
    private function errorFn(event : Dynamic = null) : Void{
        if (event == null && Std.is(event, Event)) 
            dispatchEvent(event)
        else 
        dispatchEvent(new Event(ERROR));
      //  removeNetConnectionListeners(event.target);
    }
    
/**
 * XML data loaded handler
 */
    private function isLoaded(event : Event) : Void{
		var regularExpression = ~/xmlns=[^\\"]*\\"[^\\"]*\\"'/g;
        var stringData : String = data;
		regularExpression.replace(stringData, "");
        dataXML = MadXML.parse(htmlDecode(stringData));
        dispatchEvent(new Event(LOADED));
        removeEventListener(Event.COMPLETE, isLoaded);
    }
    
/**
 * JSON data loaded handler
 */
    private function jsonIsLoaded(event : Event) : Void{
        //	dataAMF = com.danielfreeman.madcomponents.TinyJSON.parse(data);
        dataAMF = haxe.Json.parse(data);
        dispatchEvent(new Event(LOADED));
        removeEventListener(Event.COMPLETE, jsonIsLoaded);
    }
    
/**
 * XML data loaded
 */
    private function set_dataXML(xml : MadXML) : MadXML{
        var schema : MadXML = _schema;
        xml = xmlPath(xml, _path);
        if (_path != "" && _schema != null) {
            schema = _schema.parent();
        }
        if (Std.is(_parent, UIList)) {
            var arrayCollectionList : Array<Dynamic> = listData(xml, schema);
            cast((_parent), UIList).data = arrayCollectionList;
        }
        else
			if (Std.is(_parent, UIForm)) {
            var valuesObject : Dynamic = listValues(xml, schema);
            cast((_parent), UIForm).data = valuesObject;
        }
        return xml;
    }
    
/**
 * AMF object property
 */
    private function get_dataAMF() : Dynamic{
        return _amfData;
    }
    
/**
 * Convert XML to an array of objects
 */
    private function listData(xml : MadXML, schema : MadXML) : Array<Dynamic>{
        var result : Array<Dynamic> = null;
        var items : MadXMLList = xml.children();
        if (schema == null) {
            result = [];
            for (item0 in items)
            if (_filter == "" || item0.name == _filter) {
                result.push(xmlToObject(item0));
            }
        }
        else {
            var schemaChildren : MadXMLList = schema.children();
            if (items.length() == 1 && schemaChildren.length() == 1 && schemaChildren.get(0).hasChildren) {
                result = listData(items.get(0), schemaChildren.get(0));
                if (result != null) 
                    return result;
            }
            if (items.length() > 1) {
                result = [];
                var schemaGrandChildren : MadXMLList = schemaChildren.get(0).children();
                for (item in items){
                    if (schema.child0(item.name).length() > 0) {
                        var rowResult : Dynamic = listObject(item, schemaGrandChildren);
                        attributeValues(item, schemaChildren.get(0), rowResult);
                        result.push(rowResult);
                    }
                }
            }
        }
        return result;
    }
    
    
    private function attributeValues(item : MadXML, childSchema : MadXML, result : Dynamic) : Void{
        var schemaAttributes = childSchema.x.attributes();
        for (schemaAttributeKey in schemaAttributes) {
            var schemaAttributeValue : String = childSchema.x.get(schemaAttributeKey);
            Reflect.setField(result, (schemaAttributeValue != "") ? schemaAttributeValue : schemaAttributeKey, item.x.get(schemaAttributeKey));
			 }
    }
    
/**
 * Convert XML to an array of objects
 */
    private function listValues(item : MadXML, childSchema : MadXML) : Map<String, String>{
        var result : Map<String, String> = new Map<String, String>();
        if (childSchema == null) {
            return xmlToObject(item);
        }
        else if (!item.hasChildren) {
            attributeValues(item, childSchema, result);
            result[childSchema.name] = item.toString();
            return result;
        }
        else {
            attributeValues(item, childSchema, result);
            return listObject(item, childSchema.children(), result);
        }
    }
    
/**
 * Convert XML branch to an array of objects
 */
    private function listObject(item : MadXML, childSchema : MadXMLList, result : Dynamic = null) : Map<String, String>{
        
        if (result == null) {
            result = new Map<String, String>();
            if (!item.hasChildren && childSchema.length() == 1 && childSchema.get(0).nodeKindIsText) {
                Reflect.setField(result, childSchema.toString(), item.toString());
                return result;
            }
        }
        
        for (child in childSchema)
			if (child.nodeKindIsText) {  //?
            var tagName : String = child.name;
            if (!child.hasChildren) {
                var field : String = child.toString();
                if (field == "") {
                    field = tagName;
                }
                attributeValues(item.child0(tagName), child, result);
                var head : String = Reflect.field(result, field);
                Reflect.setField(result, field, ((head != null) ? head + " " : "") + item.child0(tagName).toString());
            }
            else {
                attributeValues(item.child0(tagName), child.child0(), result);
                result = listObject(item.child0(tagName), child.children(), result);
            }
        }
        return result;
    }
    
/**
 * Convert XML to an array of objects, where no model is specified.  Tag names correspond to ids.
 */
    private function xmlToObject(xml : MadXML) : Dynamic{
        var result : Dynamic = { };
        var children : MadXMLList = xml.children();
        if (children.length() == 1 && children.get(0).nodeKindIsText) {
            Reflect.setField(result, xml.name, children.toString());
        }
        else {
			for (child in children) {
                Reflect.setField(result, child.name, (!child.hasChildren) ? children.toString() : xmlToObject(child));
            }
        }
        return result;
    }
    
/**
 * Traverse XML tree according to path
 */
    private function xmlPath(xml : MadXML, path : String) : MadXML{
        var pathArray : Array<String> = path.split(".");
        for (i in 1...pathArray.length){
			xml = new MadXML(xml.x.elementsNamed(pathArray[i]).next());
        }
        return xml;
    }
    
/**
 * Prepare the data to send to the server
 */
    public function sendData(sendBy : String = "") : Dynamic{
        if (sendBy != "") {
            _sendBy = sendBy;
		}
        var result : MadXML = MadXML.parse(_sendSchema.innerHTML);
        _dataString = new URLVariables();
        substitute(result);
        return _dataString;
    }
    
    
    private function substitute(data : MadXML) : Void{
        for (item in data.children()){
            if (!item.hasChildren) {
                var obj : Dynamic = cast((_parent), UIForm).findViewById(item.name);
                if (obj != null && obj.exists("text")) {
                    Reflect.setField(_dataString, item.name, obj.text);
                }
            }
            else {
                substitute(item);
            }
        }
    }
}
