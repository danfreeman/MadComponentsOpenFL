#include <hxcpp.h>

#include <sys/io/FileOutput.h>
#include <sys/FileSystem.h>
#include <openfl/utils/WeakRef.h>
#include <openfl/utils/Float32Array.h>
#include <openfl/utils/Endian.h>
#include <openfl/utils/CompressionAlgorithm.h>
#include <openfl/utils/ByteArray.h>
#include <openfl/utils/IDataInput.h>
#include <openfl/utils/IDataOutput.h>
#include <openfl/utils/ArrayBufferView.h>
#include <openfl/utils/IMemoryRange.h>
#include <openfl/ui/Keyboard.h>
#include <openfl/text/TextLineMetrics.h>
#include <openfl/text/TextFormatAlign.h>
#include <openfl/text/TextFieldType.h>
#include <openfl/text/TextFieldAutoSize.h>
#include <openfl/text/GridFitType.h>
#include <openfl/text/FontType.h>
#include <openfl/text/FontStyle.h>
#include <openfl/text/Font.h>
#include <openfl/text/AntiAliasType.h>
#include <openfl/system/SecurityDomain.h>
#include <openfl/system/ScreenMode.h>
#include <openfl/system/PixelFormat.h>
#include <openfl/system/LoaderContext.h>
#include <openfl/system/Capabilities.h>
#include <openfl/system/ApplicationDomain.h>
#include <openfl/net/URLVariables.h>
#include <openfl/net/URLRequestMethod.h>
#include <openfl/net/URLRequestHeader.h>
#include <openfl/net/URLRequest.h>
#include <openfl/net/URLLoaderDataFormat.h>
#include <openfl/media/SoundTransform.h>
#include <openfl/media/SoundLoaderContext.h>
#include <openfl/media/AudioThreadState.h>
#include <openfl/media/SoundChannel.h>
#include <openfl/media/InternalAudioType.h>
#include <openfl/media/Sound.h>
#include <openfl/media/ID3Info.h>
#include <openfl/gl/GLTexture.h>
#include <openfl/gl/GLShader.h>
#include <openfl/gl/GLRenderbuffer.h>
#include <openfl/gl/GLProgram.h>
#include <openfl/gl/GLFramebuffer.h>
#include <openfl/gl/GLBuffer.h>
#include <openfl/gl/GLObject.h>
#include <openfl/gl/_GL/Float32Data_Impl_.h>
#include <openfl/gl/GL.h>
#include <openfl/geom/Vector3D.h>
#include <openfl/geom/Transform.h>
#include <openfl/geom/Matrix3D.h>
#include <openfl/geom/Matrix.h>
#include <openfl/geom/ColorTransform.h>
#include <openfl/filters/DropShadowFilter.h>
#include <openfl/filters/BitmapFilter.h>
#include <openfl/events/UncaughtErrorEvents.h>
#include <openfl/events/UncaughtErrorEvent.h>
#include <openfl/events/TimerEvent.h>
#include <openfl/events/SystemEvent.h>
#include <openfl/events/SecurityErrorEvent.h>
#include <openfl/events/SampleDataEvent.h>
#include <openfl/events/ProgressEvent.h>
#include <openfl/events/KeyboardEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/events/IOErrorEvent.h>
#include <openfl/events/HTTPStatusEvent.h>
#include <openfl/events/FocusEvent.h>
#include <openfl/events/EventPhase.h>
#include <openfl/events/Listener.h>
#include <openfl/events/ErrorEvent.h>
#include <openfl/events/TextEvent.h>
#include <openfl/errors/RangeError.h>
#include <openfl/errors/EOFError.h>
#include <openfl/errors/ArgumentError.h>
#include <openfl/display/TriangleCulling.h>
#include <openfl/display/Tilesheet.h>
#include <openfl/geom/Point.h>
#include <openfl/display/StageScaleMode.h>
#include <openfl/display/StageQuality.h>
#include <openfl/display/StageDisplayState.h>
#include <openfl/display/StageAlign.h>
#include <openfl/display/TouchInfo.h>
#include <openfl/display/SpreadMethod.h>
#include <openfl/display/Shape.h>
#include <openfl/display/PixelSnapping.h>
#include <openfl/display/OpenGLView.h>
#include <openfl/display/MovieClip.h>
#include <openfl/display/ManagedStage.h>
#include <openfl/display/Stage.h>
#include <openfl/events/TouchEvent.h>
#include <openfl/events/MouseEvent.h>
#include <openfl/events/Event.h>
#include <openfl/display/LoaderInfo.h>
#include <openfl/display/Loader.h>
#include <openfl/display/LineScaleMode.h>
#include <openfl/display/JointStyle.h>
#include <openfl/display/InterpolationMethod.h>
#include <openfl/display/IGraphicsData.h>
#include <openfl/display/GraphicsPathWinding.h>
#include <openfl/display/Graphics.h>
#include <openfl/display/GradientType.h>
#include <openfl/display/FrameLabel.h>
#include <openfl/display/DirectRenderer.h>
#include <openfl/display/CapsStyle.h>
#include <openfl/display/BlendMode.h>
#include <openfl/display/OptimizedPerlin.h>
#include <openfl/display/Bitmap.h>
#include <openfl/_Vector/Vector_Impl_.h>
#include <openfl/Memory.h>
#include <openfl/AssetType.h>
#include <openfl/AssetData.h>
#include <openfl/Assets.h>
#include <openfl/AssetCache.h>
#include <haxe/zip/Uncompress.h>
#include <haxe/zip/FlushMode.h>
#include <haxe/zip/Compress.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/format/JsonParser.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Resource.h>
#include <haxe/Log.h>
#include <haxe/CallStack.h>
#include <haxe/StackItem.h>
#include <cpp/vm/Thread.h>
#include <cpp/vm/Mutex.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <com/danielfreeman/madcomponents/UIWindow.h>
#include <com/danielfreeman/madcomponents/UITabButton.h>
#include <com/danielfreeman/madcomponents/UIRefresh.h>
#include <com/danielfreeman/madcomponents/UIPicker.h>
#include <com/danielfreeman/madcomponents/UINavigationBar.h>
#include <com/danielfreeman/madcomponents/UIBlueText.h>
#include <com/danielfreeman/madcomponents/UIBackButton.h>
#include <com/danielfreeman/madcomponents/UIActivity.h>
#include <com/danielfreeman/madcomponents/Model.h>
#include <openfl/net/URLLoader.h>
#include <com/danielfreeman/madcomponents/Colour.h>
#include <com/danielfreeman/madcomponents/Attributes.h>
#include <openfl/geom/Rectangle.h>
#include <com/danielfreeman/extendedmadness/UIe.h>
#include <openfl/errors/Error.h>
#include <openfl/utils/Timer.h>
#include <com/danielfreeman/madcomponents/UI.h>
#include <com/danielfreeman/madcomponents/UIImageLoader.h>
#include <com/danielfreeman/madcomponents/UINavigationPages.h>
#include <com/danielfreeman/madcomponents/UIRenderer.h>
#include <com/danielfreeman/madcomponents/UIViewFlipper.h>
#include <com/danielfreeman/madcomponents/UISpacer.h>
#include <com/danielfreeman/madcomponents/UICircular.h>
#include <com/danielfreeman/madcomponents/UIInputX.h>
#include <com/danielfreeman/madcomponents/UISliderX.h>
#include <com/danielfreeman/madcomponents/UILabelX.h>
#include <com/danielfreeman/madcomponents/UIButtonX.h>
#include <com/danielfreeman/madcomponents/UIButton.h>
#include <com/danielfreeman/madcomponents/UISearch.h>
#include <com/danielfreeman/madcomponents/UIInput.h>
#include <com/danielfreeman/madcomponents/UISwitch.h>
#include <com/danielfreeman/madcomponents/UIImage.h>
#include <com/danielfreeman/madcomponents/UINavigation.h>
#include <com/danielfreeman/madcomponents/UIDividedList.h>
#include <com/danielfreeman/madcomponents/UIGroupedList.h>
#include <com/danielfreeman/extendedmadness/UITouch.h>
#include <com/danielfreeman/madcomponents/UIContainerBaseClass.h>
#include <com/danielfreeman/extendedmadness/UITickOneList.h>
#include <com/danielfreeman/extendedmadness/UITickList.h>
#include <com/danielfreeman/extendedmadness/UITick.h>
#include <com/danielfreeman/extendedmadness/UITable.h>
#include <com/danielfreeman/extendedmadness/UITabPagesTop.h>
#include <com/danielfreeman/madcomponents/UITabPages.h>
#include <com/danielfreeman/extendedmadness/UITabButtonRow.h>
#include <com/danielfreeman/extendedmadness/UISwitchX.h>
#include <com/danielfreeman/extendedmadness/UIStarRating.h>
#include <com/danielfreeman/extendedmadness/UISpecialDataGrid.h>
#include <com/danielfreeman/extendedmadness/UISegmentedControl.h>
#include <com/danielfreeman/extendedmadness/UIScrollTouchGrids.h>
#include <com/danielfreeman/extendedmadness/UIScrollHorizontal.h>
#include <com/danielfreeman/extendedmadness/UIScrollDataGrids.h>
#include <com/danielfreeman/extendedmadness/UIScrollDataGrid.h>
#include <com/danielfreeman/extendedmadness/UIScrollXY.h>
#include <com/danielfreeman/extendedmadness/UIScreens.h>
#include <com/danielfreeman/madcomponents/UIPages.h>
#include <com/danielfreeman/extendedmadness/UIRadioButton.h>
#include <com/danielfreeman/extendedmadness/UIRadialSlider.h>
#include <com/danielfreeman/extendedmadness/UIProgressBar.h>
#include <com/danielfreeman/madcomponents/UISlider.h>
#include <com/danielfreeman/extendedmadness/UIPanel.h>
#include <com/danielfreeman/madcomponents/UIForm.h>
#include <com/danielfreeman/extendedmadness/UIListHorizontal.h>
#include <com/danielfreeman/madcomponents/UIList.h>
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
#include <com/danielfreeman/madcomponents/IContainerUI.h>
#include <com/danielfreeman/madcomponents/MadMasking.h>
#include <com/danielfreeman/extendedmadness/UILine.h>
#include <com/danielfreeman/extendedmadness/UIIcons.h>
#include <com/danielfreeman/extendedmadness/UIFastDataGrid.h>
#include <com/danielfreeman/extendedmadness/UISimpleDataGrid.h>
#include <com/danielfreeman/extendedmadness/UICutCopyPaste.h>
#include <com/danielfreeman/extendedmadness/UICheckBox.h>
#include <com/danielfreeman/madcomponents/MadSprite.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#include <com/danielfreeman/extendedmadness/UICell.h>
#include <com/danielfreeman/madcomponents/UILabel.h>
#include <openfl/text/TextFormat.h>
#include <openfl/text/TextField.h>
#include <com/danielfreeman/extendedmadness/Star.h>
#include <com/danielfreeman/MadXMLList.h>
#include <com/danielfreeman/MadXML.h>
#include <com/danielfreeman/_MadXML/NodeListAccess.h>
#include <com/danielfreeman/_MadXML/HasNodeAccess.h>
#include <com/danielfreeman/_MadXML/HasAttribAccess.h>
#include <com/danielfreeman/_MadXML/AttribAccess.h>
#include <com/danielfreeman/_MadXML/NodeAccess.h>
#include <com/danielfreeman/AnimationTimer.h>
#include <Xml.h>
#include <XmlType.h>
#include <Type.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Reflect.h>
#include <IMap.h>
#include <TEMPLE.h>
#include <MONKS.h>
#include <FACES.h>
#include <DRAGON.h>
#include <BUDDHA.h>
#include <SYNC_HD.h>
#include <SYNC_MD.h>
#include <SYNC_LD.h>
#include <ERROR_HD.h>
#include <ERROR_MD.h>
#include <ERROR_LD.h>
#include <TestBMD.h>
#include <openfl/display/BitmapData.h>
#include <List.h>
#include <Lambda.h>
#include <EReg.h>
#include <DefaultAssetLibrary.h>
#include <openfl/AssetLibrary.h>
#include <Date.h>
#include <DocumentClass.h>
#include <Main.h>
#include <openfl/display/Sprite.h>
#include <openfl/display/DisplayObjectContainer.h>
#include <openfl/display/InteractiveObject.h>
#include <openfl/display/DisplayObject.h>
#include <openfl/Lib.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <openfl/display/IBitmapDrawable.h>
#include <openfl/events/EventDispatcher.h>
#include <openfl/events/IEventDispatcher.h>
#include <ApplicationMain.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sys::io::FileOutput_obj::__register();
::sys::FileSystem_obj::__register();
::openfl::utils::WeakRef_obj::__register();
::openfl::utils::Float32Array_obj::__register();
::openfl::utils::Endian_obj::__register();
::openfl::utils::CompressionAlgorithm_obj::__register();
::openfl::utils::ByteArray_obj::__register();
::openfl::utils::IDataInput_obj::__register();
::openfl::utils::IDataOutput_obj::__register();
::openfl::utils::ArrayBufferView_obj::__register();
::openfl::utils::IMemoryRange_obj::__register();
::openfl::ui::Keyboard_obj::__register();
::openfl::text::TextLineMetrics_obj::__register();
::openfl::text::TextFormatAlign_obj::__register();
::openfl::text::TextFieldType_obj::__register();
::openfl::text::TextFieldAutoSize_obj::__register();
::openfl::text::GridFitType_obj::__register();
::openfl::text::FontType_obj::__register();
::openfl::text::FontStyle_obj::__register();
::openfl::text::Font_obj::__register();
::openfl::text::AntiAliasType_obj::__register();
::openfl::system::SecurityDomain_obj::__register();
::openfl::system::ScreenMode_obj::__register();
::openfl::system::PixelFormat_obj::__register();
::openfl::system::LoaderContext_obj::__register();
::openfl::system::Capabilities_obj::__register();
::openfl::system::ApplicationDomain_obj::__register();
::openfl::net::URLVariables_obj::__register();
::openfl::net::URLRequestMethod_obj::__register();
::openfl::net::URLRequestHeader_obj::__register();
::openfl::net::URLRequest_obj::__register();
::openfl::net::URLLoaderDataFormat_obj::__register();
::openfl::media::SoundTransform_obj::__register();
::openfl::media::SoundLoaderContext_obj::__register();
::openfl::media::AudioThreadState_obj::__register();
::openfl::media::SoundChannel_obj::__register();
::openfl::media::InternalAudioType_obj::__register();
::openfl::media::Sound_obj::__register();
::openfl::media::ID3Info_obj::__register();
::openfl::gl::GLTexture_obj::__register();
::openfl::gl::GLShader_obj::__register();
::openfl::gl::GLRenderbuffer_obj::__register();
::openfl::gl::GLProgram_obj::__register();
::openfl::gl::GLFramebuffer_obj::__register();
::openfl::gl::GLBuffer_obj::__register();
::openfl::gl::GLObject_obj::__register();
::openfl::gl::_GL::Float32Data_Impl__obj::__register();
::openfl::gl::GL_obj::__register();
::openfl::geom::Vector3D_obj::__register();
::openfl::geom::Transform_obj::__register();
::openfl::geom::Matrix3D_obj::__register();
::openfl::geom::Matrix_obj::__register();
::openfl::geom::ColorTransform_obj::__register();
::openfl::filters::DropShadowFilter_obj::__register();
::openfl::filters::BitmapFilter_obj::__register();
::openfl::events::UncaughtErrorEvents_obj::__register();
::openfl::events::UncaughtErrorEvent_obj::__register();
::openfl::events::TimerEvent_obj::__register();
::openfl::events::SystemEvent_obj::__register();
::openfl::events::SecurityErrorEvent_obj::__register();
::openfl::events::SampleDataEvent_obj::__register();
::openfl::events::ProgressEvent_obj::__register();
::openfl::events::KeyboardEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::events::IOErrorEvent_obj::__register();
::openfl::events::HTTPStatusEvent_obj::__register();
::openfl::events::FocusEvent_obj::__register();
::openfl::events::EventPhase_obj::__register();
::openfl::events::Listener_obj::__register();
::openfl::events::ErrorEvent_obj::__register();
::openfl::events::TextEvent_obj::__register();
::openfl::errors::RangeError_obj::__register();
::openfl::errors::EOFError_obj::__register();
::openfl::errors::ArgumentError_obj::__register();
::openfl::display::TriangleCulling_obj::__register();
::openfl::display::Tilesheet_obj::__register();
::openfl::geom::Point_obj::__register();
::openfl::display::StageScaleMode_obj::__register();
::openfl::display::StageQuality_obj::__register();
::openfl::display::StageDisplayState_obj::__register();
::openfl::display::StageAlign_obj::__register();
::openfl::display::TouchInfo_obj::__register();
::openfl::display::SpreadMethod_obj::__register();
::openfl::display::Shape_obj::__register();
::openfl::display::PixelSnapping_obj::__register();
::openfl::display::OpenGLView_obj::__register();
::openfl::display::MovieClip_obj::__register();
::openfl::display::ManagedStage_obj::__register();
::openfl::display::Stage_obj::__register();
::openfl::events::TouchEvent_obj::__register();
::openfl::events::MouseEvent_obj::__register();
::openfl::events::Event_obj::__register();
::openfl::display::LoaderInfo_obj::__register();
::openfl::display::Loader_obj::__register();
::openfl::display::LineScaleMode_obj::__register();
::openfl::display::JointStyle_obj::__register();
::openfl::display::InterpolationMethod_obj::__register();
::openfl::display::IGraphicsData_obj::__register();
::openfl::display::GraphicsPathWinding_obj::__register();
::openfl::display::Graphics_obj::__register();
::openfl::display::GradientType_obj::__register();
::openfl::display::FrameLabel_obj::__register();
::openfl::display::DirectRenderer_obj::__register();
::openfl::display::CapsStyle_obj::__register();
::openfl::display::BlendMode_obj::__register();
::openfl::display::OptimizedPerlin_obj::__register();
::openfl::display::Bitmap_obj::__register();
::openfl::_Vector::Vector_Impl__obj::__register();
::openfl::Memory_obj::__register();
::openfl::AssetType_obj::__register();
::openfl::AssetData_obj::__register();
::openfl::Assets_obj::__register();
::openfl::AssetCache_obj::__register();
::haxe::zip::Uncompress_obj::__register();
::haxe::zip::FlushMode_obj::__register();
::haxe::zip::Compress_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::Log_obj::__register();
::haxe::CallStack_obj::__register();
::haxe::StackItem_obj::__register();
::cpp::vm::Thread_obj::__register();
::cpp::vm::Mutex_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::com::danielfreeman::madcomponents::UIWindow_obj::__register();
::com::danielfreeman::madcomponents::UITabButton_obj::__register();
::com::danielfreeman::madcomponents::UIRefresh_obj::__register();
::com::danielfreeman::madcomponents::UIPicker_obj::__register();
::com::danielfreeman::madcomponents::UINavigationBar_obj::__register();
::com::danielfreeman::madcomponents::UIBlueText_obj::__register();
::com::danielfreeman::madcomponents::UIBackButton_obj::__register();
::com::danielfreeman::madcomponents::UIActivity_obj::__register();
::com::danielfreeman::madcomponents::Model_obj::__register();
::openfl::net::URLLoader_obj::__register();
::com::danielfreeman::madcomponents::Colour_obj::__register();
::com::danielfreeman::madcomponents::Attributes_obj::__register();
::openfl::geom::Rectangle_obj::__register();
::com::danielfreeman::extendedmadness::UIe_obj::__register();
::openfl::errors::Error_obj::__register();
::openfl::utils::Timer_obj::__register();
::com::danielfreeman::madcomponents::UI_obj::__register();
::com::danielfreeman::madcomponents::UIImageLoader_obj::__register();
::com::danielfreeman::madcomponents::UINavigationPages_obj::__register();
::com::danielfreeman::madcomponents::UIRenderer_obj::__register();
::com::danielfreeman::madcomponents::UIViewFlipper_obj::__register();
::com::danielfreeman::madcomponents::UISpacer_obj::__register();
::com::danielfreeman::madcomponents::UICircular_obj::__register();
::com::danielfreeman::madcomponents::UIInputX_obj::__register();
::com::danielfreeman::madcomponents::UISliderX_obj::__register();
::com::danielfreeman::madcomponents::UILabelX_obj::__register();
::com::danielfreeman::madcomponents::UIButtonX_obj::__register();
::com::danielfreeman::madcomponents::UIButton_obj::__register();
::com::danielfreeman::madcomponents::UISearch_obj::__register();
::com::danielfreeman::madcomponents::UIInput_obj::__register();
::com::danielfreeman::madcomponents::UISwitch_obj::__register();
::com::danielfreeman::madcomponents::UIImage_obj::__register();
::com::danielfreeman::madcomponents::UINavigation_obj::__register();
::com::danielfreeman::madcomponents::UIDividedList_obj::__register();
::com::danielfreeman::madcomponents::UIGroupedList_obj::__register();
::com::danielfreeman::extendedmadness::UITouch_obj::__register();
::com::danielfreeman::madcomponents::UIContainerBaseClass_obj::__register();
::com::danielfreeman::extendedmadness::UITickOneList_obj::__register();
::com::danielfreeman::extendedmadness::UITickList_obj::__register();
::com::danielfreeman::extendedmadness::UITick_obj::__register();
::com::danielfreeman::extendedmadness::UITable_obj::__register();
::com::danielfreeman::extendedmadness::UITabPagesTop_obj::__register();
::com::danielfreeman::madcomponents::UITabPages_obj::__register();
::com::danielfreeman::extendedmadness::UITabButtonRow_obj::__register();
::com::danielfreeman::extendedmadness::UISwitchX_obj::__register();
::com::danielfreeman::extendedmadness::UIStarRating_obj::__register();
::com::danielfreeman::extendedmadness::UISpecialDataGrid_obj::__register();
::com::danielfreeman::extendedmadness::UISegmentedControl_obj::__register();
::com::danielfreeman::extendedmadness::UIScrollTouchGrids_obj::__register();
::com::danielfreeman::extendedmadness::UIScrollHorizontal_obj::__register();
::com::danielfreeman::extendedmadness::UIScrollDataGrids_obj::__register();
::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj::__register();
::com::danielfreeman::extendedmadness::UIScrollXY_obj::__register();
::com::danielfreeman::extendedmadness::UIScreens_obj::__register();
::com::danielfreeman::madcomponents::UIPages_obj::__register();
::com::danielfreeman::extendedmadness::UIRadioButton_obj::__register();
::com::danielfreeman::extendedmadness::UIRadialSlider_obj::__register();
::com::danielfreeman::extendedmadness::UIProgressBar_obj::__register();
::com::danielfreeman::madcomponents::UISlider_obj::__register();
::com::danielfreeman::extendedmadness::UIPanel_obj::__register();
::com::danielfreeman::madcomponents::UIForm_obj::__register();
::com::danielfreeman::extendedmadness::UIListHorizontal_obj::__register();
::com::danielfreeman::madcomponents::UIList_obj::__register();
::com::danielfreeman::madcomponents::UIScrollVertical_obj::__register();
::com::danielfreeman::madcomponents::IContainerUI_obj::__register();
::com::danielfreeman::madcomponents::MadMasking_obj::__register();
::com::danielfreeman::extendedmadness::UILine_obj::__register();
::com::danielfreeman::extendedmadness::UIIcons_obj::__register();
::com::danielfreeman::extendedmadness::UIFastDataGrid_obj::__register();
::com::danielfreeman::extendedmadness::UISimpleDataGrid_obj::__register();
::com::danielfreeman::extendedmadness::UICutCopyPaste_obj::__register();
::com::danielfreeman::extendedmadness::UICheckBox_obj::__register();
::com::danielfreeman::madcomponents::MadSprite_obj::__register();
::com::danielfreeman::madcomponents::IComponentUI_obj::__register();
::com::danielfreeman::extendedmadness::UICell_obj::__register();
::com::danielfreeman::madcomponents::UILabel_obj::__register();
::openfl::text::TextFormat_obj::__register();
::openfl::text::TextField_obj::__register();
::com::danielfreeman::extendedmadness::Star_obj::__register();
::com::danielfreeman::MadXMLList_obj::__register();
::com::danielfreeman::MadXML_obj::__register();
::com::danielfreeman::_MadXML::NodeListAccess_obj::__register();
::com::danielfreeman::_MadXML::HasNodeAccess_obj::__register();
::com::danielfreeman::_MadXML::HasAttribAccess_obj::__register();
::com::danielfreeman::_MadXML::AttribAccess_obj::__register();
::com::danielfreeman::_MadXML::NodeAccess_obj::__register();
::com::danielfreeman::AnimationTimer_obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::Type_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Reflect_obj::__register();
::IMap_obj::__register();
::TEMPLE_obj::__register();
::MONKS_obj::__register();
::FACES_obj::__register();
::DRAGON_obj::__register();
::BUDDHA_obj::__register();
::SYNC_HD_obj::__register();
::SYNC_MD_obj::__register();
::SYNC_LD_obj::__register();
::ERROR_HD_obj::__register();
::ERROR_MD_obj::__register();
::ERROR_LD_obj::__register();
::TestBMD_obj::__register();
::openfl::display::BitmapData_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::EReg_obj::__register();
::DefaultAssetLibrary_obj::__register();
::openfl::AssetLibrary_obj::__register();
::Date_obj::__register();
::DocumentClass_obj::__register();
::Main_obj::__register();
::openfl::display::Sprite_obj::__register();
::openfl::display::DisplayObjectContainer_obj::__register();
::openfl::display::InteractiveObject_obj::__register();
::openfl::display::DisplayObject_obj::__register();
::openfl::Lib_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::openfl::display::IBitmapDrawable_obj::__register();
::openfl::events::EventDispatcher_obj::__register();
::openfl::events::IEventDispatcher_obj::__register();
::ApplicationMain_obj::__register();
::Xml_obj::__init__();
::openfl::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::EReg_obj::__boot();
::Xml_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::vm::Mutex_obj::__boot();
::cpp::vm::Thread_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::openfl::events::IEventDispatcher_obj::__boot();
::openfl::events::EventDispatcher_obj::__boot();
::openfl::display::IBitmapDrawable_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::openfl::Lib_obj::__boot();
::openfl::display::DisplayObject_obj::__boot();
::openfl::display::InteractiveObject_obj::__boot();
::openfl::display::DisplayObjectContainer_obj::__boot();
::openfl::display::Sprite_obj::__boot();
::Main_obj::__boot();
::DocumentClass_obj::__boot();
::Date_obj::__boot();
::openfl::AssetLibrary_obj::__boot();
::DefaultAssetLibrary_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::openfl::display::BitmapData_obj::__boot();
::TestBMD_obj::__boot();
::ERROR_LD_obj::__boot();
::ERROR_MD_obj::__boot();
::ERROR_HD_obj::__boot();
::SYNC_LD_obj::__boot();
::SYNC_MD_obj::__boot();
::SYNC_HD_obj::__boot();
::BUDDHA_obj::__boot();
::DRAGON_obj::__boot();
::FACES_obj::__boot();
::MONKS_obj::__boot();
::TEMPLE_obj::__boot();
::IMap_obj::__boot();
::Reflect_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Type_obj::__boot();
::XmlType_obj::__boot();
::com::danielfreeman::AnimationTimer_obj::__boot();
::com::danielfreeman::_MadXML::NodeAccess_obj::__boot();
::com::danielfreeman::_MadXML::AttribAccess_obj::__boot();
::com::danielfreeman::_MadXML::HasAttribAccess_obj::__boot();
::com::danielfreeman::_MadXML::HasNodeAccess_obj::__boot();
::com::danielfreeman::_MadXML::NodeListAccess_obj::__boot();
::com::danielfreeman::MadXML_obj::__boot();
::com::danielfreeman::MadXMLList_obj::__boot();
::com::danielfreeman::extendedmadness::Star_obj::__boot();
::openfl::text::TextField_obj::__boot();
::openfl::text::TextFormat_obj::__boot();
::com::danielfreeman::madcomponents::UILabel_obj::__boot();
::com::danielfreeman::extendedmadness::UICell_obj::__boot();
::com::danielfreeman::madcomponents::IComponentUI_obj::__boot();
::com::danielfreeman::madcomponents::MadSprite_obj::__boot();
::com::danielfreeman::extendedmadness::UICheckBox_obj::__boot();
::com::danielfreeman::extendedmadness::UICutCopyPaste_obj::__boot();
::com::danielfreeman::extendedmadness::UISimpleDataGrid_obj::__boot();
::com::danielfreeman::extendedmadness::UIFastDataGrid_obj::__boot();
::com::danielfreeman::extendedmadness::UIIcons_obj::__boot();
::com::danielfreeman::extendedmadness::UILine_obj::__boot();
::com::danielfreeman::madcomponents::MadMasking_obj::__boot();
::com::danielfreeman::madcomponents::IContainerUI_obj::__boot();
::com::danielfreeman::madcomponents::UIScrollVertical_obj::__boot();
::com::danielfreeman::madcomponents::UIList_obj::__boot();
::com::danielfreeman::extendedmadness::UIListHorizontal_obj::__boot();
::com::danielfreeman::madcomponents::UIForm_obj::__boot();
::com::danielfreeman::extendedmadness::UIPanel_obj::__boot();
::com::danielfreeman::madcomponents::UISlider_obj::__boot();
::com::danielfreeman::extendedmadness::UIProgressBar_obj::__boot();
::com::danielfreeman::extendedmadness::UIRadialSlider_obj::__boot();
::com::danielfreeman::extendedmadness::UIRadioButton_obj::__boot();
::com::danielfreeman::madcomponents::UIPages_obj::__boot();
::com::danielfreeman::extendedmadness::UIScreens_obj::__boot();
::com::danielfreeman::extendedmadness::UIScrollXY_obj::__boot();
::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj::__boot();
::com::danielfreeman::extendedmadness::UIScrollDataGrids_obj::__boot();
::com::danielfreeman::extendedmadness::UIScrollHorizontal_obj::__boot();
::com::danielfreeman::extendedmadness::UIScrollTouchGrids_obj::__boot();
::com::danielfreeman::extendedmadness::UISegmentedControl_obj::__boot();
::com::danielfreeman::extendedmadness::UISpecialDataGrid_obj::__boot();
::com::danielfreeman::extendedmadness::UIStarRating_obj::__boot();
::com::danielfreeman::extendedmadness::UISwitchX_obj::__boot();
::com::danielfreeman::extendedmadness::UITabButtonRow_obj::__boot();
::com::danielfreeman::madcomponents::UITabPages_obj::__boot();
::com::danielfreeman::extendedmadness::UITabPagesTop_obj::__boot();
::com::danielfreeman::extendedmadness::UITable_obj::__boot();
::com::danielfreeman::extendedmadness::UITick_obj::__boot();
::com::danielfreeman::extendedmadness::UITickList_obj::__boot();
::com::danielfreeman::extendedmadness::UITickOneList_obj::__boot();
::com::danielfreeman::madcomponents::UIContainerBaseClass_obj::__boot();
::com::danielfreeman::extendedmadness::UITouch_obj::__boot();
::com::danielfreeman::madcomponents::UIGroupedList_obj::__boot();
::com::danielfreeman::madcomponents::UIDividedList_obj::__boot();
::com::danielfreeman::madcomponents::UINavigation_obj::__boot();
::com::danielfreeman::madcomponents::UIImage_obj::__boot();
::com::danielfreeman::madcomponents::UISwitch_obj::__boot();
::com::danielfreeman::madcomponents::UIInput_obj::__boot();
::com::danielfreeman::madcomponents::UISearch_obj::__boot();
::com::danielfreeman::madcomponents::UIButton_obj::__boot();
::com::danielfreeman::madcomponents::UIButtonX_obj::__boot();
::com::danielfreeman::madcomponents::UILabelX_obj::__boot();
::com::danielfreeman::madcomponents::UISliderX_obj::__boot();
::com::danielfreeman::madcomponents::UIInputX_obj::__boot();
::com::danielfreeman::madcomponents::UICircular_obj::__boot();
::com::danielfreeman::madcomponents::UISpacer_obj::__boot();
::com::danielfreeman::madcomponents::UIViewFlipper_obj::__boot();
::com::danielfreeman::madcomponents::UIRenderer_obj::__boot();
::com::danielfreeman::madcomponents::UINavigationPages_obj::__boot();
::com::danielfreeman::madcomponents::UIImageLoader_obj::__boot();
::com::danielfreeman::madcomponents::UI_obj::__boot();
::openfl::utils::Timer_obj::__boot();
::openfl::errors::Error_obj::__boot();
::com::danielfreeman::extendedmadness::UIe_obj::__boot();
::openfl::geom::Rectangle_obj::__boot();
::com::danielfreeman::madcomponents::Attributes_obj::__boot();
::com::danielfreeman::madcomponents::Colour_obj::__boot();
::openfl::net::URLLoader_obj::__boot();
::com::danielfreeman::madcomponents::Model_obj::__boot();
::com::danielfreeman::madcomponents::UIActivity_obj::__boot();
::com::danielfreeman::madcomponents::UIBackButton_obj::__boot();
::com::danielfreeman::madcomponents::UIBlueText_obj::__boot();
::com::danielfreeman::madcomponents::UINavigationBar_obj::__boot();
::com::danielfreeman::madcomponents::UIPicker_obj::__boot();
::com::danielfreeman::madcomponents::UIRefresh_obj::__boot();
::com::danielfreeman::madcomponents::UITabButton_obj::__boot();
::com::danielfreeman::madcomponents::UIWindow_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::CallStack_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::format::JsonParser_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::zip::Compress_obj::__boot();
::haxe::zip::FlushMode_obj::__boot();
::haxe::zip::Uncompress_obj::__boot();
::openfl::AssetCache_obj::__boot();
::openfl::Assets_obj::__boot();
::openfl::AssetData_obj::__boot();
::openfl::AssetType_obj::__boot();
::openfl::Memory_obj::__boot();
::openfl::_Vector::Vector_Impl__obj::__boot();
::openfl::display::Bitmap_obj::__boot();
::openfl::display::OptimizedPerlin_obj::__boot();
::openfl::display::BlendMode_obj::__boot();
::openfl::display::CapsStyle_obj::__boot();
::openfl::display::DirectRenderer_obj::__boot();
::openfl::display::FrameLabel_obj::__boot();
::openfl::display::GradientType_obj::__boot();
::openfl::display::Graphics_obj::__boot();
::openfl::display::GraphicsPathWinding_obj::__boot();
::openfl::display::IGraphicsData_obj::__boot();
::openfl::display::InterpolationMethod_obj::__boot();
::openfl::display::JointStyle_obj::__boot();
::openfl::display::LineScaleMode_obj::__boot();
::openfl::display::Loader_obj::__boot();
::openfl::display::LoaderInfo_obj::__boot();
::openfl::events::Event_obj::__boot();
::openfl::events::MouseEvent_obj::__boot();
::openfl::events::TouchEvent_obj::__boot();
::openfl::display::Stage_obj::__boot();
::openfl::display::ManagedStage_obj::__boot();
::openfl::display::MovieClip_obj::__boot();
::openfl::display::OpenGLView_obj::__boot();
::openfl::display::PixelSnapping_obj::__boot();
::openfl::display::Shape_obj::__boot();
::openfl::display::SpreadMethod_obj::__boot();
::openfl::display::TouchInfo_obj::__boot();
::openfl::display::StageAlign_obj::__boot();
::openfl::display::StageDisplayState_obj::__boot();
::openfl::display::StageQuality_obj::__boot();
::openfl::display::StageScaleMode_obj::__boot();
::openfl::geom::Point_obj::__boot();
::openfl::display::Tilesheet_obj::__boot();
::openfl::display::TriangleCulling_obj::__boot();
::openfl::errors::ArgumentError_obj::__boot();
::openfl::errors::EOFError_obj::__boot();
::openfl::errors::RangeError_obj::__boot();
::openfl::events::TextEvent_obj::__boot();
::openfl::events::ErrorEvent_obj::__boot();
::openfl::events::Listener_obj::__boot();
::openfl::events::EventPhase_obj::__boot();
::openfl::events::FocusEvent_obj::__boot();
::openfl::events::HTTPStatusEvent_obj::__boot();
::openfl::events::IOErrorEvent_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::KeyboardEvent_obj::__boot();
::openfl::events::ProgressEvent_obj::__boot();
::openfl::events::SampleDataEvent_obj::__boot();
::openfl::events::SecurityErrorEvent_obj::__boot();
::openfl::events::SystemEvent_obj::__boot();
::openfl::events::TimerEvent_obj::__boot();
::openfl::events::UncaughtErrorEvent_obj::__boot();
::openfl::events::UncaughtErrorEvents_obj::__boot();
::openfl::filters::BitmapFilter_obj::__boot();
::openfl::filters::DropShadowFilter_obj::__boot();
::openfl::geom::ColorTransform_obj::__boot();
::openfl::geom::Matrix_obj::__boot();
::openfl::geom::Matrix3D_obj::__boot();
::openfl::geom::Transform_obj::__boot();
::openfl::geom::Vector3D_obj::__boot();
::openfl::gl::GL_obj::__boot();
::openfl::gl::_GL::Float32Data_Impl__obj::__boot();
::openfl::gl::GLObject_obj::__boot();
::openfl::gl::GLBuffer_obj::__boot();
::openfl::gl::GLFramebuffer_obj::__boot();
::openfl::gl::GLProgram_obj::__boot();
::openfl::gl::GLRenderbuffer_obj::__boot();
::openfl::gl::GLShader_obj::__boot();
::openfl::gl::GLTexture_obj::__boot();
::openfl::media::ID3Info_obj::__boot();
::openfl::media::Sound_obj::__boot();
::openfl::media::InternalAudioType_obj::__boot();
::openfl::media::SoundChannel_obj::__boot();
::openfl::media::AudioThreadState_obj::__boot();
::openfl::media::SoundLoaderContext_obj::__boot();
::openfl::media::SoundTransform_obj::__boot();
::openfl::net::URLLoaderDataFormat_obj::__boot();
::openfl::net::URLRequest_obj::__boot();
::openfl::net::URLRequestHeader_obj::__boot();
::openfl::net::URLRequestMethod_obj::__boot();
::openfl::net::URLVariables_obj::__boot();
::openfl::system::ApplicationDomain_obj::__boot();
::openfl::system::Capabilities_obj::__boot();
::openfl::system::LoaderContext_obj::__boot();
::openfl::system::PixelFormat_obj::__boot();
::openfl::system::ScreenMode_obj::__boot();
::openfl::system::SecurityDomain_obj::__boot();
::openfl::text::AntiAliasType_obj::__boot();
::openfl::text::Font_obj::__boot();
::openfl::text::FontStyle_obj::__boot();
::openfl::text::FontType_obj::__boot();
::openfl::text::GridFitType_obj::__boot();
::openfl::text::TextFieldAutoSize_obj::__boot();
::openfl::text::TextFieldType_obj::__boot();
::openfl::text::TextFormatAlign_obj::__boot();
::openfl::text::TextLineMetrics_obj::__boot();
::openfl::ui::Keyboard_obj::__boot();
::openfl::utils::IMemoryRange_obj::__boot();
::openfl::utils::ArrayBufferView_obj::__boot();
::openfl::utils::IDataOutput_obj::__boot();
::openfl::utils::IDataInput_obj::__boot();
::openfl::utils::ByteArray_obj::__boot();
::openfl::utils::CompressionAlgorithm_obj::__boot();
::openfl::utils::Endian_obj::__boot();
::openfl::utils::Float32Array_obj::__boot();
::openfl::utils::WeakRef_obj::__boot();
::sys::FileSystem_obj::__boot();
::sys::io::FileOutput_obj::__boot();
}

