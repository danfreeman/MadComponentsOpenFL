package com.danielfreeman.extendedmadness;

import openfl.text.TextFormat;
import openfl.display.DisplayObject;
import openfl.display.Bitmap;
import com.danielfreeman.extendedmadness.UIFastDataGrid;

import openfl.display.Sprite;

import com.danielfreeman.madcomponents.Attributes;

/**
 *  Datagrid component
 * <pre>
 * &lt;specialDataGrid
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    alignH = "left|right|centre|fill"
 *    alignV = "top|bottom|centre|fill"
 *    widths = "i(%),j(%),k(%)…"
 *    multiline = "true|false"
 *    wordWrap = "true|false"
 *    titleBarColour = "#rrggbb"
 *    recycle = "true|false|shared"
 *    headerLines = "true|false"
 *    colSpan = "true|false"
 *    colSpanWrap = "true|false"
 *    imageMarginH = "NUMBER"
 *    imageMarginV = "NUMBER"
 *    &lt;title/&gt;
 *    &lt;font/&gt;
 *    &lt;headerFont/&gt;
 *    &lt;titleFont/&gt;
 *    &lt;header/&gt;
 *    &lt;data&gt;
 *    	&lt;header/&gt;
 *    &lt;/data&gt;
 *    &lt;widths/&gt; (depreciated)
 * /&gt;
 * </pre>
 */
class UISpecialDataGrid extends UIFastDataGrid
{
    
    private var _dataAndExtras : Array<Dynamic>;
    private var _imageMarginH : Float = 0;
    private var _imageMarginV : Float = 0;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        if (xml.has.imageMarginH) {
            _imageMarginH = Std.parseFloat(xml.att.imageMarginH);
        }
        if (xml.has.imageMarginV) {
            _imageMarginV = Std.parseFloat(xml.att.imageMarginV);
        }
        super(screen, xml, attributes);
    }
    
    
    override private function initialHeight(rowIndex : Int) : Float{
        if (_dataAndExtras == null || _dataAndExtras.length == 0) {
            return 0;
        }
        var result : Float = 0;
        var extrasRow : Array<Dynamic> = _dataAndExtras[rowIndex];
        for (item in extrasRow){
            if (Std.is(item, Array)) {
                for (node in cast(item, Array<Dynamic>)) {
                    if (node != null) {
                        result = Math.max(2 * _imageMarginV + node.height, result);
                    }
                }
            }
            else if (item != null && Std.is(item, DisplayObject)) {
                result = Math.max(2 * _imageMarginV + cast((item), DisplayObject).height, result);
            }
        }
        return result;
    }
    
    
