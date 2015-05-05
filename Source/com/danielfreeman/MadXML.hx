//This is based on the FastXML Class that comes with as3hx.
//Modifications and additions by Daniel Freeman.

package com.danielfreeman;


private class NodeAccess implements Dynamic<MadXML> {

    var __x : Xml;

    public function new( x : Xml ) {
        __x = x;
    }

    public function resolve( name : String ) : MadXML {
        var x = __x.elementsNamed(name).next();
        if( x == null ) {
            var xname = if( __x.nodeType == Xml.Document ) "Document" else __x.nodeName;
            throw xname+" is missing element "+name;
        }
        return new MadXML(x);
    }

}

private class AttribAccess implements Dynamic<String> {

    var __x : Xml;

    public function new( x : Xml ) {
        __x = x;
    }

    public function resolve( name : String ) : String {
        if( __x.nodeType == Xml.Document )
            throw "Cannot access document attribute "+name;
        var v = __x.get(name);
        if( v == null )
            throw __x.nodeName+" is missing attribute "+name;
        return v;
    }

}

private class HasAttribAccess implements Dynamic<Bool> {

    var __x : Xml;

    public function new( x : Xml ) {
        __x = x;
    }

    public function resolve( name : String ) : Bool {
        if( __x.nodeType == Xml.Document )
            throw "Cannot access document attribute "+name;
        return __x.exists(name);
    }

}

private class HasNodeAccess implements Dynamic<Bool> {

    var __x : Xml;

    public function new( x : Xml ) {
        __x = x;
    }

    public function resolve( name : String ) : Bool {
        return __x.elementsNamed(name).hasNext();
    }

}

private class NodeListAccess implements Dynamic<MadXMLList> {

    var __x : Xml;

    public function new( x : Xml ) {
        __x = x;
    }

    public function resolve( name : String ) : MadXMLList {
        var l = new Array();
        for( x in __x.elementsNamed(name) ) 
            l.push(new MadXML(x));
        return new MadXMLList(l);
    }

}

class MadXML {

    public var x(default,null) : Xml;
    public var name(get_name,null) : String;
    public var innerData(get_innerData,null) : String;
    public var innerHTML(get_innerHTML,null) : String;
    public var node(default,null) : NodeAccess;
    public var nodes(default,null) : NodeListAccess;
    public var att(default,null) : AttribAccess;
    public var has(default,null) : HasAttribAccess;
    public var hasNode(default,null) : HasNodeAccess;
    public var elements(get_elements,null) : Iterator<MadXML>;
	
	public var hasChildren(get, null):Bool;
	public var nodeKindIsText(get, null):Bool;


    public function new( x : Xml ) {
        if( x.nodeType != Xml.Document && x.nodeType != Xml.Element ) {
            throw "Invalid nodeType "+x.nodeType;
		}
        this.x = x;
        node = new NodeAccess(x);
        nodes = new NodeListAccess(x);
        att = new AttribAccess(x);
        has = new HasAttribAccess(x);
        hasNode = new HasNodeAccess(x);
    }

    public function appendChild( a : Dynamic ) {
        if( Std.is(a, Xml) )
            x.addChild(a);
        else
            x.addChild(Xml.parse(a));
    }

    public function descendants(name:String = "*") : MadXMLList {
        var a = new Array<MadXML>();
        for(e in x.elements()) {
            if(e.nodeName == name || name == "*") {
                a.push(new MadXML(e));
            } else {
                var fx = new MadXML(e);
                a = a.concat(fx.descendants(name).getArray());
            }
        }
        return new MadXMLList(a);
    }

    /**
     * Return the specified attribute, or null if it does not exist
     * @throws String if the nodeType is an XML Document
     **/
    public function getAttribute(name:String) : String {
        if( x.nodeType == Xml.Document )
            throw "Cannot access document attribute "+name;
        var v = x.get(name);
        return v;
    }

    function get_name() {
        return if( x.nodeType == Xml.Document ) "Document" else x.nodeName;
    }

    function get_innerData() {
        var it = x.iterator();
        if( !it.hasNext() )
            throw name+" does not have data";
        var v = it.next();
        var n = it.next();
        if( n != null ) {
            // handle <spaces>CDATA<spaces>
            if( v.nodeType == Xml.PCData && n.nodeType == Xml.CData && StringTools.trim(v.nodeValue) == "" ) {
                var n2 = it.next();
                if( n2 == null || (n2.nodeType == Xml.PCData && StringTools.trim(n2.nodeValue) == "" && it.next() == null) )
                    return n.nodeValue;
            }
            throw name+" does not only have data";
        }
        if( v.nodeType != Xml.PCData && v.nodeType != Xml.CData )
            throw name+" does not have data";
        return v.nodeValue;
    }

    function get_innerHTML() {
        var s = new StringBuf();
        for( x in x )
            s.add(x.toString());
        return s.toString();
    }

    function get_elements() {
        var it = x.elements();
        return {
            hasNext : it.hasNext,
            next : function() {
                var x = it.next();
                if( x == null )
                    return null;
                return new MadXML(x);
            }
        };
    }

    public function length() : Int {
        return 1;
    }

    public function setAttribute(name:String, value:String) : Void {
        if( x.nodeType == Xml.Document )
            throw "Cannot access document attribute "+name;
        x.set(name,value);
    }
    


    public static function parse(s:String) : MadXML {
        var x = Xml.parse(s);
        return new MadXML(x.firstChild());
    }

    public static function filterNodes(a : MadXMLList, f : MadXML -> Bool) : MadXMLList {
        var rv = new Array();
        for(i in a)
            if(f(i))
                rv.push(i);
        return new MadXMLList(rv);
    }


/* The following methods were added by Daniel Freeman 
*/

	public function get_hasChildren():Bool {
		return children().length() > 0;
	}


    public function toXMLString() : String {
        return x.toString();
    }


	public function toString():String {
 		return hasChildren ? toXMLString() : innerHTML;
	}


    public function children(name:String = "*") : MadXMLList {
        var a = new Array<MadXML>();
        for(e in x.elements()) {
            if(e.nodeName == name || name == "*") {
                a.push(new MadXML(e));
            }
        }
        return new MadXMLList(a);
    }
		
		
	public function hasChild(name:String = "*"):Bool {
		return x.elementsNamed(name).hasNext();
	}
		
		
	public function child0(name:String = "*"):MadXML {
		return new MadXML(x.elementsNamed(name).next());
	}	
	

	public function parent():MadXML {
		return new MadXML(x.parent);
	}


	public function get_nodeKindIsText():Bool {
		return x.nodeType == Xml.PCData;
	}
}
