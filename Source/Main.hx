package;

import openfl.display.StageQuality;
import openfl.display.StageScaleMode;
import openfl.display.StageAlign;
import openfl.display.Sprite;
import com.danielfreeman.madcomponents.UI;
import com.danielfreeman.extendedmadness.UIe;
import com.danielfreeman.extendedmadness.UISpecialDataGrid;
import openfl.display.BitmapData;
import openfl.display.Bitmap;

import openfl.geom.Point;

@:bitmap("Assets/red.png") class TestBMD extends BitmapData {}

@:bitmap("Assets/ldpi/stat_notify_error.png") class ERROR_LD extends BitmapData {}
@:bitmap("Assets/mdpi/stat_notify_error.png") class ERROR_MD extends BitmapData {}
@:bitmap("Assets/hdpi/stat_notify_error.png") class ERROR_HD extends BitmapData {}

@:bitmap("Assets/ldpi/stat_notify_sync.png") class SYNC_LD extends BitmapData {}
@:bitmap("Assets/mdpi/stat_notify_sync.png") class SYNC_MD extends BitmapData {}
@:bitmap("Assets/hdpi/stat_notify_sync.png") class SYNC_HD extends BitmapData {}

	
class Main extends Sprite {
	
	private static inline var TEST_STRING:String =	"Lorem ipsum dolor eiusmod tempor.";
	
	private static inline var DATA:String =

		'<data>
			<Sneezy/>
			<Sleepy/>
			<Dopey/>
			<Doc/>
			<Happy/>
			<Bashful/>
			<Grumpy/>
			<Sneezy/>
			<Sleepy/>
			<Dopey/>
			<Doc/>
			<Happy/>
			<Bashful/>
			<Grumpy/>
		</data>';
				
				
	private static inline var DATA_PLUS:String =

		'<data>
			<item label="Sneezy" _lines="true" _colour="#FFFF00" _highlight="false"/>
			<Sleepy/>
			<Dopey/>
			<Doc/>
			<Happy/>
			<Bashful/>
			<Grumpy/>
			<Sneezy/>
			<Sleepy/>
			<Dopey/>
			<Doc/>
			<Happy/>
			<Bashful/>
			<Grumpy/>
			<Sleepy/>
			<Dopey/>
			<Doc/>
			<Happy/>
			<Bashful/>
			<Grumpy/>
			<Sneezy/>
			<Sleepy/>
			<Dopey/>
			<Doc/>
			<Happy/>
			<Bashful/>
			<Grumpy/>
			<Sleepy/>
			<Dopey/>
			<Doc/>
			<Happy/>
			<Bashful/>
			<Grumpy/>
			<Sneezy/>
			<Sleepy/>
			<Dopey/>
			<Doc/>
			<Happy/>
			<Bashful/>
			<Grumpy/>
			<Sleepy/>
			<Dopey/>
			<Doc/>
			<Happy/>
			<Bashful/>
			<Grumpy/>
			<Sneezy/>
			<Sleepy/>
			<Dopey/>
			<Doc/>
			<Happy/>
			<Bashful/>
			<Grumpy/>
		</data>';
				
				
	private static inline var GROUPED_DATA:String =		
				
			'<data>
				<group label="dwarfs">
					<Sneezy/>
					<Sleepy/>
					<Dopey/>
					<Doc/>
					<Happy/>
					<Bashful/>
					<Grumpy/>
				</group>
				<group label="reindeer">
					<Dasher/>
					<Dancer/>
					<Prancer/>
					<Vixen/>
					<Comet/>
					<Cupid/>
					<Donder/>
					<Blitzen/>
				</group>
				<group label="colours">
					<Red/>
					<Green/>
					<Blue/>
				</group>
				<group label="another">
					<Here/>
				</group>
			</data>';

	
	private static inline var LIST:String =
		
		'<list background="#CCFFFF">'
			+ DATA +	
		'</list>';
	
	
	private static inline var LIST_RENDERER:String =
		
		'<columns>
			<label id="label"/>
			<switch/>
		</columns>';
				
				
				
