class MadXMLList {
    var l : Array<MadXML>;

    public function new(?a:Array<MadXML>) {
        l = (a != null ? a : new Array());
    }

    /**
     * Makes a copy of the MadXMLList
     **/
    public function copy() : MadXMLList {
        return new MadXMLList(l.slice(0));
    }

    public function descendants(name:String = "*") :MadXMLList {
        var a = new Array<MadXML>();
        for(fx in l) {
            for(e in fx.x.elements()) {
                if(e.nodeName == name || name == "*") {
                    a.push(new MadXML(e));
                } else {
                    var fx2 = new MadXML(e);
                    a = a.concat(fx2.descendants(name).getArray());
                }
            }
        }
        return new MadXMLList(a);
    }

    public function get(i:Int) : MadXML {
        return l[i];
    }

    public function getArray() : Array<MadXML> {
        return l;
    }

    public function iterator() : Iterator<MadXML> {
        return l.iterator();
    }
    
    public function length() : Int {
        return l.length;
    }

    /**
     * 
    public function set(i:Int, v:FastXML) : FastXML {
        l[i] = v;
        return v;
    }
    */

    public function toString() : String {
        var s = "";
        var first = true;
        for(i in l) {
            if(!first)
                s += "\r\n";
            first = false;
            s = s + i.toString();
        }
        return s;
    }
}