override private function rejig() : Void {
        super.rejig();
        if (_dataAndExtras != null && _dataAndExtras.length == _table.length) {
            for (i in 0..._table.length) {
                var row : Array<UICell> = _table[i];
                var extrasRow : Array<Dynamic> = _dataAndExtras[i];
                for (j in 0...row.length) {
                    var item : Dynamic = extrasRow[j];
                    if (item != null) {
                        var cell : UICell = row[j];
                        if (Std.is(item, Array)) {
                            var position : Float = cell.x + _imageMarginH;
                            var rightPosition : Float = cell.x + cell.width - cell.getTextFormat().rightMargin + _imageMarginH;
							trace("position=", position, "rightPosition=", rightPosition, cell.getTextFormat().rightMargin);
                            for (node in cast(item, Array<Dynamic>)) {
                                trace(i, j, node, position);
								if (node == null) {
                                    position = rightPosition;
                                }
                                else if (Std.is(node, DisplayObject)) {
                                    cast((node), DisplayObject).x = position;trace(node,".x=",position);
                                    cast((node), DisplayObject).y = cell.y + _imageMarginV;
                                    position += cast((node), DisplayObject).width + _imageMarginH;
                                }
                            }
                        }
                        else if (Std.is(item, DisplayObject)) {
							trace("here!?", item);
                            cast((item), DisplayObject).x = cell.x + _imageMarginH;
                            cast((item), DisplayObject).y = cell.y + _imageMarginV;
                        }
                    }
                }
            }
        }
    }
    
    
    private function extractSpecialRow(row : Array<Dynamic>) : Array<Dynamic>{
        var resultRow : Array<Dynamic> = [];
        for (i in 0...row.length){
            var item : Dynamic = row[i];
            if (Std.is(item, Array)) {
                var textPart : String = "";
                var right : Bool = false;
                var leftMargin : Float = _imageMarginH;
                var rightMargin : Float = _imageMarginH;
                for (j in 0...item.length){
                    var node : Dynamic = item[j];
                    if (Std.is(node, String)) {
                        textPart = Std.string(node);
                        item[j] = null;
                        right = true;
                    }
                    else {
						var nodeInstance : DisplayObject;
						if (Std.is(node, Class)) {
                            item[j] = nodeInstance = new Bitmap(Type.createInstance(node, [0, 0]));
                        }
						else {
							nodeInstance = node;
						}
                        addChild(nodeInstance);
                        if (right) {
                            rightMargin += nodeInstance.width + _imageMarginH;
                        }
                        else {
                            leftMargin += nodeInstance.width + _imageMarginH;
                        }
                    }
                }
                resultRow.push("<textformat leftmargin=\"" + Std.string(leftMargin) + "\" rightmargin=\"" + Std.string(rightMargin) + "\">" + textPart + "</textformat>");
            }
            else if (Std.is(item, String) || Std.is(item, Float)) {
                resultRow.push(cast(item, String));
                row[i] = null;
            }
            else if (Std.is(item, Class)) {
                resultRow.push(null);
                addChild(row[i] = new Bitmap(Type.createInstance(item, [0, 0])));
            }
            else if (item != null) {
                resultRow.push(null);
                addChild(cast((item), DisplayObject));
            }
        }
        return resultRow;
    }
    
    
    private function extractSpecialData(value : Array<Array<Dynamic>>) : Array<Array<Dynamic>>{
        var result : Array<Array<Dynamic>> = [];
        for (row in value){
            result.push(extractSpecialRow(row));
        }
        return result;
    }
    
    
    override private function set_data(value : Array<Array<Dynamic>>) : Array<Array<Dynamic>>{
        clearExtras();
        _dataAndExtras = value;
        setData(extractSpecialData(value));
        return value;
    }
    
    
    override private function set_headerAndData(value : Array<Array<Dynamic>>) : Array<Array<Dynamic>>{
        clearExtras();
        _dataAndExtras = value;
        setData(extractSpecialData(value), true);
        return value;
    }
    
    
    private function clearExtrasRow(row : Array<Dynamic>) : Void{
        for (item in row){
            if (Std.is(item, Array)) {
                for (node in cast(item, Array<Dynamic>)){
                    if (node != null && Std.is(node, DisplayObject)) {
                        cast((node), DisplayObject).parent.removeChild(cast((node), DisplayObject));
                    }
                }
            }
            else if (item != null && Std.is(item, DisplayObject)) {
                cast((item), DisplayObject).parent.removeChild(cast((item), DisplayObject));
            }
        }
    }
    
    
    private function clearExtras() : Void{
		if (_dataAndExtras != null) {
        	for (row in _dataAndExtras){
            	clearExtrasRow(row);
        	}
		}
        _dataAndExtras = null;
    }
    
    
    override public function clear() : Void{
        super.clear();
        clearExtras();
    }
    
    
    public function copyColumns(destination : Sprite, n : Int) : Void{
        for (row in _dataAndExtras){
            for (i in 0...n){
                var item : Dynamic = row[i];
                if (Std.is(item, Array)) {
                    for (node in cast(item, Array<Dynamic>)){
                        if (node != null && Std.is(node, DisplayObject)) {
                            destination.addChild(cast((node), DisplayObject));
                        }
                    }
                }
                else if (item != null && Std.is(item, DisplayObject)) {
                    destination.addChild(cast((item), DisplayObject));
                }
            }
        }
    }
    
    
/**
 *  Grid row colours
 */
    override public function swapRows(rowIndexA : Int, rowIndexB : Int) : Void{
        var rowA : Array<Dynamic> = _dataAndExtras[rowIndexA];
        var rowB : Array<Dynamic> = _dataAndExtras[rowIndexB];
        _dataAndExtras[rowIndexA] = rowB;
        _dataAndExtras[rowIndexB] = rowA;
        super.swapRows(rowIndexA, rowIndexB);
    }
    
    /**
 *  Shift rows up or down - utilised when inserting or deleting rows
 */
    override private function shiftRows(index : Int, deltaHeight : Float) : Void{
        super.shiftRows(index, deltaHeight);
        for (i in index..._dataAndExtras.length){
            var row : Array<Dynamic> = _dataAndExtras[i];
            for (item in row){
                if (Std.is(item, Array)) {
                    for (node in cast(item, Array<Dynamic>)){
                        if (node != null && Std.is(node, DisplayObject)) {
                            node.y += deltaHeight;
                        }
                    }
                }
                else if (item != null && Std.is(item, DisplayObject)) {
                    item.y += deltaHeight;
                }
            }
        }
    }
    
/**
 *  Insert a row within the datagrid
 */
    override public function insertRow(rowIndex : Int, rowData : Array<Dynamic>) : Void{
    //    _dataAndExtras.splice(rowIndex, 0, rowData);
		_dataAndExtras.insert(rowIndex, rowData);
        super.insertRow(rowIndex, extractSpecialRow(rowData));
    }
    
/**
 *  Delete a specific row from the datagrid
 */
    override public function deleteRow(rowIndex : Int) : Void{
        clearExtrasRow(_dataAndExtras[rowIndex]);
        _dataAndExtras.splice(rowIndex, 1);
        super.deleteRow(rowIndex);
    }
}

