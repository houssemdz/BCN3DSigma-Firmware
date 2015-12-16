/*
 * Touch_Screen_Definitions.h
 * Here we have all the constants related to items in the LCD Screen
 * Created: 14/11/2014 13:16:59
 *  Author: Jordi Calduch (Dryrain)
 */ 


#ifndef TOUCH_SCREEN_DEFINITIONS_H_
#define TOUCH_SCREEN_DEFINITIONS_H_
#pragma region FORMS
//Form
//without form declared
#define BUTTON_STOP_YES						1
#define BUTTON_COOLDOWN_OK					34
#define BUTTON_CHANGE_EXTRUDER				63
#define BUTTON_COOLDOWN_OK					34
#define BUTTON_COOLDOWN_CANCEL				74
#define STRING_VERSION							3
////////////////////////////////////			/////////

#define FORM_SDFILES							2
	#define STRING_NAME_FILE							1
	#define BUTTON_SD_SELECTED							15
	#define BUTTON_SD_LEFT								14
	#define BUTTON_SD_RIGHT								5	
#define FORM_REDO_X_CAB							3
	#define BUTTON_REDO_LEFT_CAB						27
	#define BUTTON_REDO_RIGHT_CAB						28
	#define BUTTON_REDO_X_CAB							29
#define FORM_UTILITIES							4	
#define FORM_MAIN_SCREEN						5	
#define FORM_FILAMENT							6
	#define	BUTTON_FILAMENT_BACK			0
	#define	BUTTON_PURGE					159
	#define BUTTON_INSERT_FIL				2
	#define BUTTON_REMOVE_FIL				50
#define FORM_INFO_FIL_INSERTED		7
	#define BUTTON_INFO_FIL_INSERTED		10
	#define BACKBUTTON_INFO_FIL_INSERTED	49
	#define BACKBUTTON_INSERT				49
	
/*#define FORM_MANUAL_CONTROL		8
//Winbuttons
#define BUTTON_MOVE_AXIS_X					1
#define BUTTON_MOVE_AXIS_Y					2
#define BUTTON_MOVE_AXIS_Z					7
#define BUTTON_MOVE_AXIS_minusX				0
#define BUTTON_MOVE_AXIS_minusY				3
#define BUTTON_MOVE_AXIS_minusZ				8
#define BUTTON_MOVE_AXIS_HOME				4
#define BUTTON_PREHEAT						15
#define BUTTON_MOVE_AXIS_E					5
#define BUTTON_MOVE_AXIS_minusE				6

//LedDigits
#define LEDDIGITS_FEEDRATE					18
#define LEDDIGITS_NOZZLE					19
#define LEDDIGITS_BED						20
#define LEDDIGITS_FAN						21*/	

#define FORM_PRINTING								9
	#define STRING_PRINTING_NOZZ1			0
	#define STRINGS_PRINTING_GCODE			2
	#define STRING_PRINTING_NOZZ2			34
	#define STRINGS_PRINTING_FEED			36
	#define STRING_PRINTING_PERCENT			37
	#define STRING_PRINTING_BED				9
	#define BUTTON_PRINT_SETTINGS			16
	#define BUTTON_PAUSE_RESUME				18
 
#define FORM_CLEAN_BED								10
	#define	BUTTON_CLEAN_BED				71
#define FORM_WAITING_ROOM							11
	#define USERIMAGE_PROCESSING			2
#define FORM_INSERT_FILAMENT_TOP					12
	#define BUTTON_PREHEAT_PLA				36
#define FORM_REDO_Y_CAB								13
	#define BUTTON_REDO_Y_CAB				30
	#define BUTTON_REDO_UP_CAB				31
	#define BUTTON_REDO_DOWN_CAB			35
#define FORM_ADJUST_FILAMENT						14
	#define BUTTON_ACCEPT_ADJUST			17
	#define BUTTON_ADJUST_ZUp				32
	#define BUTTON_ADJUST_ZDown				33
#define FORM_INFO_TURN_SCREWS						16
	#define BUTTON_SKIP_BED					158
	#define BUTTON_INFO_TURN_SCREWS			41
#define	FORM_INFO_Z_PRINT							17
#define FORM_INFO_PLACE_FIL							19
	#define STRING_FILAMENT					11
	#define	BUTTON_INSERT					52
	#define	BUTTON_REMOVE					52
	//#define BUTTON_INFO_PLACE_FIL			52
#define FORM_INSERT_FIL								19
#define FORM_REMOVE_FIL								19
#define FORM_PURGE_FIL								19
#define FORM_SELECT_EXTRUDER						20
	#define	BUTTON_FILAMENT_NOZZLE1			75
	#define	BUTTON_FILAMENT_NOZZLE2			76 