	private static inline var LISTR:String =
		
		'<list background="#CCFFFF">'
			+ LIST_RENDERER
			+ DATA_PLUS +
		'</list>';
	
	
	private static inline var GROUPED_LIST:String =
		
		'<groupedList background="#CCFFFF">'
			+ GROUPED_DATA +	
		'</groupedList>';
	
	
	
	private static inline var DIVIDED_LIST:String =
		
		'<dividedList background="#CCFFFF">'
			+ GROUPED_DATA +	
		'</dividedList>';
				
				
				
	private static inline var PAGE:String =
		
		'<vertical background="#CCFFFF">
			<label>Hello World</label>
			<input prompt="?"/>
			<slider background="#FF9900"/>
			<button colour="#FF9999" alignH="fill">abcdef</button>
			<switch/>
			<columns GapH="0">
				<picker>'+ DATA +'</picker>
				<picker>'+ DATA +'</picker>
				<picker>'+ DATA +'</picker>
			</columns>
		</vertical>';
				
				
	private static inline var NAVIGATION:String =
		
		'<navigation style7="true">'
			+ LIST
			+ PAGE +
		'</navigation>';
	
	
	private static inline var TAB_DATA:String =
	
		'<data>
			<item label="page 1"
				ldpi="ERROR_LD"
				mdpi="ERROR_MD"
				hdpi="ERROR_HD"
			/>
			<item label="page 2"
				ldpi="SYNC_LD"
				mdpi="SYNC_MD"
				hdpi="SYNC_HD"
			/>
		</data>';
					
					
	private static inline var TAB_PAGES:String =
		
		'<tabPages>'
			+ TAB_DATA
			+ LIST
			+ PAGE +
		'</tabPages>';
	
	
	private static inline var TAB_PAGES_TOP:String =
		
		'<tabPagesTop>'
			+ TAB_DATA
			+ LIST
			+ PAGE +
		'</tabPagesTop>';
	
	
	private static inline var ICONS:String =
		
		'<icons id="slidingTabs" size="160DPI" border="false"
			background="#001133,#000022"
			gapH="30"
			leftMargin="20"
			height="38"
			pixelSnapping = "true"
			iconColour="#FFFF66"
			activeColour="#FFFFFF">
			<font color="#FFEE99"/>'
			+ TAB_DATA +
		'</icons>';
	
	
	
	private static inline var GRID_DATA:String =

			'<data>
				<header>number,a,b,c,d,e,f,g,h</header>
				<row>one,4,3,3,4,2,1,3,6</row>
				<row>two,6,2,8,5,3,5,7,9</row>
				<row>three,1,0,7,3,2,5,6,7</row>
				<row>four,4,2,5,7,4,2,8,9</row>
				<row>five,8,5,9,3,1,3,6,8</row>
			</data>';
			
			
	private static inline var DATAGRID:String =
		
			'<fastDataGrid id="dataGrid" titleBarColour="#333333" background="#333333,#FFFFFF,#CCCCFF">
				<title><font color="#FFFFFF" size="18"/>Datagrid example</title>
				<headerFont face="Arial" size="16" color="#EEEEFF"/>
				<font face="Arial" size="13" color="#333333"/>'
				+ GRID_DATA +
			'</fastDataGrid>';
			
			
	private static inline var SCROLLGRID:String =
		
			'<scrollDataGrid id="scrollGrid" fixedColumns="1" titleBarColour="#333333" background="#333333,#FFFFFF,#CCCCCC">
				<title><font color="#FFFFFF" size="18"/>Scrolling datagrid example</title>
				<headerFont face="Arial" size="16" color="#EEEEFF"/>
				<font face="Arial" size="13" color="#333333"/>'
				+ GRID_DATA +
			'</scrollDataGrid>';
			
			
	private static inline var SCROLLING_DATAGRIDS:String =
		
			'<scrollDataGrids fixedColumns="1" >'
				+ DATAGRID
				+ DATAGRID +
			'</scrollDataGrids>';
			
		
	private static inline var GRID_LAYOUT0:String =

