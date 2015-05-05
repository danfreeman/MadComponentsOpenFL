#ifndef INCLUDED_com_danielfreeman_AnimationTimer
#define INCLUDED_com_danielfreeman_AnimationTimer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,danielfreeman,AnimationTimer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
HX_DECLARE_CLASS2(openfl,utils,Timer)
namespace com{
namespace danielfreeman{


class HXCPP_CLASS_ATTRIBUTES  AnimationTimer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AnimationTimer_obj OBJ_;
		AnimationTimer_obj();
		Void __construct(::openfl::display::Sprite parentClass,hx::Null< int >  __o_repetitions);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AnimationTimer_obj > __new(::openfl::display::Sprite parentClass,hx::Null< int >  __o_repetitions);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimationTimer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AnimationTimer"); }

		int _count;
		int _repetitions;
		Dynamic _parentClass;
		Dynamic _callBack;
		Dynamic &_callBack_dyn() { return _callBack;}
		Dynamic _completeCallBack;
		Dynamic &_completeCallBack_dyn() { return _completeCallBack;}
		::openfl::events::TimerEvent _timerEvent;
		virtual Void addEventListener( ::String type,Dynamic callBack);
		Dynamic addEventListener_dyn();

		virtual Void removeEventListener( ::String type,Dynamic callBack);
		Dynamic removeEventListener_dyn();

		virtual Void exec( );
		Dynamic exec_dyn();

		virtual int get_currentCount( );
		Dynamic get_currentCount_dyn();

		virtual bool get_running( );
		Dynamic get_running_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		static Array< ::Dynamic > _callBacks;
		static ::openfl::utils::Timer _animationTimer;
		static Void initialise( ::openfl::display::Stage stage);
		static Dynamic initialise_dyn();

		static Void animateFrame( ::openfl::events::TimerEvent event);
		static Dynamic animateFrame_dyn();

		static Void destructor( );
		static Dynamic destructor_dyn();

};

} // end namespace com
} // end namespace danielfreeman

#endif /* INCLUDED_com_danielfreeman_AnimationTimer */ 
