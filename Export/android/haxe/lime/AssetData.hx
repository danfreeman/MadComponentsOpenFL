package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/buddha.jpg", "assets/buddha.jpg");
			type.set ("assets/buddha.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/dragon.jpg", "assets/dragon.jpg");
			type.set ("assets/dragon.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/faces.jpg", "assets/faces.jpg");
			type.set ("assets/faces.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/hdpi/ic_dialog_info.png", "assets/hdpi/ic_dialog_info.png");
			type.set ("assets/hdpi/ic_dialog_info.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/hdpi/stat_notify_chat.png", "assets/hdpi/stat_notify_chat.png");
			type.set ("assets/hdpi/stat_notify_chat.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/hdpi/stat_notify_error.png", "assets/hdpi/stat_notify_error.png");
			type.set ("assets/hdpi/stat_notify_error.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/hdpi/stat_notify_sync.png", "assets/hdpi/stat_notify_sync.png");
			type.set ("assets/hdpi/stat_notify_sync.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/ldpi/ic_dialog_info.png", "assets/ldpi/ic_dialog_info.png");
			type.set ("assets/ldpi/ic_dialog_info.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/ldpi/stat_notify_chat.png", "assets/ldpi/stat_notify_chat.png");
			type.set ("assets/ldpi/stat_notify_chat.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/ldpi/stat_notify_error.png", "assets/ldpi/stat_notify_error.png");
			type.set ("assets/ldpi/stat_notify_error.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/ldpi/stat_notify_sync.png", "assets/ldpi/stat_notify_sync.png");
			type.set ("assets/ldpi/stat_notify_sync.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/mdpi/ic_dialog_info.png", "assets/mdpi/ic_dialog_info.png");
			type.set ("assets/mdpi/ic_dialog_info.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/mdpi/stat_notify_chat.png", "assets/mdpi/stat_notify_chat.png");
			type.set ("assets/mdpi/stat_notify_chat.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/mdpi/stat_notify_error.png", "assets/mdpi/stat_notify_error.png");
			type.set ("assets/mdpi/stat_notify_error.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/mdpi/stat_notify_sync.png", "assets/mdpi/stat_notify_sync.png");
			type.set ("assets/mdpi/stat_notify_sync.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/monks.jpg", "assets/monks.jpg");
			type.set ("assets/monks.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/red.png", "assets/red.png");
			type.set ("assets/red.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temple.jpg", "assets/temple.jpg");
			type.set ("assets/temple.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/xhdpi/ic_dialog_info.png", "assets/xhdpi/ic_dialog_info.png");
			type.set ("assets/xhdpi/ic_dialog_info.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
