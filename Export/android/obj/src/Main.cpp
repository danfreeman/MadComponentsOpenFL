#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIe
#include <com/danielfreeman/extendedmadness/UIe.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageQuality
#include <openfl/display/StageQuality.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Main_obj::__construct(::openfl::display::Sprite screen)
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",510,0x087e5c05)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
{
	HX_STACK_LINE(512)
	super::__construct();
	HX_STACK_LINE(514)
	if (((screen != null()))){
		HX_STACK_LINE(515)
		screen->addChild(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(517)
	this->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
	HX_STACK_LINE(518)
	this->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
	HX_STACK_LINE(519)
	this->get_stage()->set_quality(::openfl::display::StageQuality_obj::LOW);
	HX_STACK_LINE(521)
	::MadXML _g = ::MadXML_obj::parse(((((HX_CSTRING("<scrollTouchGrids id=\"scrollGrids\" fixedColumns=\"0\" gapV=\"0\" editButton=\"true\" showPressed=\"true\">") + (HX_CSTRING("<fastDataGrid titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCCCCC\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Datagrid 0</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#EEEEFF\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>aaa,bbb,ccc,ddd</header>\n\t\t\t\t<row>876,283,456,745</row>\n\t\t\t\t<row>106,374,584,982</row>\n\t\t\t</data></fastDataGrid>"))) + (HX_CSTRING("<fastDataGrid id=\"dataGrid1\" titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCCCFF\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Datagrid 1</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#EEFFEE\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>aaa,bbb,ccc,ddd</header>\n\t\t\t\t<row>876,283,456,745</row>\n\t\t\t\t<row>106,374,584,982</row>\n\t\t\t</data></fastDataGrid>"))) + (HX_CSTRING("<fastDataGrid titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCFFCC\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Datagrid 2</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#FFEEEE\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>number,colour,shape</header>\n\t\t\t\t<row>six,red,triangle</row>\n\t\t\t\t<row>seven,orange,square</row>\n\t\t\t\t<row>eight,yellow,pentagon</row>\n\t\t\t\t<row>nine,green,hexagon</row>\n\t\t\t\t<row>ten,blue,septagon</row>\n\t\t\t\t<row>eleven,indigo,octagon</row>\n\t\t\t\t<row>twelve,violet,nonagon</row>\n\t\t\t</data></fastDataGrid>"))) + HX_CSTRING("</scrollTouchGrids>")));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(521)
	::com::danielfreeman::extendedmadness::UIe_obj::create(hx::ObjectPtr<OBJ_>(this),_g,null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new(::openfl::display::Sprite screen)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct(screen);
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Main_obj::TEST_STRING;

::String Main_obj::DATA;

::String Main_obj::DATA_PLUS;

::String Main_obj::GROUPED_DATA;

::String Main_obj::LIST;

::String Main_obj::LIST_RENDERER;

::String Main_obj::LISTR;

::String Main_obj::GROUPED_LIST;

::String Main_obj::DIVIDED_LIST;

::String Main_obj::PAGE;

::String Main_obj::NAVIGATION;

::String Main_obj::TAB_DATA;

::String Main_obj::TAB_PAGES;

::String Main_obj::TAB_PAGES_TOP;

::String Main_obj::ICONS;

::String Main_obj::GRID_DATA;

::String Main_obj::DATAGRID;

::String Main_obj::SCROLLGRID;

::String Main_obj::SCROLLING_DATAGRIDS;

::String Main_obj::GRID_LAYOUT0;

::String Main_obj::GRID_DATA0;

::String Main_obj::GRID_DATA1;

::String Main_obj::DATAGRID0;

::String Main_obj::DATAGRID1;

::String Main_obj::DATAGRID2;

::String Main_obj::GRID_LAYOUT1;

::String Main_obj::RENDERER;

::String Main_obj::TABLE;

::String Main_obj::TOUCH;

::String Main_obj::LIST_MODEL0;

::String Main_obj::LIST_MODEL1;

::String Main_obj::LIST_MODEL2;

::String Main_obj::XML_MODEL;

::String Main_obj::PAGE0;

::String Main_obj::PAGE1;

::String Main_obj::PAGE2;

::String Main_obj::PAGE3;

::String Main_obj::PAGE4;

::String Main_obj::MENU0;

::String Main_obj::MENU1;

::String Main_obj::NESTED_NAVIGATION_PAGES;


Main_obj::Main_obj()
{
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TEST_STRING"),
	HX_CSTRING("DATA"),
	HX_CSTRING("DATA_PLUS"),
	HX_CSTRING("GROUPED_DATA"),
	HX_CSTRING("LIST"),
	HX_CSTRING("LIST_RENDERER"),
	HX_CSTRING("LISTR"),
	HX_CSTRING("GROUPED_LIST"),
	HX_CSTRING("DIVIDED_LIST"),
	HX_CSTRING("PAGE"),
	HX_CSTRING("NAVIGATION"),
	HX_CSTRING("TAB_DATA"),
	HX_CSTRING("TAB_PAGES"),
	HX_CSTRING("TAB_PAGES_TOP"),
	HX_CSTRING("ICONS"),
	HX_CSTRING("GRID_DATA"),
	HX_CSTRING("DATAGRID"),
	HX_CSTRING("SCROLLGRID"),
	HX_CSTRING("SCROLLING_DATAGRIDS"),
	HX_CSTRING("GRID_LAYOUT0"),
	HX_CSTRING("GRID_DATA0"),
	HX_CSTRING("GRID_DATA1"),
	HX_CSTRING("DATAGRID0"),
	HX_CSTRING("DATAGRID1"),
	HX_CSTRING("DATAGRID2"),
	HX_CSTRING("GRID_LAYOUT1"),
	HX_CSTRING("RENDERER"),
	HX_CSTRING("TABLE"),
	HX_CSTRING("TOUCH"),
	HX_CSTRING("LIST_MODEL0"),
	HX_CSTRING("LIST_MODEL1"),
	HX_CSTRING("LIST_MODEL2"),
	HX_CSTRING("XML_MODEL"),
	HX_CSTRING("PAGE0"),
	HX_CSTRING("PAGE1"),
	HX_CSTRING("PAGE2"),
	HX_CSTRING("PAGE3"),
	HX_CSTRING("PAGE4"),
	HX_CSTRING("MENU0"),
	HX_CSTRING("MENU1"),
	HX_CSTRING("NESTED_NAVIGATION_PAGES"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::TEST_STRING,"TEST_STRING");
	HX_MARK_MEMBER_NAME(Main_obj::DATA,"DATA");
	HX_MARK_MEMBER_NAME(Main_obj::DATA_PLUS,"DATA_PLUS");
	HX_MARK_MEMBER_NAME(Main_obj::GROUPED_DATA,"GROUPED_DATA");
	HX_MARK_MEMBER_NAME(Main_obj::LIST,"LIST");
	HX_MARK_MEMBER_NAME(Main_obj::LIST_RENDERER,"LIST_RENDERER");
	HX_MARK_MEMBER_NAME(Main_obj::LISTR,"LISTR");
	HX_MARK_MEMBER_NAME(Main_obj::GROUPED_LIST,"GROUPED_LIST");
	HX_MARK_MEMBER_NAME(Main_obj::DIVIDED_LIST,"DIVIDED_LIST");
	HX_MARK_MEMBER_NAME(Main_obj::PAGE,"PAGE");
	HX_MARK_MEMBER_NAME(Main_obj::NAVIGATION,"NAVIGATION");
	HX_MARK_MEMBER_NAME(Main_obj::TAB_DATA,"TAB_DATA");
	HX_MARK_MEMBER_NAME(Main_obj::TAB_PAGES,"TAB_PAGES");
	HX_MARK_MEMBER_NAME(Main_obj::TAB_PAGES_TOP,"TAB_PAGES_TOP");
	HX_MARK_MEMBER_NAME(Main_obj::ICONS,"ICONS");
	HX_MARK_MEMBER_NAME(Main_obj::GRID_DATA,"GRID_DATA");
	HX_MARK_MEMBER_NAME(Main_obj::DATAGRID,"DATAGRID");
	HX_MARK_MEMBER_NAME(Main_obj::SCROLLGRID,"SCROLLGRID");
	HX_MARK_MEMBER_NAME(Main_obj::SCROLLING_DATAGRIDS,"SCROLLING_DATAGRIDS");
	HX_MARK_MEMBER_NAME(Main_obj::GRID_LAYOUT0,"GRID_LAYOUT0");
	HX_MARK_MEMBER_NAME(Main_obj::GRID_DATA0,"GRID_DATA0");
	HX_MARK_MEMBER_NAME(Main_obj::GRID_DATA1,"GRID_DATA1");
	HX_MARK_MEMBER_NAME(Main_obj::DATAGRID0,"DATAGRID0");
	HX_MARK_MEMBER_NAME(Main_obj::DATAGRID1,"DATAGRID1");
	HX_MARK_MEMBER_NAME(Main_obj::DATAGRID2,"DATAGRID2");
	HX_MARK_MEMBER_NAME(Main_obj::GRID_LAYOUT1,"GRID_LAYOUT1");
	HX_MARK_MEMBER_NAME(Main_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(Main_obj::TABLE,"TABLE");
	HX_MARK_MEMBER_NAME(Main_obj::TOUCH,"TOUCH");
	HX_MARK_MEMBER_NAME(Main_obj::LIST_MODEL0,"LIST_MODEL0");
	HX_MARK_MEMBER_NAME(Main_obj::LIST_MODEL1,"LIST_MODEL1");
	HX_MARK_MEMBER_NAME(Main_obj::LIST_MODEL2,"LIST_MODEL2");
	HX_MARK_MEMBER_NAME(Main_obj::XML_MODEL,"XML_MODEL");
	HX_MARK_MEMBER_NAME(Main_obj::PAGE0,"PAGE0");
	HX_MARK_MEMBER_NAME(Main_obj::PAGE1,"PAGE1");
	HX_MARK_MEMBER_NAME(Main_obj::PAGE2,"PAGE2");
	HX_MARK_MEMBER_NAME(Main_obj::PAGE3,"PAGE3");
	HX_MARK_MEMBER_NAME(Main_obj::PAGE4,"PAGE4");
	HX_MARK_MEMBER_NAME(Main_obj::MENU0,"MENU0");
	HX_MARK_MEMBER_NAME(Main_obj::MENU1,"MENU1");
	HX_MARK_MEMBER_NAME(Main_obj::NESTED_NAVIGATION_PAGES,"NESTED_NAVIGATION_PAGES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::TEST_STRING,"TEST_STRING");
	HX_VISIT_MEMBER_NAME(Main_obj::DATA,"DATA");
	HX_VISIT_MEMBER_NAME(Main_obj::DATA_PLUS,"DATA_PLUS");
	HX_VISIT_MEMBER_NAME(Main_obj::GROUPED_DATA,"GROUPED_DATA");
	HX_VISIT_MEMBER_NAME(Main_obj::LIST,"LIST");
	HX_VISIT_MEMBER_NAME(Main_obj::LIST_RENDERER,"LIST_RENDERER");
	HX_VISIT_MEMBER_NAME(Main_obj::LISTR,"LISTR");
	HX_VISIT_MEMBER_NAME(Main_obj::GROUPED_LIST,"GROUPED_LIST");
	HX_VISIT_MEMBER_NAME(Main_obj::DIVIDED_LIST,"DIVIDED_LIST");
	HX_VISIT_MEMBER_NAME(Main_obj::PAGE,"PAGE");
	HX_VISIT_MEMBER_NAME(Main_obj::NAVIGATION,"NAVIGATION");
	HX_VISIT_MEMBER_NAME(Main_obj::TAB_DATA,"TAB_DATA");
	HX_VISIT_MEMBER_NAME(Main_obj::TAB_PAGES,"TAB_PAGES");
	HX_VISIT_MEMBER_NAME(Main_obj::TAB_PAGES_TOP,"TAB_PAGES_TOP");
	HX_VISIT_MEMBER_NAME(Main_obj::ICONS,"ICONS");
	HX_VISIT_MEMBER_NAME(Main_obj::GRID_DATA,"GRID_DATA");
	HX_VISIT_MEMBER_NAME(Main_obj::DATAGRID,"DATAGRID");
	HX_VISIT_MEMBER_NAME(Main_obj::SCROLLGRID,"SCROLLGRID");
	HX_VISIT_MEMBER_NAME(Main_obj::SCROLLING_DATAGRIDS,"SCROLLING_DATAGRIDS");
	HX_VISIT_MEMBER_NAME(Main_obj::GRID_LAYOUT0,"GRID_LAYOUT0");
	HX_VISIT_MEMBER_NAME(Main_obj::GRID_DATA0,"GRID_DATA0");
	HX_VISIT_MEMBER_NAME(Main_obj::GRID_DATA1,"GRID_DATA1");
	HX_VISIT_MEMBER_NAME(Main_obj::DATAGRID0,"DATAGRID0");
	HX_VISIT_MEMBER_NAME(Main_obj::DATAGRID1,"DATAGRID1");
	HX_VISIT_MEMBER_NAME(Main_obj::DATAGRID2,"DATAGRID2");
	HX_VISIT_MEMBER_NAME(Main_obj::GRID_LAYOUT1,"GRID_LAYOUT1");
	HX_VISIT_MEMBER_NAME(Main_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(Main_obj::TABLE,"TABLE");
	HX_VISIT_MEMBER_NAME(Main_obj::TOUCH,"TOUCH");
	HX_VISIT_MEMBER_NAME(Main_obj::LIST_MODEL0,"LIST_MODEL0");
	HX_VISIT_MEMBER_NAME(Main_obj::LIST_MODEL1,"LIST_MODEL1");
	HX_VISIT_MEMBER_NAME(Main_obj::LIST_MODEL2,"LIST_MODEL2");
	HX_VISIT_MEMBER_NAME(Main_obj::XML_MODEL,"XML_MODEL");
	HX_VISIT_MEMBER_NAME(Main_obj::PAGE0,"PAGE0");
	HX_VISIT_MEMBER_NAME(Main_obj::PAGE1,"PAGE1");
	HX_VISIT_MEMBER_NAME(Main_obj::PAGE2,"PAGE2");
	HX_VISIT_MEMBER_NAME(Main_obj::PAGE3,"PAGE3");
	HX_VISIT_MEMBER_NAME(Main_obj::PAGE4,"PAGE4");
	HX_VISIT_MEMBER_NAME(Main_obj::MENU0,"MENU0");
	HX_VISIT_MEMBER_NAME(Main_obj::MENU1,"MENU1");
	HX_VISIT_MEMBER_NAME(Main_obj::NESTED_NAVIGATION_PAGES,"NESTED_NAVIGATION_PAGES");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Main_obj::__boot()
{
	TEST_STRING= HX_CSTRING("Lorem ipsum dolor eiusmod tempor.");
	DATA= HX_CSTRING("<data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data>");
	DATA_PLUS= HX_CSTRING("<data>\n\t\t\t<item label=\"Sneezy\" _lines=\"true\" _colour=\"#FFFF00\" _highlight=\"false\"/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data>");
	GROUPED_DATA= HX_CSTRING("<data>\n\t\t\t\t<group label=\"dwarfs\">\n\t\t\t\t\t<Sneezy/>\n\t\t\t\t\t<Sleepy/>\n\t\t\t\t\t<Dopey/>\n\t\t\t\t\t<Doc/>\n\t\t\t\t\t<Happy/>\n\t\t\t\t\t<Bashful/>\n\t\t\t\t\t<Grumpy/>\n\t\t\t\t</group>\n\t\t\t\t<group label=\"reindeer\">\n\t\t\t\t\t<Dasher/>\n\t\t\t\t\t<Dancer/>\n\t\t\t\t\t<Prancer/>\n\t\t\t\t\t<Vixen/>\n\t\t\t\t\t<Comet/>\n\t\t\t\t\t<Cupid/>\n\t\t\t\t\t<Donder/>\n\t\t\t\t\t<Blitzen/>\n\t\t\t\t</group>\n\t\t\t\t<group label=\"colours\">\n\t\t\t\t\t<Red/>\n\t\t\t\t\t<Green/>\n\t\t\t\t\t<Blue/>\n\t\t\t\t</group>\n\t\t\t\t<group label=\"another\">\n\t\t\t\t\t<Here/>\n\t\t\t\t</group>\n\t\t\t</data>");
	LIST= HX_CSTRING("<list background=\"#CCFFFF\"><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></list>");
	LIST_RENDERER= HX_CSTRING("<columns>\n\t\t\t<label id=\"label\"/>\n\t\t\t<switch/>\n\t\t</columns>");
	LISTR= HX_CSTRING("<list background=\"#CCFFFF\"><columns>\n\t\t\t<label id=\"label\"/>\n\t\t\t<switch/>\n\t\t</columns><data>\n\t\t\t<item label=\"Sneezy\" _lines=\"true\" _colour=\"#FFFF00\" _highlight=\"false\"/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></list>");
	GROUPED_LIST= HX_CSTRING("<groupedList background=\"#CCFFFF\"><data>\n\t\t\t\t<group label=\"dwarfs\">\n\t\t\t\t\t<Sneezy/>\n\t\t\t\t\t<Sleepy/>\n\t\t\t\t\t<Dopey/>\n\t\t\t\t\t<Doc/>\n\t\t\t\t\t<Happy/>\n\t\t\t\t\t<Bashful/>\n\t\t\t\t\t<Grumpy/>\n\t\t\t\t</group>\n\t\t\t\t<group label=\"reindeer\">\n\t\t\t\t\t<Dasher/>\n\t\t\t\t\t<Dancer/>\n\t\t\t\t\t<Prancer/>\n\t\t\t\t\t<Vixen/>\n\t\t\t\t\t<Comet/>\n\t\t\t\t\t<Cupid/>\n\t\t\t\t\t<Donder/>\n\t\t\t\t\t<Blitzen/>\n\t\t\t\t</group>\n\t\t\t\t<group label=\"colours\">\n\t\t\t\t\t<Red/>\n\t\t\t\t\t<Green/>\n\t\t\t\t\t<Blue/>\n\t\t\t\t</group>\n\t\t\t\t<group label=\"another\">\n\t\t\t\t\t<Here/>\n\t\t\t\t</group>\n\t\t\t</data></groupedList>");
	DIVIDED_LIST= HX_CSTRING("<dividedList background=\"#CCFFFF\"><data>\n\t\t\t\t<group label=\"dwarfs\">\n\t\t\t\t\t<Sneezy/>\n\t\t\t\t\t<Sleepy/>\n\t\t\t\t\t<Dopey/>\n\t\t\t\t\t<Doc/>\n\t\t\t\t\t<Happy/>\n\t\t\t\t\t<Bashful/>\n\t\t\t\t\t<Grumpy/>\n\t\t\t\t</group>\n\t\t\t\t<group label=\"reindeer\">\n\t\t\t\t\t<Dasher/>\n\t\t\t\t\t<Dancer/>\n\t\t\t\t\t<Prancer/>\n\t\t\t\t\t<Vixen/>\n\t\t\t\t\t<Comet/>\n\t\t\t\t\t<Cupid/>\n\t\t\t\t\t<Donder/>\n\t\t\t\t\t<Blitzen/>\n\t\t\t\t</group>\n\t\t\t\t<group label=\"colours\">\n\t\t\t\t\t<Red/>\n\t\t\t\t\t<Green/>\n\t\t\t\t\t<Blue/>\n\t\t\t\t</group>\n\t\t\t\t<group label=\"another\">\n\t\t\t\t\t<Here/>\n\t\t\t\t</group>\n\t\t\t</data></dividedList>");
	PAGE= HX_CSTRING("<vertical background=\"#CCFFFF\">\n\t\t\t<label>Hello World</label>\n\t\t\t<input prompt=\"?\"/>\n\t\t\t<slider background=\"#FF9900\"/>\n\t\t\t<button colour=\"#FF9999\" alignH=\"fill\">abcdef</button>\n\t\t\t<switch/>\n\t\t\t<columns GapH=\"0\">\n\t\t\t\t<picker><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></picker>\n\t\t\t\t<picker><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></picker>\n\t\t\t\t<picker><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></picker>\n\t\t\t</columns>\n\t\t</vertical>");
	NAVIGATION= (((HX_CSTRING("<navigation style7=\"true\">") + (HX_CSTRING("<list background=\"#CCFFFF\"><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></list>"))) + (HX_CSTRING("<vertical background=\"#CCFFFF\">\n\t\t\t<label>Hello World</label>\n\t\t\t<input prompt=\"?\"/>\n\t\t\t<slider background=\"#FF9900\"/>\n\t\t\t<button colour=\"#FF9999\" alignH=\"fill\">abcdef</button>\n\t\t\t<switch/>\n\t\t\t<columns GapH=\"0\">\n\t\t\t\t<picker><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></picker>\n\t\t\t\t<picker><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></picker>\n\t\t\t\t<picker><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></picker>\n\t\t\t</columns>\n\t\t</vertical>"))) + HX_CSTRING("</navigation>"));
	TAB_DATA= HX_CSTRING("<data>\n\t\t\t<item label=\"page 1\"\n\t\t\t\tldpi=\"ERROR_LD\"\n\t\t\t\tmdpi=\"ERROR_MD\"\n\t\t\t\thdpi=\"ERROR_HD\"\n\t\t\t/>\n\t\t\t<item label=\"page 2\"\n\t\t\t\tldpi=\"SYNC_LD\"\n\t\t\t\tmdpi=\"SYNC_MD\"\n\t\t\t\thdpi=\"SYNC_HD\"\n\t\t\t/>\n\t\t</data>");
	TAB_PAGES= (((HX_CSTRING("<tabPages><data>\n\t\t\t<item label=\"page 1\"\n\t\t\t\tldpi=\"ERROR_LD\"\n\t\t\t\tmdpi=\"ERROR_MD\"\n\t\t\t\thdpi=\"ERROR_HD\"\n\t\t\t/>\n\t\t\t<item label=\"page 2\"\n\t\t\t\tldpi=\"SYNC_LD\"\n\t\t\t\tmdpi=\"SYNC_MD\"\n\t\t\t\thdpi=\"SYNC_HD\"\n\t\t\t/>\n\t\t</data>") + (HX_CSTRING("<list background=\"#CCFFFF\"><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></list>"))) + (HX_CSTRING("<vertical background=\"#CCFFFF\">\n\t\t\t<label>Hello World</label>\n\t\t\t<input prompt=\"?\"/>\n\t\t\t<slider background=\"#FF9900\"/>\n\t\t\t<button colour=\"#FF9999\" alignH=\"fill\">abcdef</button>\n\t\t\t<switch/>\n\t\t\t<columns GapH=\"0\">\n\t\t\t\t<picker><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></picker>\n\t\t\t\t<picker><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></picker>\n\t\t\t\t<picker><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></picker>\n\t\t\t</columns>\n\t\t</vertical>"))) + HX_CSTRING("</tabPages>"));
	TAB_PAGES_TOP= (((HX_CSTRING("<tabPagesTop><data>\n\t\t\t<item label=\"page 1\"\n\t\t\t\tldpi=\"ERROR_LD\"\n\t\t\t\tmdpi=\"ERROR_MD\"\n\t\t\t\thdpi=\"ERROR_HD\"\n\t\t\t/>\n\t\t\t<item label=\"page 2\"\n\t\t\t\tldpi=\"SYNC_LD\"\n\t\t\t\tmdpi=\"SYNC_MD\"\n\t\t\t\thdpi=\"SYNC_HD\"\n\t\t\t/>\n\t\t</data>") + (HX_CSTRING("<list background=\"#CCFFFF\"><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></list>"))) + (HX_CSTRING("<vertical background=\"#CCFFFF\">\n\t\t\t<label>Hello World</label>\n\t\t\t<input prompt=\"?\"/>\n\t\t\t<slider background=\"#FF9900\"/>\n\t\t\t<button colour=\"#FF9999\" alignH=\"fill\">abcdef</button>\n\t\t\t<switch/>\n\t\t\t<columns GapH=\"0\">\n\t\t\t\t<picker><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></picker>\n\t\t\t\t<picker><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></picker>\n\t\t\t\t<picker><data>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t\t<Sneezy/>\n\t\t\t<Sleepy/>\n\t\t\t<Dopey/>\n\t\t\t<Doc/>\n\t\t\t<Happy/>\n\t\t\t<Bashful/>\n\t\t\t<Grumpy/>\n\t\t</data></picker>\n\t\t\t</columns>\n\t\t</vertical>"))) + HX_CSTRING("</tabPagesTop>"));
	ICONS= HX_CSTRING("<icons id=\"slidingTabs\" size=\"160DPI\" border=\"false\"\n\t\t\tbackground=\"#001133,#000022\"\n\t\t\tgapH=\"30\"\n\t\t\tleftMargin=\"20\"\n\t\t\theight=\"38\"\n\t\t\tpixelSnapping = \"true\"\n\t\t\ticonColour=\"#FFFF66\"\n\t\t\tactiveColour=\"#FFFFFF\">\n\t\t\t<font color=\"#FFEE99\"/><data>\n\t\t\t<item label=\"page 1\"\n\t\t\t\tldpi=\"ERROR_LD\"\n\t\t\t\tmdpi=\"ERROR_MD\"\n\t\t\t\thdpi=\"ERROR_HD\"\n\t\t\t/>\n\t\t\t<item label=\"page 2\"\n\t\t\t\tldpi=\"SYNC_LD\"\n\t\t\t\tmdpi=\"SYNC_MD\"\n\t\t\t\thdpi=\"SYNC_HD\"\n\t\t\t/>\n\t\t</data></icons>");
	GRID_DATA= HX_CSTRING("<data>\n\t\t\t\t<header>number,a,b,c,d,e,f,g,h</header>\n\t\t\t\t<row>one,4,3,3,4,2,1,3,6</row>\n\t\t\t\t<row>two,6,2,8,5,3,5,7,9</row>\n\t\t\t\t<row>three,1,0,7,3,2,5,6,7</row>\n\t\t\t\t<row>four,4,2,5,7,4,2,8,9</row>\n\t\t\t\t<row>five,8,5,9,3,1,3,6,8</row>\n\t\t\t</data>");
	DATAGRID= HX_CSTRING("<fastDataGrid id=\"dataGrid\" titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCCCFF\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Datagrid example</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#EEEEFF\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>number,a,b,c,d,e,f,g,h</header>\n\t\t\t\t<row>one,4,3,3,4,2,1,3,6</row>\n\t\t\t\t<row>two,6,2,8,5,3,5,7,9</row>\n\t\t\t\t<row>three,1,0,7,3,2,5,6,7</row>\n\t\t\t\t<row>four,4,2,5,7,4,2,8,9</row>\n\t\t\t\t<row>five,8,5,9,3,1,3,6,8</row>\n\t\t\t</data></fastDataGrid>");
	SCROLLGRID= HX_CSTRING("<scrollDataGrid id=\"scrollGrid\" fixedColumns=\"1\" titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCCCCC\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Scrolling datagrid example</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#EEEEFF\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>number,a,b,c,d,e,f,g,h</header>\n\t\t\t\t<row>one,4,3,3,4,2,1,3,6</row>\n\t\t\t\t<row>two,6,2,8,5,3,5,7,9</row>\n\t\t\t\t<row>three,1,0,7,3,2,5,6,7</row>\n\t\t\t\t<row>four,4,2,5,7,4,2,8,9</row>\n\t\t\t\t<row>five,8,5,9,3,1,3,6,8</row>\n\t\t\t</data></scrollDataGrid>");
	SCROLLING_DATAGRIDS= (((HX_CSTRING("<scrollDataGrids fixedColumns=\"1\" >") + (HX_CSTRING("<fastDataGrid id=\"dataGrid\" titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCCCFF\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Datagrid example</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#EEEEFF\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>number,a,b,c,d,e,f,g,h</header>\n\t\t\t\t<row>one,4,3,3,4,2,1,3,6</row>\n\t\t\t\t<row>two,6,2,8,5,3,5,7,9</row>\n\t\t\t\t<row>three,1,0,7,3,2,5,6,7</row>\n\t\t\t\t<row>four,4,2,5,7,4,2,8,9</row>\n\t\t\t\t<row>five,8,5,9,3,1,3,6,8</row>\n\t\t\t</data></fastDataGrid>"))) + (HX_CSTRING("<fastDataGrid id=\"dataGrid\" titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCCCFF\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Datagrid example</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#EEEEFF\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>number,a,b,c,d,e,f,g,h</header>\n\t\t\t\t<row>one,4,3,3,4,2,1,3,6</row>\n\t\t\t\t<row>two,6,2,8,5,3,5,7,9</row>\n\t\t\t\t<row>three,1,0,7,3,2,5,6,7</row>\n\t\t\t\t<row>four,4,2,5,7,4,2,8,9</row>\n\t\t\t\t<row>five,8,5,9,3,1,3,6,8</row>\n\t\t\t</data></fastDataGrid>"))) + HX_CSTRING("</scrollDataGrids>"));
	GRID_LAYOUT0= (((HX_CSTRING("<vertical border=\"false\" gapV=\"0\">") + (HX_CSTRING("<fastDataGrid id=\"dataGrid\" titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCCCFF\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Datagrid example</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#EEEEFF\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>number,a,b,c,d,e,f,g,h</header>\n\t\t\t\t<row>one,4,3,3,4,2,1,3,6</row>\n\t\t\t\t<row>two,6,2,8,5,3,5,7,9</row>\n\t\t\t\t<row>three,1,0,7,3,2,5,6,7</row>\n\t\t\t\t<row>four,4,2,5,7,4,2,8,9</row>\n\t\t\t\t<row>five,8,5,9,3,1,3,6,8</row>\n\t\t\t</data></fastDataGrid>"))) + (HX_CSTRING("<scrollDataGrid id=\"scrollGrid\" fixedColumns=\"1\" titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCCCCC\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Scrolling datagrid example</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#EEEEFF\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>number,a,b,c,d,e,f,g,h</header>\n\t\t\t\t<row>one,4,3,3,4,2,1,3,6</row>\n\t\t\t\t<row>two,6,2,8,5,3,5,7,9</row>\n\t\t\t\t<row>three,1,0,7,3,2,5,6,7</row>\n\t\t\t\t<row>four,4,2,5,7,4,2,8,9</row>\n\t\t\t\t<row>five,8,5,9,3,1,3,6,8</row>\n\t\t\t</data></scrollDataGrid>"))) + HX_CSTRING("</vertical>"));
	GRID_DATA0= HX_CSTRING("<data>\n\t\t\t\t<header>aaa,bbb,ccc,ddd</header>\n\t\t\t\t<row>876,283,456,745</row>\n\t\t\t\t<row>106,374,584,982</row>\n\t\t\t</data>");
	GRID_DATA1= HX_CSTRING("<data>\n\t\t\t\t<header>number,colour,shape</header>\n\t\t\t\t<row>six,red,triangle</row>\n\t\t\t\t<row>seven,orange,square</row>\n\t\t\t\t<row>eight,yellow,pentagon</row>\n\t\t\t\t<row>nine,green,hexagon</row>\n\t\t\t\t<row>ten,blue,septagon</row>\n\t\t\t\t<row>eleven,indigo,octagon</row>\n\t\t\t\t<row>twelve,violet,nonagon</row>\n\t\t\t</data>");
	DATAGRID0= HX_CSTRING("<fastDataGrid titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCCCCC\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Datagrid 0</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#EEEEFF\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>aaa,bbb,ccc,ddd</header>\n\t\t\t\t<row>876,283,456,745</row>\n\t\t\t\t<row>106,374,584,982</row>\n\t\t\t</data></fastDataGrid>");
	DATAGRID1= HX_CSTRING("<fastDataGrid id=\"dataGrid1\" titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCCCFF\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Datagrid 1</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#EEFFEE\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>aaa,bbb,ccc,ddd</header>\n\t\t\t\t<row>876,283,456,745</row>\n\t\t\t\t<row>106,374,584,982</row>\n\t\t\t</data></fastDataGrid>");
	DATAGRID2= HX_CSTRING("<fastDataGrid titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCFFCC\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Datagrid 2</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#FFEEEE\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>number,colour,shape</header>\n\t\t\t\t<row>six,red,triangle</row>\n\t\t\t\t<row>seven,orange,square</row>\n\t\t\t\t<row>eight,yellow,pentagon</row>\n\t\t\t\t<row>nine,green,hexagon</row>\n\t\t\t\t<row>ten,blue,septagon</row>\n\t\t\t\t<row>eleven,indigo,octagon</row>\n\t\t\t\t<row>twelve,violet,nonagon</row>\n\t\t\t</data></fastDataGrid>");
	GRID_LAYOUT1= ((((HX_CSTRING("<scrollTouchGrids id=\"scrollGrids\" fixedColumns=\"0\" gapV=\"0\" editButton=\"true\" showPressed=\"true\">") + (HX_CSTRING("<fastDataGrid titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCCCCC\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Datagrid 0</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#EEEEFF\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>aaa,bbb,ccc,ddd</header>\n\t\t\t\t<row>876,283,456,745</row>\n\t\t\t\t<row>106,374,584,982</row>\n\t\t\t</data></fastDataGrid>"))) + (HX_CSTRING("<fastDataGrid id=\"dataGrid1\" titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCCCFF\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Datagrid 1</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#EEFFEE\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>aaa,bbb,ccc,ddd</header>\n\t\t\t\t<row>876,283,456,745</row>\n\t\t\t\t<row>106,374,584,982</row>\n\t\t\t</data></fastDataGrid>"))) + (HX_CSTRING("<fastDataGrid titleBarColour=\"#333333\" background=\"#333333,#FFFFFF,#CCFFCC\">\n\t\t\t\t<title><font color=\"#FFFFFF\" size=\"18\"/>Datagrid 2</title>\n\t\t\t\t<headerFont face=\"Arial\" size=\"16\" color=\"#FFEEEE\"/>\n\t\t\t\t<font face=\"Arial\" size=\"13\" color=\"#333333\"/><data>\n\t\t\t\t<header>number,colour,shape</header>\n\t\t\t\t<row>six,red,triangle</row>\n\t\t\t\t<row>seven,orange,square</row>\n\t\t\t\t<row>eight,yellow,pentagon</row>\n\t\t\t\t<row>nine,green,hexagon</row>\n\t\t\t\t<row>ten,blue,septagon</row>\n\t\t\t\t<row>eleven,indigo,octagon</row>\n\t\t\t\t<row>twelve,violet,nonagon</row>\n\t\t\t</data></fastDataGrid>"))) + HX_CSTRING("</scrollTouchGrids>"));
	RENDERER= HX_CSTRING("<vertical>\n\t\t\t\t<button alignH=\"fill\"/>\n\t\t\t\t<label id=\"label\" alignH=\"right\">test</label>\n\t\t\t</vertical>");
	TABLE= HX_CSTRING("<table id=\"table\" background=\"#FF9933\" border=\"true\" lineColour=\"#0000FF\">\n\t\t\t\t<columns><vertical>\n\t\t\t\t<button alignH=\"fill\"/>\n\t\t\t\t<label id=\"label\" alignH=\"right\">test</label>\n\t\t\t</vertical><vertical>\n\t\t\t\t<button alignH=\"fill\"/>\n\t\t\t\t<label id=\"label\" alignH=\"right\">test</label>\n\t\t\t</vertical></columns>\n\t\t\t\t<columns><vertical>\n\t\t\t\t<button alignH=\"fill\"/>\n\t\t\t\t<label id=\"label\" alignH=\"right\">test</label>\n\t\t\t</vertical><vertical>\n\t\t\t\t<button alignH=\"fill\"/>\n\t\t\t\t<label id=\"label\" alignH=\"right\">test</label>\n\t\t\t</vertical></columns>\n\t\t\t\t<columns><vertical>\n\t\t\t\t<button alignH=\"fill\"/>\n\t\t\t\t<label id=\"label\" alignH=\"right\">test</label>\n\t\t\t</vertical><vertical>\n\t\t\t\t<button alignH=\"fill\"/>\n\t\t\t\t<label id=\"label\" alignH=\"right\">test</label>\n\t\t\t</vertical></columns>\n\t\t\t</table>");
	TOUCH= HX_CSTRING("<touch background=\"#CCCCCC\">\n\t\t\t\t<image>ERROR_HD</image>\n\t\t\t\t<image>SYNC_HD</image>\n\t\t\t</touch>");
	LIST_MODEL0= HX_CSTRING("<list labelField=\"name\">\n\t\t\t\t<model url=\"http://127.0.0.1/test.json\" action=\"loadJSON\" parse=\".trends.\"/>\n\t\t\t</list>");
	LIST_MODEL1= HX_CSTRING("<list>\n\t\t\t\t<model url=\"http://127.0.0.1/people.xml\" action=\"loadJSON\" parse=\".trends.\">\n\t\t\t\t\t<name>label</name>\n\t\t\t\t</model>\n\t\t\t</list>");
	LIST_MODEL2= HX_CSTRING("<list>\n\t\t\t\t<model url=\"http://127.0.0.1/test.json\" action=\"loadJSON\" parse=\".trends.\"/>\n\t\t\t\t<vertical>\n\t\t\t\t\t<label id=\"name\"/>\n\t\t\t\t</vertical>\t\n\t\t\t</list>");
	XML_MODEL= HX_CSTRING("<list>\n\t\t\t\t<model url=\"http://127.0.0.1/people.xml\" action=\"loadXML\">\n\t\t\t\t\t<list>\n\t\t\t\t\t\t<item gender=\"\">\n\t\t\t\t\t\t\t<name/>\n\t\t\t\t\t\t\t<age/>\n\t\t\t\t\t\t</item>\n\t\t\t\t\t</list>\n\t\t\t\t</model>\n\t\t\t\t<renderer>\n\t\t\t\t\t<label id=\"name\"/>\n\t\t\t\t\t<label id=\"age\"/>\n\t\t\t\t\t<label id=\"gender\"/>\n\t\t\t\t</renderer>\n\t\t\t</list>");
	PAGE0= HX_CSTRING("<image alignV=\"centre\" alignH=\"centre\">BUDDHA</image>");
	PAGE1= HX_CSTRING("<image alignV=\"centre\" alignH=\"centre\">DRAGON</image>");
	PAGE2= HX_CSTRING("<image alignV=\"centre\" alignH=\"centre\">FACES</image>");
	PAGE3= HX_CSTRING("<image alignV=\"centre\" alignH=\"centre\">MONKS</image>");
	PAGE4= HX_CSTRING("<image alignV=\"centre\" alignH=\"centre\">TEMPLE</image>");
	MENU0= HX_CSTRING("<data>\n\t\t\t\t<buddha/>\n\t\t\t\t<dragon/>\n\t\t\t\t<item label=\"more...\"/>\n\t\t\t</data>");
	MENU1= HX_CSTRING("<data>\n\t\t\t\t<faces/>\n\t\t\t\t<monks/>\n\t\t\t\t<temple/>\n\t\t\t</data>");
	NESTED_NAVIGATION_PAGES= HX_CSTRING("<navigationPages id=\"outer\" title=\"Nested Nav\">\n\t\t\t\t<list><data>\n\t\t\t\t<buddha/>\n\t\t\t\t<dragon/>\n\t\t\t\t<item label=\"more...\"/>\n\t\t\t</data></list><image alignV=\"centre\" alignH=\"centre\">BUDDHA</image><image alignV=\"centre\" alignH=\"centre\">DRAGON</image><navigationPages id=\"inner\">\n\t\t\t\t\t<list><data>\n\t\t\t\t<faces/>\n\t\t\t\t<monks/>\n\t\t\t\t<temple/>\n\t\t\t</data></list><image alignV=\"centre\" alignH=\"centre\">FACES</image><image alignV=\"centre\" alignH=\"centre\">MONKS</image><image alignV=\"centre\" alignH=\"centre\">TEMPLE</image></navigationPages>\n\t\t\t</navigationPages>");
}