			'<vertical border="false" gapV="0">'
				+ DATAGRID
				+ SCROLLGRID +
			'</vertical>';
	
	
	private static inline var GRID_DATA0:String =

			'<data>
				<header>aaa,bbb,ccc,ddd</header>
				<row>876,283,456,745</row>
				<row>106,374,584,982</row>
			</data>';
			
			
	private static inline var GRID_DATA1:String =

			'<data>
				<header>number,colour,shape</header>
				<row>six,red,triangle</row>
				<row>seven,orange,square</row>
				<row>eight,yellow,pentagon</row>
				<row>nine,green,hexagon</row>
				<row>ten,blue,septagon</row>
				<row>eleven,indigo,octagon</row>
				<row>twelve,violet,nonagon</row>
			</data>';
			
			
	private static inline var DATAGRID0:String =
		
			'<fastDataGrid titleBarColour="#333333" background="#333333,#FFFFFF,#CCCCCC">
				<title><font color="#FFFFFF" size="18"/>Datagrid 0</title>
				<headerFont face="Arial" size="16" color="#EEEEFF"/>
				<font face="Arial" size="13" color="#333333"/>'
				+ GRID_DATA0 +
			'</fastDataGrid>';
			
			
	private static inline var DATAGRID1:String =
		
			'<fastDataGrid id="dataGrid1" titleBarColour="#333333" background="#333333,#FFFFFF,#CCCCFF">
				<title><font color="#FFFFFF" size="18"/>Datagrid 1</title>
				<headerFont face="Arial" size="16" color="#EEFFEE"/>
				<font face="Arial" size="13" color="#333333"/>'
				+ GRID_DATA0 +
			'</fastDataGrid>';
			
			
	private static inline var DATAGRID2:String =
		
			'<fastDataGrid titleBarColour="#333333" background="#333333,#FFFFFF,#CCFFCC">
				<title><font color="#FFFFFF" size="18"/>Datagrid 2</title>
				<headerFont face="Arial" size="16" color="#FFEEEE"/>
				<font face="Arial" size="13" color="#333333"/>'
				+ GRID_DATA1 +
			'</fastDataGrid>';
			
			
	private static inline var GRID_LAYOUT1:String =
		
			'<scrollTouchGrids id="scrollGrids" fixedColumns="0" gapV="0" editButton="true" showPressed="true">'
				+ DATAGRID0
				+ DATAGRID1
				+ DATAGRID2 +
			'</scrollTouchGrids>';
	
	
//	private static inline var SPECIAL_DATAGRID:String =
		
//			'<specialDataGrid id="specialDataGrid" multiLine="true" titleBarColour="#333333" background="#333333,#FFFFFF,#CCCCFF">
//				<title><font color="#FFFFFF" size="18"/>Datagrid example</title>
//				<headerFont face="Arial" size="16" color="#EEEEFF"/>
//				<font face="Arial" size="13" color="#333333"/>
//			</specialDataGrid>';
					
					
	private static inline var RENDERER:String =
		
			'<vertical>
				<button alignH="fill"/>
				<label id="label" alignH="right">test</label>
			</vertical>';
			
			
	private static inline var TABLE:String =
		
			'<table id="table" background="#FF9933" border="true" lineColour="#0000FF">
				<columns>'
					+ RENDERER
					+ RENDERER +
				'</columns>
				<columns>'
					+ RENDERER
					+ RENDERER +
				'</columns>
				<columns>'
					+ RENDERER
					+ RENDERER +
				'</columns>
			</table>';


	private static inline var TOUCH:String =
		
			'<touch background="#CCCCCC">
				<image>ERROR_HD</image>
				<image>SYNC_HD</image>
			</touch>';

					
	
	public function new (screen:Sprite) {
		
		super();
		
        if (screen != null) {
            screen.addChild(this);
        }
        stage.align = StageAlign.TOP_LEFT;
        stage.scaleMode = StageScaleMode.NO_SCALE;
        stage.quality = StageQuality.LOW;
	
		UIe.create(this, MadXML.parse(LISTR));

	}
	
}