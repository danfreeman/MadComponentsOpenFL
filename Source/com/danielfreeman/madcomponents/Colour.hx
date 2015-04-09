package com.danielfreeman.madcomponents;


class Colour
{
    public static function limit(n:Int, hi:Int, lo:Int):Int
    {
    	if (n < lo) return lo else if (n > hi) return hi else return n;
    }

    public static function darken(n:Int, amount:Int = -64):Int
    {
    	var r:Int;
    	var g:Int;
    	var b:Int;
    	var tot:Int;
    	r = n >> 16 & 0xff;
    	g = n >> 8 & 0xff;
    	b = n & 0xff;
    	return (limit(r + amount, 0xff, 0) << 16) + (limit(g + amount, 0xff, 0) << 8) + (limit(b + amount, 0xff, 0));
    }

    public static function lighten(n:Int, amount:Int = 16):Int
    {
    	return darken(n, amount);
    }

    public static function power(value:Int):Float
    {
    	return (((value >> 16) & 0xFF) + ((value >> 8) & 0xFF) + (value & 0xFF)) / 765.0;
    }

    public function new()
    { }
}