#define FORM_SUCCESS_FILAMENT						21
	#define BUTTON_SUCCESS_FILAMENT_OK		53
#define FORM_CALIBRATION							23
	#define BUTTON_CAL_FULL					118
	#define BACKBUTTON_CALIBRATION			66
	#define BUTTON_Z_CAL_WIZARD				68
#define FORM_CAL_WIZARD_DONE_GOOD					24
	#define BUTTON_BED_CALIB_SUCCESS		69
#define FORM_LEFT_Z_TEST							25
	#define BUTTON_REDO_LEFT				131
	#define BUTTON_Z_LEFT_SELECT4			23
	#define BUTTON_Z_LEFT_SELECT5			24
	#define BUTTON_Z_LEFT_SELECT1			43
	#define BUTTON_Z_LEFT_SELECT2			47
	#define BUTTON_Z_LEFT_SELECT3			48	
#define FORM_ADJUSTING_TEMPERATURES					26	
#define FORM_X_CALIB_SELECT							27
	#define BUTTON_X_LINE_SELECT1			21
	#define BUTTON_X_LINE_SELECT2			22
	#define BUTTON_X_LINE_SELECT3			51
	#define BUTTON_X_LINE_SELECT4			72
	#define BUTTON_X_LINE_SELECT5			96
	#define BUTTON_X_LINE_SELECT6			97
	#define BUTTON_X_LINE_SELECT7			98
	#define BUTTON_X_LINE_SELECT8			99
	#define BUTTON_X_LINE_SELECT9			100
	#define BUTTON_X_LINE_SELECT10			101
#define FORM_TEMP_MENU								28
	#define STRING_TEMP_NOZZ1				40
	#define STRING_TEMP_BED					41
	#define STRING_TEMP_NOZZ2				42		
#define FORM_PREHEAT_SETTINGS						29
	#define STRING_PREHEAT_SET_NOZZ1		43
	#define STRING_PREHEAT_SET_NOZZ2		44
	#define STRING_PREHEAT_SET_BED			45
	#define BUTTON_PREHEAT_SET_NOZZ0_UP		84
	#define BUTTON_PREHEAT_SET_BED_UP		85
	#define BUTTON_PREHEAT_SET_NOZZ1_UP		86
	#define BUTTON_PREHEAT_SET_NOZZ0_DOWN	87
	#define BUTTON_PREHEAT_SET_BED_DOWN		88
	#define BUTTON_PREHEAT_SET_NOZZ1_DOWN	89
	#define BUTTON_PREHEAT_SET_BACK			91
	#define BUTTON_PREHEAT_ACCEPT			90
#define FORM_CALIB_BED_SCREW1						30
	#define BUTTON_BED_CALIB_SW2			93
	#define USERIMAGE_SCREW1				3	
#define FORM_CALIB_BED_SCREW2						31
	#define BUTTON_BED_CALIB_SW3			94
	#define USERIMAGE_SCREW2				4
	#define FORM_CALIB_BED_SCREW3					32
	#define BUTTON_REDO_BED_CALIB			95
	#define USERIMAGE_SCREW3				5	
#define FORM_Y_CALIB_SELECT							33
	#define BUTTON_Y_LINE_SELECT1			102
	#define BUTTON_Y_LINE_SELECT2			103
	#define BUTTON_Y_LINE_SELECT3			104
	#define BUTTON_Y_LINE_SELECT4			105
	#define BUTTON_Y_LINE_SELECT5			106
	#define BUTTON_Y_LINE_SELECT6			107
	#define BUTTON_Y_LINE_SELECT7			108
	#define BUTTON_Y_LINE_SELECT8			109
	#define BUTTON_Y_LINE_SELECT9			110
	#define BUTTON_Y_LINE_SELECT10			111	
#define FORM_CALIB_Z_EXTRUDER1						34
	#define BUTTON_Z_CALIB_Z1_Up			112
	#define BUTTON_Z_CALIB_Z1_Down			113
	#define BUTTON_Z_CALIB_Z1_OK			114
#define FORM_CALIB_Z_EXTRUDER2						35
	#define BUTTON_Z_CALIB_Z2_OK			115
	#define BUTTON_Z_CALIB_Z2_Up			116
	#define BUTTON_Z_CALIB_Z2_Down			117
#define FORM_FULL_CAL								40
	#define STRING_AXIS						50
#define FORM_CLEAN_EXTRUDERS						41
	#define STRING_CLEAN_INSTRUCTIONS		53
	#define USERBUTTON_CLEAN_DONE			67
	#define USERIMAGE_THERMOMETHER			11
#define FORM_PURGE									44
	#define STRING_PURGE_SELECTED			5
	#define STRING_PURGE_LEFT_TEMP			10
	#define STRING_PURGE_RIGHT_TEMP			17
	#define BUTTON_PURGE_RETRACK			151
	#define BUTTON_PURGE_INSERT				152
	#define BUTTON_PURGE_INSERTX3			153
	#define BUTTON_PURGE_LEFT				154
	#define BUTTON_PURGE_RIGHT				155
	#define BUTTON_PURGE_TEMP_UP			156
	#define BUTTON_PURGE_TEMP_DOWN			157
	#define BUTTON_PURGE_BACK				160
#define FORM_INSERT_FILAMENT_HANDS					47
	#define BUTTON_MOVE_INSERT				58
#define FORM_RIGHT_Z_TEST							48	
	#define	BUTTON_REDO_RIGHT				127
	#define BUTTON_Z_RIGHT_SELECT1			60
	#define BUTTON_Z_RIGHT_SELECT2			62
	#define BUTTON_Z_RIGHT_SELECT3			119
	#define BUTTON_Z_RIGHT_SELECT4			25
	#define BUTTON_Z_RIGHT_SELECT5			73
#define FORM_REDO_Z_TEST							49
	#define BUTTON_REDO_Z_1					128
	#define BUTTON_REDO_Z					130
	#define BUTTON_REDO_Z_5					129
	#define BUTTON_RECALIBRATE_Z			64
#define FORM_LEFT_MATERIAL							50
	#define BUTTON_PLA_L					132
	#define BUTTON_ABS_L					133
	#define BUTTON_PVA_L					134
	#define BUTTON_CUST_L					135
#define FORM_RIGHT_MATERIAL							51	
	#define BUTTON_PLA_R					138
	#define BUTTON_ABS_R					139
	#define BUTTON_PVA_R					140
	#define BUTTON_CUST_R					141
#define FORM_CUSTOM_MATERIAL						52
	#define STRING_CUSTOM_INSERT			13
	#define STRING_CUSTOM_REMOVE			14
	#define STRING_CUSTOM_PRINT				15
	#define STRING_CUSTOM_BED				18
	#define BUTTON_CUSTOM_INS_LESS			142
	#define BUTTON_CUSTOM_INS_MORE			146
	#define BUTTON_CUSTOM_REM_LESS			143
	#define BUTTON_CUSTOM_REM_MORE			147
	#define BUTTON_CUSTOM_PRINT_LESS		144
	#define BUTTON_CUSTOM_PRINT_MORE		148
	#define BUTTON_CUSTOM_BED_LESS			161
	#define BUTTON_CUSTOM_BED_MORE			150
	#define BUTTON_CUSTOM_BACK				145
	#define BUTTON_CUSTOM_ACCEPT			149
#define FORM_PRINTTING_SETTINGS_DEF					53
	#define STRING_PS_LEFT_TEMP				19
	#define STRING_PS_BED_TEMP				20
	#define STRING_PS_RIGHT_TEMP			21	
	#define STRING_PS_SPEED					22
	#define BUTTON_PRINT_SET_BACK			162
	#define BUTTON_PRINT_SET_SPEED_UP		166
	#define BUTTON_PRINT_SET_SPEED_DOWN		170
	#define BUTTON_PRINT_SET_NOZZ1_UP		163
	#define BUTTON_PRINT_SET_NOZZ1_DOWN		167
	#define BUTTON_PRINT_SET_NOZZ2_UP		165
	#define BUTTON_PRINT_SET_NOZZ2_DOWN		169
	#define BUTTON_PRINT_SET_BED_UP			164
	#define BUTTON_PRINT_SET_BED_DOWN		168
//#define FORM_WELCOME				
//#define FORM_QUICK_MAIN			
//#define FORM_QUICK_CALIBRATE		
//#define FORM_QUICK_RIGHT	
#pragma endregion FORMS


//QUICKSTART
/*#define BUTTON_QUICK_INSERT_LEFT
#define BUTTON_QUICK_INSERT_LEFT2
#define BUTTON_QUICK_INSERT_RIGHT
#define BUTTON_QUICK_INSERT_RIGHT2
#define BUTTON_QUICK_FULLCALIB
#define BUTTON_QUICK_START_FULLCALIB*/

/*#define MENU_PRINT							12
#define MENU_PREHEAT						12
#define MENU_UTILITY						12
#define MENU_FILAMENT						12
#define MENU_INFO							12
#define MENU_SETTINGS						12*/

#endif 