//<File !Start!>
// FILE: [TireToolFinal_GSLC.h]
// Created by GUIslice Builder version: [0.16.b004]
//
// GUIslice Builder Generated GUI Framework File
//
// For the latest guides, updates and support view:
// https://github.com/ImpulseAdventure/GUIslice
//
//<File !End!>

#ifndef _GUISLICE_GEN_H
#define _GUISLICE_GEN_H

// ------------------------------------------------
// Headers to include
// ------------------------------------------------
#include "GUIslice.h"
#include "GUIslice_drv.h"

// Include any extended elements
//<Includes !Start!>
// Include extended elements
#include "elem/XKeyPad_Num.h"
#include "elem/XListbox.h"
#include "elem/XProgress.h"
#include "elem/XRingGauge.h"
#include "elem/XSlider.h"
#include "elem/XTogglebtn.h"

// Ensure optional features are enabled in the configuration
#if !(GSLC_SD_EN)
  #error "Config: GSLC_SD_EN required for this program but not enabled. Please see: https://github.com/ImpulseAdventure/GUIslice/wiki/Configuring-GUIslice"
#endif
//<Includes !End!>

// ------------------------------------------------
// Headers and Defines for fonts
// Note that font files are located within the Adafruit-GFX library folder:
// ------------------------------------------------
//<Fonts !Start!>
#if defined(DRV_DISP_TFT_ESPI)
  #error Project tab->Target Platform should be tft_espi
#endif
#include <Adafruit_GFX.h>
#include "Fonts/FreeSans24pt7b.h"
#include "Fonts/FreeSans9pt7b.h"
#include "Fonts/FreeSansBoldOblique12pt7b.h"
#include "Fonts/FreeSansBoldOblique9pt7b.h"
#include "Fonts/NotoSans8pt7b.h"
#include "Fonts/dosis_bold14pt7b.h"
#include "Fonts/dosis_book8pt7b.h"
//<Fonts !End!>

// ------------------------------------------------
// Defines for resources
// ------------------------------------------------
//<Resources !Start!>
#define IMG_BACKGROUNDV2          "/backgroundV2.bmp"
#define IMG_BACKSPACE             "/backspace.bmp"
#define IMG_GAUGEV3_220X220       "/GaugeV3_220x220.bmp"
#define IMG_HOMEINACTIVE          "/HomeInactive.bmp"
#define IMG_LOG                   "/log.bmp"
#define IMG_OK                    "/OK.bmp"
#define IMG_PRESS                 "/press.bmp"
#define IMG_SAVE                  "/save.bmp"
#define IMG_SETTINGS              "/settings.bmp"
#define IMG_TEMP                  "/temp.bmp"
#define IMG_TEMPGAUGEV1_220X220   "/TempGaugeV1_220x220.bmp"
#define IMG_THERMAL               "/thermal.bmp"
#define IMG_TRACK                 "/track.bmp"
#define IMG_TRASH                 "/trash.bmp"
//<Resources !End!>

// ------------------------------------------------
// Enumerations for pages, elements, fonts, images
// ------------------------------------------------
//<Enum !Start!>
enum {E_PG_BASE,PG_ScreenSaver,PG_Home,PG_Pressure,PG_Temp,PG_Thermal
      ,PG_Log,THERMAL_SETTINGS,LOG_SAVE_LOAD,CONFIRM_DELETE
      ,E_POP_KEYPAD_NUM};
enum {AMB_TEMP_TXT,AUTO_BTN,AUTO_SCALE_SCRL,AUTO_SCALE_TXT,AV_FRONT_TXT
      ,AV_LEFT_TXT,AV_REAR_TXT,AV_RIGHT_TXT,BACKSPACE_BTN
      ,COLOR_BACK_BTN,COLOR_LIST,COLOR_LIST_SCRL,COLOR_SELECT_BTN
      ,CURSOR_BTN,CURSOR_ON_TXT,CURSOR_TXT,DATA_TXT_1,DATA_TXT_10
      ,DATA_TXT_11,DATA_TXT_12,DATA_TXT_2,DATA_TXT_3,DATA_TXT_4
      ,DATA_TXT_5,DATA_TXT_6,DATA_TXT_7,DATA_TXT_8,DATA_TXT_9
      ,DATE_TIME_TXT,DATE_TXT,DEFAULT_BTN,DELETE_BTN,DELTA_FL_TXT
      ,DELTA_FR_TXT,DELTA_RL_TXT,DELTA_RR_TXT,E_DRAW_LINE1,E_ELEM_BOX10
      ,E_ELEM_BOX11,E_ELEM_BOX12,E_ELEM_BOX17,E_ELEM_BOX2,E_ELEM_BOX7
      ,E_ELEM_IMAGE1,E_ELEM_IMAGE18,E_ELEM_IMAGE2,E_ELEM_TEXT10
      ,E_ELEM_TEXT11,E_ELEM_TEXT35,E_ELEM_TEXT42,E_ELEM_TEXT44
      ,E_ELEM_TEXT45,E_ELEM_TEXT46,E_ELEM_TEXT47,E_ELEM_TEXT48
      ,E_ELEM_TEXT51,E_ELEM_TEXT53,E_ELEM_TEXT56,E_ELEM_TEXT58
      ,E_ELEM_TEXT6,E_ELEM_TEXT60,E_ELEM_TEXT67,E_ELEM_TEXT68
      ,E_ELEM_TEXT7,E_ELEM_TEXT70,E_ELEM_TEXT8,E_ELEM_TEXT9,FRONT_LEFT
      ,FRONT_RIGHT,HOME_BTN,LOG_AMB_TXT,LOG_BACK_BTN,LOG_DEL_NO
      ,LOG_DEL_YES,LOG_LIST,LOG_LOAD_BTN,LOG_NAME_DATE_TXT,LOG_SAVE_BTN
      ,LOG_SCRL,LOG_TEMP_TXT,LOG_TRACK_TXT,MAX_TEMP_BTN,MIN_TEMP_BTN
      ,OK_BTN,PG_LOG_BTN,PG_PRESS_BTN,PG_TEMP_BTN,PG_THERMAL_BTN
      ,PRESS_GAUGE,PRESS_PAUSE_BTN,PROFILE_LIST,PROFILE_SCRL,REAR_LEFT
      ,REAR_RIGHT,RES_SCRL,RES_TXT,SAVE_LOAD_BTN,SAVE_LOAD_PROG
      ,SAVE_LOAD_PROG_BOX,TEMP_GAUGE,TEMP_PAUSE_BTN,THERMAL_PAUSE_BTN
      ,THERMAL_SETT_BTN,TIME_TXT,TRACK_TEMP_BTN,TRACK_TEMP_TXT,WAKE_BTN
      ,E_ELEM_KEYPAD_NUM};
// Must use separate enum for fonts with MAX_FONT at end to use gslc_FontSet.
enum {E_BUILTIN5X8,E_DOSIS_BOLD14,E_DOSIS_BOOK8,E_FREESANS24
      ,E_FREESANS9,E_FREESANSBOLDOBLIQUE12,E_FREESANSBOLDOBLIQUE9
      ,E_NOTOSANS8,MAX_FONT};
//<Enum !End!>

// ------------------------------------------------
// Instantiate the GUI
// ------------------------------------------------

// ------------------------------------------------
// Define the maximum number of elements and pages
// ------------------------------------------------
//<ElementDefines !Start!>
#define MAX_PAGE                11

#define MAX_ELEM_PG_BASE 4 // # Elems total on page
#define MAX_ELEM_PG_BASE_RAM MAX_ELEM_PG_BASE // # Elems in RAM

#define MAX_ELEM_PG_ScreenSaver 3 // # Elems total on page
#define MAX_ELEM_PG_ScreenSaver_RAM MAX_ELEM_PG_ScreenSaver // # Elems in RAM

#define MAX_ELEM_PG_Home 13 // # Elems total on page
#define MAX_ELEM_PG_Home_RAM MAX_ELEM_PG_Home // # Elems in RAM

#define MAX_ELEM_PG_Pressure 5 // # Elems total on page
#define MAX_ELEM_PG_Pressure_RAM MAX_ELEM_PG_Pressure // # Elems in RAM

#define MAX_ELEM_PG_Temp 4 // # Elems total on page
#define MAX_ELEM_PG_Temp_RAM MAX_ELEM_PG_Temp // # Elems in RAM

#define MAX_ELEM_PG_Thermal 9 // # Elems total on page
#define MAX_ELEM_PG_Thermal_RAM MAX_ELEM_PG_Thermal // # Elems in RAM

#define MAX_ELEM_PG_Log 35 // # Elems total on page
#define MAX_ELEM_PG_Log_RAM MAX_ELEM_PG_Log // # Elems in RAM

#define MAX_ELEM_THERMAL_SETTINGS 18 // # Elems total on page
#define MAX_ELEM_THERMAL_SETTINGS_RAM MAX_ELEM_THERMAL_SETTINGS // # Elems in RAM

#define MAX_ELEM_LOG_SAVE_LOAD 13 // # Elems total on page
#define MAX_ELEM_LOG_SAVE_LOAD_RAM MAX_ELEM_LOG_SAVE_LOAD // # Elems in RAM

#define MAX_ELEM_CONFIRM_DELETE 6 // # Elems total on page
#define MAX_ELEM_CONFIRM_DELETE_RAM MAX_ELEM_CONFIRM_DELETE // # Elems in RAM
//<ElementDefines !End!>

// ------------------------------------------------
// Create element storage
// ------------------------------------------------
gslc_tsGui                      m_gui;
gslc_tsDriver                   m_drv;
gslc_tsFont                     m_asFont[MAX_FONT];
gslc_tsPage                     m_asPage[MAX_PAGE];

//<GUI_Extra_Elements !Start!>
gslc_tsElem                     m_asBasePage1Elem[MAX_ELEM_PG_BASE_RAM];
gslc_tsElemRef                  m_asBasePage1ElemRef[MAX_ELEM_PG_BASE];
gslc_tsElem                     m_asPage1Elem[MAX_ELEM_PG_ScreenSaver_RAM];
gslc_tsElemRef                  m_asPage1ElemRef[MAX_ELEM_PG_ScreenSaver];
gslc_tsElem                     m_asPage2Elem[MAX_ELEM_PG_Home_RAM];
gslc_tsElemRef                  m_asPage2ElemRef[MAX_ELEM_PG_Home];
gslc_tsElem                     m_asPage3Elem[MAX_ELEM_PG_Pressure_RAM];
gslc_tsElemRef                  m_asPage3ElemRef[MAX_ELEM_PG_Pressure];
gslc_tsElem                     m_asPage4Elem[MAX_ELEM_PG_Temp_RAM];
gslc_tsElemRef                  m_asPage4ElemRef[MAX_ELEM_PG_Temp];
gslc_tsElem                     m_asPage5Elem[MAX_ELEM_PG_Thermal_RAM];
gslc_tsElemRef                  m_asPage5ElemRef[MAX_ELEM_PG_Thermal];
gslc_tsElem                     m_asPage6Elem[MAX_ELEM_PG_Log_RAM];
gslc_tsElemRef                  m_asPage6ElemRef[MAX_ELEM_PG_Log];
gslc_tsElem                     m_asPopup1Elem[MAX_ELEM_THERMAL_SETTINGS_RAM];
gslc_tsElemRef                  m_asPopup1ElemRef[MAX_ELEM_THERMAL_SETTINGS];
gslc_tsElem                     m_asPopup2Elem[MAX_ELEM_LOG_SAVE_LOAD_RAM];
gslc_tsElemRef                  m_asPopup2ElemRef[MAX_ELEM_LOG_SAVE_LOAD];
gslc_tsElem                     m_asPopup3Elem[MAX_ELEM_CONFIRM_DELETE_RAM];
gslc_tsElemRef                  m_asPopup3ElemRef[MAX_ELEM_CONFIRM_DELETE];
gslc_tsElem                     m_asKeypadNumElem[1];
gslc_tsElemRef                  m_asKeypadNumElemRef[1];
gslc_tsXKeyPad                  m_sKeyPadNum;
gslc_tsXRingGauge               m_sXRingGauge1;
gslc_tsXRingGauge               m_sXRingGauge2;
gslc_tsXTogglebtn               m_asXToggle1;
gslc_tsXSlider                  m_sXSlider2;
gslc_tsXSlider                  m_sXSlider1;
gslc_tsXListbox                 m_sListbox1;
// - Note that XLISTBOX_BUF_OH_R is extra required per item
char                            m_acListboxBuf1[68 + XLISTBOX_BUF_OH_R];
gslc_tsXSlider                  m_sListScroll1;
gslc_tsXListbox                 m_sListbox2;
// - Note that XLISTBOX_BUF_OH_R is extra required per item
char                            m_acListboxBuf2[36 + XLISTBOX_BUF_OH_R];
gslc_tsXSlider                  m_sListScroll2;
gslc_tsXListbox                 m_sListbox4;
// - Note that XLISTBOX_BUF_OH_R is extra required per item
char                            m_acListboxBuf4[75 + XLISTBOX_BUF_OH_R];
gslc_tsXSlider                  m_sListScroll4;
gslc_tsXProgress                m_sXBarGauge1;

#define MAX_STR                 100

//<GUI_Extra_Elements !End!>

// ------------------------------------------------
// Program Globals
// ------------------------------------------------

// Element References for direct access
//<Extern_References !Start!>
extern gslc_tsElemRef* ambTempTxt;
extern gslc_tsElemRef* autoBtn;
extern gslc_tsElemRef* autoScaleScrl;
extern gslc_tsElemRef* autoScaleTxt;
extern gslc_tsElemRef* avFrontTxt;
extern gslc_tsElemRef* avLeftTxt;
extern gslc_tsElemRef* avRearTxt;
extern gslc_tsElemRef* avRightTxt;
extern gslc_tsElemRef* backspaceBtn;
extern gslc_tsElemRef* colorBackBtn;
extern gslc_tsElemRef* colorList;
extern gslc_tsElemRef* colorListScrl;
extern gslc_tsElemRef* colorSelectBtn;
extern gslc_tsElemRef* cursorBtn;
extern gslc_tsElemRef* cursorOnTxt;
extern gslc_tsElemRef* cursorTxt;
extern gslc_tsElemRef* dataTxt_1;
extern gslc_tsElemRef* dataTxt_10;
extern gslc_tsElemRef* dataTxt_11;
extern gslc_tsElemRef* dataTxt_12;
extern gslc_tsElemRef* dataTxt_2;
extern gslc_tsElemRef* dataTxt_3;
extern gslc_tsElemRef* dataTxt_4;
extern gslc_tsElemRef* dataTxt_5;
extern gslc_tsElemRef* dataTxt_6;
extern gslc_tsElemRef* dataTxt_7;
extern gslc_tsElemRef* dataTxt_8;
extern gslc_tsElemRef* dataTxt_9;
extern gslc_tsElemRef* dateTimeTxt;
extern gslc_tsElemRef* dateTxt;
extern gslc_tsElemRef* defaultBtn;
extern gslc_tsElemRef* deleteBtn;
extern gslc_tsElemRef* deltaFLTxt;
extern gslc_tsElemRef* deltaFRTxt;
extern gslc_tsElemRef* deltaRLTxt;
extern gslc_tsElemRef* deltaRRTxt;
extern gslc_tsElemRef* frontLeft;
extern gslc_tsElemRef* frontRight;
extern gslc_tsElemRef* homeBtn;
extern gslc_tsElemRef* logAmbTxt;
extern gslc_tsElemRef* logBackBtn;
extern gslc_tsElemRef* logDeleteNo;
extern gslc_tsElemRef* logDeleteYes;
extern gslc_tsElemRef* logList;
extern gslc_tsElemRef* logLoadBtn;
extern gslc_tsElemRef* logNameDateTxt;
extern gslc_tsElemRef* logSaveBtn;
extern gslc_tsElemRef* logScrl;
extern gslc_tsElemRef* logTempTxt;
extern gslc_tsElemRef* logTrackTxt;
extern gslc_tsElemRef* maxTempBtn;
extern gslc_tsElemRef* minTempBtn;
extern gslc_tsElemRef* okBtn;
extern gslc_tsElemRef* pgLogBtn;
extern gslc_tsElemRef* pgPressBtn;
extern gslc_tsElemRef* pgTempBtn;
extern gslc_tsElemRef* pgThermalBtn;
extern gslc_tsElemRef* pressGauge;
extern gslc_tsElemRef* pressPauseBtn;
extern gslc_tsElemRef* profileList;
extern gslc_tsElemRef* profileScrl;
extern gslc_tsElemRef* rearLeft;
extern gslc_tsElemRef* rearRight;
extern gslc_tsElemRef* resSCRL;
extern gslc_tsElemRef* resTxt;
extern gslc_tsElemRef* saveLoadBtn;
extern gslc_tsElemRef* saveLoadProgBox;
extern gslc_tsElemRef* saveLoadProgress;
extern gslc_tsElemRef* tempGauge;
extern gslc_tsElemRef* tempPauseBtn;
extern gslc_tsElemRef* thermalPauseBtn;
extern gslc_tsElemRef* thermalSettBtn;
extern gslc_tsElemRef* timeTxt;
extern gslc_tsElemRef* trackTempBtn;
extern gslc_tsElemRef* trackTempTxt;
extern gslc_tsElemRef* wakeBtn;
extern gslc_tsElemRef* m_pElemKeyPadNum;
//<Extern_References !End!>

// Define debug message function
static int16_t DebugOut(char ch);

// ------------------------------------------------
// Callback Methods
// ------------------------------------------------
bool CbBtnCommon(void* pvGui,void *pvElemRef,gslc_teTouch eTouch,int16_t nX,int16_t nY);
bool CbCheckbox(void* pvGui, void* pvElemRef, int16_t nSelId, bool bState);
bool CbDrawScanner(void* pvGui,void* pvElemRef,gslc_teRedrawType eRedraw);
bool CbKeypad(void* pvGui, void *pvElemRef, int16_t nState, void* pvData);
bool CbListbox(void* pvGui, void* pvElemRef, int16_t nSelId);
bool CbSlidePos(void* pvGui,void* pvElemRef,int16_t nPos);
bool CbSpinner(void* pvGui, void *pvElemRef, int16_t nState, void* pvData);
bool CbTickScanner(void* pvGui,void* pvScope);

// ------------------------------------------------
// Create page elements
// ------------------------------------------------
void InitGUIslice_gen()
{
  gslc_tsElemRef* pElemRef = NULL;

  if (!gslc_Init(&m_gui,&m_drv,m_asPage,MAX_PAGE,m_asFont,MAX_FONT)) { return; }

  // ------------------------------------------------
  // Load Fonts
  // ------------------------------------------------
//<Load_Fonts !Start!>
    if (!gslc_FontSet(&m_gui,E_BUILTIN5X8,GSLC_FONTREF_PTR,NULL,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_DOSIS_BOLD14,GSLC_FONTREF_PTR,&dosis_bold14pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_DOSIS_BOOK8,GSLC_FONTREF_PTR,&dosis_book8pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_FREESANS24,GSLC_FONTREF_PTR,&FreeSans24pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_FREESANS9,GSLC_FONTREF_PTR,&FreeSans9pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_FREESANSBOLDOBLIQUE12,GSLC_FONTREF_PTR,&FreeSansBoldOblique12pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_FREESANSBOLDOBLIQUE9,GSLC_FONTREF_PTR,&FreeSansBoldOblique9pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_NOTOSANS8,GSLC_FONTREF_PTR,&NotoSans8pt7b,1)) { return; }
//<Load_Fonts !End!>

//<InitGUI !Start!>
  gslc_PageAdd(&m_gui,E_PG_BASE,m_asBasePage1Elem,MAX_ELEM_PG_BASE_RAM,m_asBasePage1ElemRef,MAX_ELEM_PG_BASE);
  gslc_PageAdd(&m_gui,PG_ScreenSaver,m_asPage1Elem,MAX_ELEM_PG_ScreenSaver_RAM,m_asPage1ElemRef,MAX_ELEM_PG_ScreenSaver);
  gslc_PageAdd(&m_gui,PG_Home,m_asPage2Elem,MAX_ELEM_PG_Home_RAM,m_asPage2ElemRef,MAX_ELEM_PG_Home);
  gslc_PageAdd(&m_gui,PG_Pressure,m_asPage3Elem,MAX_ELEM_PG_Pressure_RAM,m_asPage3ElemRef,MAX_ELEM_PG_Pressure);
  gslc_PageAdd(&m_gui,PG_Temp,m_asPage4Elem,MAX_ELEM_PG_Temp_RAM,m_asPage4ElemRef,MAX_ELEM_PG_Temp);
  gslc_PageAdd(&m_gui,PG_Thermal,m_asPage5Elem,MAX_ELEM_PG_Thermal_RAM,m_asPage5ElemRef,MAX_ELEM_PG_Thermal);
  gslc_PageAdd(&m_gui,PG_Log,m_asPage6Elem,MAX_ELEM_PG_Log_RAM,m_asPage6ElemRef,MAX_ELEM_PG_Log);
  gslc_PageAdd(&m_gui,THERMAL_SETTINGS,m_asPopup1Elem,MAX_ELEM_THERMAL_SETTINGS_RAM,m_asPopup1ElemRef,MAX_ELEM_THERMAL_SETTINGS);
  gslc_PageAdd(&m_gui,LOG_SAVE_LOAD,m_asPopup2Elem,MAX_ELEM_LOG_SAVE_LOAD_RAM,m_asPopup2ElemRef,MAX_ELEM_LOG_SAVE_LOAD);
  gslc_PageAdd(&m_gui,CONFIRM_DELETE,m_asPopup3Elem,MAX_ELEM_CONFIRM_DELETE_RAM,m_asPopup3ElemRef,MAX_ELEM_CONFIRM_DELETE);
  gslc_PageAdd(&m_gui,E_POP_KEYPAD_NUM,m_asKeypadNumElem,1,m_asKeypadNumElemRef,1);  // KeyPad

  // Now mark E_PG_BASE as a "base" page which means that it's elements
  // are always visible. This is useful for common page elements.
  gslc_SetPageBase(&m_gui, E_PG_BASE);


  // NOTE: The current page defaults to the first page added. Here we explicitly
  //       ensure that the main page is the correct page no matter the add order.
  gslc_SetPageCur(&m_gui,PG_ScreenSaver);
  
  // Set Background to a flat color
  gslc_SetBkgndColor(&m_gui,((gslc_tsColor){27,27,27}));

  // -----------------------------------
  // PAGE: E_PG_BASE
  
  
  // Create AMB_TEMP_TXT runtime modifiable text
  static char m_sDisplayText1[14] = "Amb temp:--'C";
  pElemRef = gslc_ElemCreateTxt(&m_gui,AMB_TEMP_TXT,E_PG_BASE,(gslc_tsRect){3,0,79,10},
    (char*)m_sDisplayText1,14,E_BUILTIN5X8);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  ambTempTxt = pElemRef;
  
  // Create TRACK_TEMP_TXT runtime modifiable text
  static char m_sDisplayText38[16] = "Track temp:--'C";
  pElemRef = gslc_ElemCreateTxt(&m_gui,TRACK_TEMP_TXT,E_PG_BASE,(gslc_tsRect){90,0,91,10},
    (char*)m_sDisplayText38,16,E_BUILTIN5X8);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  trackTempTxt = pElemRef;
  
  // Create DATE_TIME_TXT runtime modifiable text
  static char m_sDisplayText2[23] = "";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATE_TIME_TXT,E_PG_BASE,(gslc_tsRect){185,0,133,10},
    (char*)m_sDisplayText2,23,E_BUILTIN5X8);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_RIGHT);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  dateTimeTxt = pElemRef;
 
  // Create HOME_BTN using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,HOME_BTN,E_PG_BASE,(gslc_tsRect){10,10,40,40},
    gslc_GetImageFromSD((const char*)IMG_HOMEINACTIVE,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),GSLC_COL_WHITE,GSLC_COL_WHITE);
  homeBtn = pElemRef;

  // -----------------------------------
  // PAGE: PG_ScreenSaver
  
  
  // create WAKE_BTN button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,WAKE_BTN,PG_ScreenSaver,
    (gslc_tsRect){0,0,320,240},(char*)" ",0,E_BUILTIN5X8,&CbBtnCommon);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_BLACK,GSLC_COL_BLACK);
  wakeBtn = pElemRef;
  
  // Create TIME_TXT runtime modifiable text
  static char m_sDisplayText4[6] = "20:54";
  pElemRef = gslc_ElemCreateTxt(&m_gui,TIME_TXT,PG_ScreenSaver,(gslc_tsRect){96,90,128,37},
    (char*)m_sDisplayText4,6,E_FREESANS24);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_GRAY_LT2);
  timeTxt = pElemRef;
  
  // Create DATE_TXT runtime modifiable text
  static char m_sDisplayText5[17] = "Sat, 25/12/2021";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATE_TXT,PG_ScreenSaver,(gslc_tsRect){110,130,96,14},
    (char*)m_sDisplayText5,17,E_NOTOSANS8);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_GRAY_LT2);
  dateTxt = pElemRef;

  // -----------------------------------
  // PAGE: PG_Home
  
   
  // Create E_ELEM_BOX7 box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_ELEM_BOX7,PG_Home,(gslc_tsRect){10,10,40,40});
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),((gslc_tsColor){27,27,27}),((gslc_tsColor){27,27,27}));
  
  // Create E_ELEM_TEXT6 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT6,PG_Home,(gslc_tsRect){102,30,116,23},
    (char*)"TIRE TOOL",0,E_DOSIS_BOLD14);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);

  // Create E_DRAW_LINE1 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE1,PG_Home,70,55,250,55);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,((gslc_tsColor){220,115,0}),((gslc_tsColor){220,115,0}));
  
  // Create E_ELEM_TEXT7 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT7,PG_Home,(gslc_tsRect){87,60,145,10},
    (char*)"By Wilkinson Engineering",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT8 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT8,PG_Home,(gslc_tsRect){80,90,167,16},
    (char*)"SELECT FUNCTION",0,E_FREESANS9);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT42 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT42,PG_Home,(gslc_tsRect){15,190,50,10},
    (char*)"Pressure",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_GRAY_LT1);
  
  // Create E_ELEM_TEXT44 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT44,PG_Home,(gslc_tsRect){88,190,68,10},
    (char*)"Temperature",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_GRAY_LT1);
  
  // Create E_ELEM_TEXT45 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT45,PG_Home,(gslc_tsRect){180,190,44,10},
    (char*)"Thermal",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_GRAY_LT1);
  
  // Create E_ELEM_TEXT46 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT46,PG_Home,(gslc_tsRect){255,190,49,10},
    (char*)"Data Log",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_GRAY_LT1);
 
  // Create PG_PRESS_BTN using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,PG_PRESS_BTN,PG_Home,(gslc_tsRect){10,130,60,60},
    gslc_GetImageFromSD((const char*)IMG_PRESS,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),GSLC_COL_WHITE,GSLC_COL_WHITE);
  pgPressBtn = pElemRef;
 
  // Create PG_TEMP_BTN using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,PG_TEMP_BTN,PG_Home,(gslc_tsRect){90,130,60,60},
    gslc_GetImageFromSD((const char*)IMG_TEMP,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),GSLC_COL_WHITE,GSLC_COL_WHITE);
  pgTempBtn = pElemRef;
 
  // Create PG_THERMAL_BTN using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,PG_THERMAL_BTN,PG_Home,(gslc_tsRect){170,130,60,60},
    gslc_GetImageFromSD((const char*)IMG_THERMAL,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),GSLC_COL_WHITE,GSLC_COL_WHITE);
  pgThermalBtn = pElemRef;
 
  // Create PG_LOG_BTN using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,PG_LOG_BTN,PG_Home,(gslc_tsRect){250,130,60,60},
    gslc_GetImageFromSD((const char*)IMG_LOG,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),GSLC_COL_WHITE,GSLC_COL_WHITE);
  pgLogBtn = pElemRef;

  // -----------------------------------
  // PAGE: PG_Pressure
  
   
  // Create PRESS_PAUSE_BTN box
  pElemRef = gslc_ElemCreateBox(&m_gui,PRESS_PAUSE_BTN,PG_Pressure,(gslc_tsRect){10,100,40,40});
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  // Set the callback function to handle all drawing for the element
  gslc_ElemSetDrawFunc(&m_gui,pElemRef,&CbDrawScanner);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),((gslc_tsColor){27,27,27}),((gslc_tsColor){27,27,27}));
  pressPauseBtn = pElemRef;
 
  // Create E_ELEM_IMAGE1 using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,E_ELEM_IMAGE1,PG_Pressure,(gslc_tsRect){80,25,220,220},
    gslc_GetImageFromSD((const char*)IMG_GAUGEV3_220X220,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_TEXT9 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT9,PG_Pressure,(gslc_tsRect){150,175,80,16},
    (char*)"Pressure",0,E_FREESANSBOLDOBLIQUE9);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_CYAN);
  
  // Create E_ELEM_TEXT10 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT10,PG_Pressure,(gslc_tsRect){180,195,20,10},
    (char*)"BAR",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_CYAN);

  // Create ring gauge PRESS_GAUGE 
  static char m_sRingText1[7] = "";
  pElemRef = gslc_ElemXRingGaugeCreate(&m_gui,PRESS_GAUGE,PG_Pressure,&m_sXRingGauge1,
          (gslc_tsRect){127,72,126,126},
          (char*)m_sRingText1,7,E_FREESANSBOLDOBLIQUE12);
  gslc_ElemXRingGaugeSetValRange(&m_gui, pElemRef, 0, 400);
  gslc_ElemXRingGaugeSetVal(&m_gui, pElemRef, 0); // Set initial value
  gslc_ElemXRingGaugeSetThickness(&m_gui,pElemRef, 17);
  gslc_ElemXRingGaugeSetAngleRange(&m_gui,pElemRef, 240, 240, true);
  gslc_ElemXRingGaugeSetColorActiveGradient(&m_gui, pElemRef, GSLC_COL_CYAN, GSLC_COL_MAGENTA);
  gslc_ElemXRingGaugeSetColorInactive(&m_gui,pElemRef, ((gslc_tsColor){55,69,72}));
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  pressGauge = pElemRef;

  // -----------------------------------
  // PAGE: PG_Temp
  
   
  // Create TEMP_PAUSE_BTN box
  pElemRef = gslc_ElemCreateBox(&m_gui,TEMP_PAUSE_BTN,PG_Temp,(gslc_tsRect){10,100,40,40});
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  // Set the callback function to handle all drawing for the element
  gslc_ElemSetDrawFunc(&m_gui,pElemRef,&CbDrawScanner);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),((gslc_tsColor){27,27,27}),((gslc_tsColor){27,27,27}));
  tempPauseBtn = pElemRef;
 
  // Create E_ELEM_IMAGE2 using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,E_ELEM_IMAGE2,PG_Temp,(gslc_tsRect){80,25,220,220},
    gslc_GetImageFromSD((const char*)IMG_TEMPGAUGEV1_220X220,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_TEXT11 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT11,PG_Temp,(gslc_tsRect){152,175,73,24},
    (char*)"Temp 'C",0,E_FREESANSBOLDOBLIQUE9);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,((gslc_tsColor){220,115,0}));

  // Create ring gauge TEMP_GAUGE 
  static char m_sRingText2[7] = "";
  pElemRef = gslc_ElemXRingGaugeCreate(&m_gui,TEMP_GAUGE,PG_Temp,&m_sXRingGauge2,
          (gslc_tsRect){121,67,132,132},
          (char*)m_sRingText2,7,E_FREESANSBOLDOBLIQUE9);
  gslc_ElemXRingGaugeSetValRange(&m_gui, pElemRef, 10, 110);
  gslc_ElemXRingGaugeSetVal(&m_gui, pElemRef, 75); // Set initial value
  gslc_ElemXRingGaugeSetThickness(&m_gui,pElemRef, 17);
  gslc_ElemXRingGaugeSetAngleRange(&m_gui,pElemRef, 240, 240, true);
  gslc_ElemXRingGaugeSetColorActiveGradient(&m_gui, pElemRef, GSLC_COL_RED_DK1, GSLC_COL_YELLOW);
  gslc_ElemXRingGaugeSetColorInactive(&m_gui,pElemRef, ((gslc_tsColor){51,51,51}));
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  tempGauge = pElemRef;

  // -----------------------------------
  // PAGE: PG_Thermal
  
   
  // Create E_ELEM_BOX2 box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_ELEM_BOX2,PG_Thermal,(gslc_tsRect){58,18,256,184});
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_GRAY_LT3,GSLC_COL_BLACK);
   
  // Create AUTO_BTN box
  pElemRef = gslc_ElemCreateBox(&m_gui,AUTO_BTN,PG_Thermal,(gslc_tsRect){10,55,40,40});
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  // Set the callback function to handle all drawing for the element
  gslc_ElemSetDrawFunc(&m_gui,pElemRef,&CbDrawScanner);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),((gslc_tsColor){27,27,27}),((gslc_tsColor){27,27,27}));
  autoBtn = pElemRef;
   
  // Create THERMAL_PAUSE_BTN box
  pElemRef = gslc_ElemCreateBox(&m_gui,THERMAL_PAUSE_BTN,PG_Thermal,(gslc_tsRect){10,100,40,40});
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  // Set the callback function to handle all drawing for the element
  gslc_ElemSetDrawFunc(&m_gui,pElemRef,&CbDrawScanner);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),((gslc_tsColor){27,27,27}),((gslc_tsColor){27,27,27}));
  thermalPauseBtn = pElemRef;
  
  // Create CURSOR_TXT runtime modifiable text
  static char m_sDisplayText49[6] = "00.00";
  pElemRef = gslc_ElemCreateTxt(&m_gui,CURSOR_TXT,PG_Thermal,(gslc_tsRect){171,125,31,10},
    (char*)m_sDisplayText49,6,E_BUILTIN5X8);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  cursorTxt = pElemRef;
  
  // Create MIN_TEMP_BTN numeric input field
  static char m_sInputNumber1[4] = "25";
  pElemRef = gslc_ElemCreateTxt(&m_gui,MIN_TEMP_BTN,PG_Thermal,(gslc_tsRect){70,210,31,20},
    (char*)m_sInputNumber1,4,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY_DK3,GSLC_COL_GRAY_DK3,GSLC_COL_BLACK);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  minTempBtn = pElemRef;
   
  // Create DEFAULT_BTN box
  pElemRef = gslc_ElemCreateBox(&m_gui,DEFAULT_BTN,PG_Thermal,(gslc_tsRect){110,208,154,24});
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  // Set the callback function to handle all drawing for the element
  gslc_ElemSetDrawFunc(&m_gui,pElemRef,&CbDrawScanner);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_WHITE,GSLC_COL_BLACK);
  defaultBtn = pElemRef;
  
  // Create MAX_TEMP_BTN numeric input field
  static char m_sInputNumber2[4] = "35";
  pElemRef = gslc_ElemCreateTxt(&m_gui,MAX_TEMP_BTN,PG_Thermal,(gslc_tsRect){275,210,31,20},
    (char*)m_sInputNumber2,4,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY_DK3,GSLC_COL_GRAY_DK3,GSLC_COL_BLACK);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  maxTempBtn = pElemRef;
 
  // Create THERMAL_SETT_BTN using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,THERMAL_SETT_BTN,PG_Thermal,(gslc_tsRect){10,145,40,40},
    gslc_GetImageFromSD((const char*)IMG_SETTINGS,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),GSLC_COL_WHITE,GSLC_COL_WHITE);
  thermalSettBtn = pElemRef;
 
  // Create TRACK_TEMP_BTN using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,TRACK_TEMP_BTN,PG_Thermal,(gslc_tsRect){10,190,40,40},
    gslc_GetImageFromSD((const char*)IMG_TRACK,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),GSLC_COL_WHITE,GSLC_COL_WHITE);
  trackTempBtn = pElemRef;

  // -----------------------------------
  // PAGE: PG_Log
  
 
  // Create E_ELEM_IMAGE18 using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,E_ELEM_IMAGE18,PG_Log,(gslc_tsRect){105,20,160,230},
    gslc_GetImageFromSD((const char*)IMG_BACKGROUNDV2,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create LOG_NAME_DATE_TXT runtime modifiable text
  static char m_sDisplayText63[37] = "";
  pElemRef = gslc_ElemCreateTxt(&m_gui,LOG_NAME_DATE_TXT,PG_Log,(gslc_tsRect){77,12,217,10},
    (char*)m_sDisplayText63,37,E_BUILTIN5X8);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_RIGHT);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_CYAN);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  logNameDateTxt = pElemRef;
  
  // Create LOG_AMB_TXT runtime modifiable text
  static char m_sDisplayText61[16] = "";
  pElemRef = gslc_ElemCreateTxt(&m_gui,LOG_AMB_TXT,PG_Log,(gslc_tsRect){90,24,91,10},
    (char*)m_sDisplayText61,16,E_BUILTIN5X8);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_CYAN);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  logAmbTxt = pElemRef;
  
  // Create LOG_TRACK_TXT runtime modifiable text
  static char m_sDisplayText62[16] = "";
  pElemRef = gslc_ElemCreateTxt(&m_gui,LOG_TRACK_TXT,PG_Log,(gslc_tsRect){190,24,91,10},
    (char*)m_sDisplayText62,16,E_BUILTIN5X8);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_CYAN);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_CYAN,((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  logTrackTxt = pElemRef;
  
  // Create DATA_TXT_1 runtime modifiable text
  static char m_sDisplayText12[7] = "---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATA_TXT_1,PG_Log,(gslc_tsRect){55,35,55,15},
    (char*)m_sDisplayText12,7,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_RIGHT);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_ORANGE);
  dataTxt_1 = pElemRef;
  
  // Create DATA_TXT_2 runtime modifiable text
  static char m_sDisplayText13[7] = "---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATA_TXT_2,PG_Log,(gslc_tsRect){55,58,55,15},
    (char*)m_sDisplayText13,7,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_RIGHT);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_ORANGE);
  dataTxt_2 = pElemRef;
  
  // Create DATA_TXT_3 runtime modifiable text
  static char m_sDisplayText14[7] = "---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATA_TXT_3,PG_Log,(gslc_tsRect){55,80,55,15},
    (char*)m_sDisplayText14,7,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_RIGHT);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_ORANGE);
  dataTxt_3 = pElemRef;
   
  // Create FRONT_LEFT box
  pElemRef = gslc_ElemCreateBox(&m_gui,FRONT_LEFT,PG_Log,(gslc_tsRect){120,40,30,50});
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  // Set the callback function to handle all drawing for the element
  gslc_ElemSetDrawFunc(&m_gui,pElemRef,&CbDrawScanner);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY_LT3,((gslc_tsColor){27,27,27}),((gslc_tsColor){210,85,0}));
  frontLeft = pElemRef;
  
  // Create AV_FRONT_TXT runtime modifiable text
  static char m_sDisplayText28[8] = "&---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,AV_FRONT_TXT,PG_Log,(gslc_tsRect){151,55,70,18},
    (char*)m_sDisplayText28,8,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_ORANGE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  avFrontTxt = pElemRef;
   
  // Create FRONT_RIGHT box
  pElemRef = gslc_ElemCreateBox(&m_gui,FRONT_RIGHT,PG_Log,(gslc_tsRect){220,40,30,50});
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  // Set the callback function to handle all drawing for the element
  gslc_ElemSetDrawFunc(&m_gui,pElemRef,&CbDrawScanner);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY_LT3,((gslc_tsColor){27,27,27}),((gslc_tsColor){210,85,0}));
  frontRight = pElemRef;
  
  // Create DATA_TXT_10 runtime modifiable text
  static char m_sDisplayText18[7] = "---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATA_TXT_10,PG_Log,(gslc_tsRect){260,35,55,15},
    (char*)m_sDisplayText18,7,E_FREESANS9);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_ORANGE);
  dataTxt_10 = pElemRef;
  
  // Create DATA_TXT_11 runtime modifiable text
  static char m_sDisplayText19[7] = "---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATA_TXT_11,PG_Log,(gslc_tsRect){260,58,55,15},
    (char*)m_sDisplayText19,7,E_FREESANS9);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_ORANGE);
  dataTxt_11 = pElemRef;
  
  // Create DATA_TXT_12 runtime modifiable text
  static char m_sDisplayText20[7] = "---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATA_TXT_12,PG_Log,(gslc_tsRect){260,80,55,15},
    (char*)m_sDisplayText20,7,E_FREESANS9);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_ORANGE);
  dataTxt_12 = pElemRef;
  
  // Create DELTA_FL_TXT runtime modifiable text
  static char m_sDisplayText71[8] = "$---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DELTA_FL_TXT,PG_Log,(gslc_tsRect){50,100,70,15},
    (char*)m_sDisplayText71,8,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_GREEN_DK2);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  deltaFLTxt = pElemRef;
  
  // Create AV_LEFT_TXT runtime modifiable text
  static char m_sDisplayText32[8] = "&---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,AV_LEFT_TXT,PG_Log,(gslc_tsRect){50,122,70,15},
    (char*)m_sDisplayText32,8,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_ORANGE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  avLeftTxt = pElemRef;
  
  // Create DELTA_RL_TXT runtime modifiable text
  static char m_sDisplayText72[8] = "$---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DELTA_RL_TXT,PG_Log,(gslc_tsRect){50,142,70,15},
    (char*)m_sDisplayText72,8,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_GREEN_DK2);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  deltaRLTxt = pElemRef;
  
  // Create E_ELEM_TEXT35 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT35,PG_Log,(gslc_tsRect){155,108,61,10},
    (char*)"Probe temp",0,E_BUILTIN5X8);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  
  // Create E_ELEM_TEXT70 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT70,PG_Log,(gslc_tsRect){148,127,73,10},
    (char*)"Sensor fault",0,E_BUILTIN5X8);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_RIGHT);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_RED,GSLC_COL_RED,GSLC_COL_BLACK);
  
  // Create LOG_TEMP_TXT runtime modifiable text
  static char m_sDisplayText69[8] = "";
  pElemRef = gslc_ElemCreateTxt(&m_gui,LOG_TEMP_TXT,PG_Log,(gslc_tsRect){132,125,107,25},
    (char*)m_sDisplayText69,8,E_FREESANSBOLDOBLIQUE12);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){164,71,0}),((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  logTempTxt = pElemRef;
  
  // Create DELTA_FR_TXT runtime modifiable text
  static char m_sDisplayText73[8] = "$---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DELTA_FR_TXT,PG_Log,(gslc_tsRect){250,100,70,15},
    (char*)m_sDisplayText73,8,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_GREEN_DK2);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  deltaFRTxt = pElemRef;
  
  // Create AV_RIGHT_TXT runtime modifiable text
  static char m_sDisplayText34[8] = "&---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,AV_RIGHT_TXT,PG_Log,(gslc_tsRect){250,122,70,15},
    (char*)m_sDisplayText34,8,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_ORANGE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  avRightTxt = pElemRef;
  
  // Create DELTA_RR_TXT runtime modifiable text
  static char m_sDisplayText74[8] = "$---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DELTA_RR_TXT,PG_Log,(gslc_tsRect){250,142,70,15},
    (char*)m_sDisplayText74,8,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_GREEN_DK2);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  deltaRRTxt = pElemRef;
  
  // Create DATA_TXT_4 runtime modifiable text
  static char m_sDisplayText15[7] = "---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATA_TXT_4,PG_Log,(gslc_tsRect){55,165,55,15},
    (char*)m_sDisplayText15,7,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_RIGHT);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_ORANGE);
  dataTxt_4 = pElemRef;
  
  // Create DATA_TXT_5 runtime modifiable text
  static char m_sDisplayText16[7] = "---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATA_TXT_5,PG_Log,(gslc_tsRect){55,188,55,15},
    (char*)m_sDisplayText16,7,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_RIGHT);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_ORANGE);
  dataTxt_5 = pElemRef;
  
  // Create DATA_TXT_6 runtime modifiable text
  static char m_sDisplayText17[7] = "---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATA_TXT_6,PG_Log,(gslc_tsRect){55,210,55,15},
    (char*)m_sDisplayText17,7,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_RIGHT);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_ORANGE);
  dataTxt_6 = pElemRef;
   
  // Create REAR_LEFT box
  pElemRef = gslc_ElemCreateBox(&m_gui,REAR_LEFT,PG_Log,(gslc_tsRect){120,170,30,50});
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  // Set the callback function to handle all drawing for the element
  gslc_ElemSetDrawFunc(&m_gui,pElemRef,&CbDrawScanner);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY_LT3,((gslc_tsColor){27,27,27}),((gslc_tsColor){210,85,0}));
  rearLeft = pElemRef;
  
  // Create AV_REAR_TXT runtime modifiable text
  static char m_sDisplayText30[8] = "&---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,AV_REAR_TXT,PG_Log,(gslc_tsRect){151,188,70,18},
    (char*)m_sDisplayText30,8,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_ORANGE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_BLACK);
  avRearTxt = pElemRef;
   
  // Create REAR_RIGHT box
  pElemRef = gslc_ElemCreateBox(&m_gui,REAR_RIGHT,PG_Log,(gslc_tsRect){220,170,30,50});
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  // Set the callback function to handle all drawing for the element
  gslc_ElemSetDrawFunc(&m_gui,pElemRef,&CbDrawScanner);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY_LT3,((gslc_tsColor){27,27,27}),((gslc_tsColor){210,85,0}));
  rearRight = pElemRef;
  
  // Create DATA_TXT_7 runtime modifiable text
  static char m_sDisplayText21[7] = "---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATA_TXT_7,PG_Log,(gslc_tsRect){260,165,55,15},
    (char*)m_sDisplayText21,7,E_FREESANS9);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_ORANGE);
  dataTxt_7 = pElemRef;
  
  // Create DATA_TXT_8 runtime modifiable text
  static char m_sDisplayText22[7] = "---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATA_TXT_8,PG_Log,(gslc_tsRect){260,188,55,15},
    (char*)m_sDisplayText22,7,E_FREESANS9);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_ORANGE);
  dataTxt_8 = pElemRef;
  
  // Create DATA_TXT_9 runtime modifiable text
  static char m_sDisplayText23[7] = "---.--";
  pElemRef = gslc_ElemCreateTxt(&m_gui,DATA_TXT_9,PG_Log,(gslc_tsRect){260,210,55,15},
    (char*)m_sDisplayText23,7,E_FREESANS9);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_GRAY,((gslc_tsColor){27,27,27}),GSLC_COL_ORANGE);
  dataTxt_9 = pElemRef;
 
  // Create OK_BTN using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,OK_BTN,PG_Log,(gslc_tsRect){10,55,40,40},
    gslc_GetImageFromSD((const char*)IMG_OK,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),GSLC_COL_WHITE,GSLC_COL_WHITE);
  okBtn = pElemRef;
 
  // Create BACKSPACE_BTN using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,BACKSPACE_BTN,PG_Log,(gslc_tsRect){10,100,40,40},
    gslc_GetImageFromSD((const char*)IMG_BACKSPACE,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),GSLC_COL_WHITE,GSLC_COL_WHITE);
  backspaceBtn = pElemRef;
 
  // Create DELETE_BTN using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,DELETE_BTN,PG_Log,(gslc_tsRect){10,145,40,40},
    gslc_GetImageFromSD((const char*)IMG_TRASH,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),GSLC_COL_WHITE,GSLC_COL_WHITE);
  deleteBtn = pElemRef;
 
  // Create SAVE_LOAD_BTN using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,SAVE_LOAD_BTN,PG_Log,(gslc_tsRect){10,190,40,40},
    gslc_GetImageFromSD((const char*)IMG_SAVE,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetCol(&m_gui,pElemRef,((gslc_tsColor){27,27,27}),GSLC_COL_WHITE,GSLC_COL_WHITE);
  saveLoadBtn = pElemRef;

  // -----------------------------------
  // PAGE: THERMAL_SETTINGS
  
   
  // Create E_ELEM_BOX10 box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_ELEM_BOX10,THERMAL_SETTINGS,(gslc_tsRect){15,15,290,210});
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_BLACK,GSLC_COL_BLACK);
  
  // Create E_ELEM_TEXT51 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT51,THERMAL_SETTINGS,(gslc_tsRect){90,20,139,10},
    (char*)"Thermal camera settings",0,E_BUILTIN5X8);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT58 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT58,THERMAL_SETTINGS,(gslc_tsRect){20,35,57,15},
    (char*)"Cursor:",0,E_FREESANS9);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create CURSOR_ON_TXT runtime modifiable text
  static char m_sDisplayText59[4] = "On";
  pElemRef = gslc_ElemCreateTxt(&m_gui,CURSOR_ON_TXT,THERMAL_SETTINGS,(gslc_tsRect){180,35,30,15},
    (char*)m_sDisplayText59,4,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_RIGHT);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  cursorOnTxt = pElemRef;
  
  // Create toggle button CURSOR_BTN
  pElemRef = gslc_ElemXTogglebtnCreate(&m_gui,CURSOR_BTN,THERMAL_SETTINGS,&m_asXToggle1,
    (gslc_tsRect){240,35,35,16},GSLC_COL_ORANGE,GSLC_COL_BLACK,GSLC_COL_GRAY_LT3,
    true,true,&CbBtnCommon);
  cursorBtn = pElemRef;
  
  // Create E_ELEM_TEXT56 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT56,THERMAL_SETTINGS,(gslc_tsRect){20,60,88,15},
    (char*)"Resolution:",0,E_FREESANS9);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create RES_TXT runtime modifiable text
  static char m_sDisplayText57[8] = "Medium";
  pElemRef = gslc_ElemCreateTxt(&m_gui,RES_TXT,THERMAL_SETTINGS,(gslc_tsRect){140,56,70,23},
    (char*)m_sDisplayText57,8,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_RIGHT);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_BLACK,GSLC_COL_BLACK);
  resTxt = pElemRef;

  // Create slider RES_SCRL 
  pElemRef = gslc_ElemXSliderCreate(&m_gui,RES_SCRL,THERMAL_SETTINGS,&m_sXSlider2,
          (gslc_tsRect){220,60,70,20},0,2,1,5,false);
  gslc_ElemXSliderSetStyle(&m_gui,pElemRef,false,GSLC_COL_BLUE,0,5,GSLC_COL_BLACK);
  gslc_ElemXSliderSetPosFunc(&m_gui,pElemRef,&CbSlidePos);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_BLACK,GSLC_COL_ORANGE);
  resSCRL = pElemRef;
  
  // Create E_ELEM_TEXT53 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT53,THERMAL_SETTINGS,(gslc_tsRect){20,82,162,23},
    (char*)"Autoscale range: +/-",0,E_FREESANS9);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create AUTO_SCALE_TXT runtime modifiable text
  static char m_sDisplayText54[4] = "4";
  pElemRef = gslc_ElemCreateTxt(&m_gui,AUTO_SCALE_TXT,THERMAL_SETTINGS,(gslc_tsRect){180,86,30,15},
    (char*)m_sDisplayText54,4,E_FREESANS9);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_RIGHT);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  autoScaleTxt = pElemRef;

  // Create slider AUTO_SCALE_SCRL 
  pElemRef = gslc_ElemXSliderCreate(&m_gui,AUTO_SCALE_SCRL,THERMAL_SETTINGS,&m_sXSlider1,
          (gslc_tsRect){220,84,70,20},1,10,4,5,false);
  gslc_ElemXSliderSetStyle(&m_gui,pElemRef,false,GSLC_COL_BLUE,0,5,GSLC_COL_BLACK);
  gslc_ElemXSliderSetPosFunc(&m_gui,pElemRef,&CbSlidePos);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_BLACK,GSLC_COL_ORANGE);
  autoScaleScrl = pElemRef;
  
  // Create E_ELEM_TEXT47 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT47,THERMAL_SETTINGS,(gslc_tsRect){20,112,58,15},
    (char*)"Pallete:",0,E_FREESANS9);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_GRAY_LT3);
   
  // Create E_ELEM_BOX11 box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_ELEM_BOX11,THERMAL_SETTINGS,(gslc_tsRect){145,110,154,20});
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_WHITE,GSLC_COL_BLACK);
   
  // Create wrapping box for listbox COLOR_LIST and scrollbar
  pElemRef = gslc_ElemCreateBox(&m_gui,GSLC_ID_AUTO,THERMAL_SETTINGS,(gslc_tsRect){16,134,210,90});
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_BLACK,GSLC_COL_ORANGE);
  
  // Create listbox
  pElemRef = gslc_ElemXListboxCreate(&m_gui,COLOR_LIST,THERMAL_SETTINGS,&m_sListbox1,
    (gslc_tsRect){16+2,134+4,210-23,90-7},E_FREESANS9,
    (uint8_t*)&m_acListboxBuf1,sizeof(m_acListboxBuf1),0);
  gslc_ElemXListboxSetSize(&m_gui, pElemRef, 3, 1); // 3 rows, 1 columns
  gslc_ElemXListboxItemsSetSize(&m_gui, pElemRef, XLISTBOX_SIZE_AUTO, XLISTBOX_SIZE_AUTO);
  gslc_ElemSetTxtMarginXY(&m_gui, pElemRef, 5, 0);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_BLACK,GSLC_COL_ORANGE);
  gslc_ElemXListboxSetSelFunc(&m_gui, pElemRef, &CbListbox);
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "IRONBOW");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "RAINBOW");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "RAINBOW HC");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "ARCTIC");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "OUTDOOR ALERT");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "WHITE HOT");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "BLACK HOT");
  colorList = pElemRef;

  // Create vertical scrollbar for listbox
  pElemRef = gslc_ElemXSliderCreate(&m_gui,COLOR_LIST_SCRL,THERMAL_SETTINGS,&m_sListScroll1,
          (gslc_tsRect){16+210-21,134+4,20,90-8},0,12,0,5,true);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_BLACK,GSLC_COL_ORANGE);
  gslc_ElemXSliderSetPosFunc(&m_gui,pElemRef,&CbSlidePos);
  colorListScrl = pElemRef;
  
  // create COLOR_BACK_BTN button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,COLOR_BACK_BTN,THERMAL_SETTINGS,
    (gslc_tsRect){245,140,40,30},(char*)"Back",0,E_BUILTIN5X8,&CbBtnCommon);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_BLACK);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_GRAY_LT1,GSLC_COL_BLUE_DK1);
  colorBackBtn = pElemRef;
  
  // create COLOR_SELECT_BTN button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,COLOR_SELECT_BTN,THERMAL_SETTINGS,
    (gslc_tsRect){245,180,40,30},(char*)"OK",0,E_BUILTIN5X8,&CbBtnCommon);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_BLACK);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_GRAY_LT1,GSLC_COL_BLUE_DK1);
  colorSelectBtn = pElemRef;

  // -----------------------------------
  // PAGE: LOG_SAVE_LOAD
  
   
  // Create E_ELEM_BOX12 box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_ELEM_BOX12,LOG_SAVE_LOAD,(gslc_tsRect){15,15,290,210});
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_BLACK,GSLC_COL_BLACK);
  
  // Create E_ELEM_TEXT48 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT48,LOG_SAVE_LOAD,(gslc_tsRect){75,20,169,24},
    (char*)"Select profile and log",0,E_FREESANS9);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_GRAY_LT3);
   
  // Create wrapping box for listbox PROFILE_LIST and scrollbar
  pElemRef = gslc_ElemCreateBox(&m_gui,GSLC_ID_AUTO,LOG_SAVE_LOAD,(gslc_tsRect){30,45,120,120});
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_BLACK,GSLC_COL_ORANGE);
  
  // Create listbox
  pElemRef = gslc_ElemXListboxCreate(&m_gui,PROFILE_LIST,LOG_SAVE_LOAD,&m_sListbox2,
    (gslc_tsRect){30+2,45+4,120-23,120-7},E_FREESANS9,
    (uint8_t*)&m_acListboxBuf2,sizeof(m_acListboxBuf2),0);
  gslc_ElemXListboxSetSize(&m_gui, pElemRef, 5, 1); // 5 rows, 1 columns
  gslc_ElemXListboxItemsSetSize(&m_gui, pElemRef, XLISTBOX_SIZE_AUTO, XLISTBOX_SIZE_AUTO);
  gslc_ElemSetTxtMarginXY(&m_gui, pElemRef, 5, 0);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_BLACK,GSLC_COL_ORANGE);
  gslc_ElemXListboxSetSelFunc(&m_gui, pElemRef, &CbListbox);
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Car 1");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Car 2");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Car 3");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Car 4");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Car 5");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Car 6");
  profileList = pElemRef;

  // Create vertical scrollbar for listbox
  pElemRef = gslc_ElemXSliderCreate(&m_gui,PROFILE_SCRL,LOG_SAVE_LOAD,&m_sListScroll2,
          (gslc_tsRect){30+120-21,45+4,20,120-8},0,11,0,5,true);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_BLACK,GSLC_COL_ORANGE);
  gslc_ElemXSliderSetPosFunc(&m_gui,pElemRef,&CbSlidePos);
  profileScrl = pElemRef;
   
  // Create wrapping box for listbox LOG_LIST and scrollbar
  pElemRef = gslc_ElemCreateBox(&m_gui,GSLC_ID_AUTO,LOG_SAVE_LOAD,(gslc_tsRect){170,45,120,120});
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_BLACK,GSLC_COL_ORANGE);
  
  // Create listbox
  pElemRef = gslc_ElemXListboxCreate(&m_gui,LOG_LIST,LOG_SAVE_LOAD,&m_sListbox4,
    (gslc_tsRect){170+2,45+4,120-23,120-7},E_FREESANS9,
    (uint8_t*)&m_acListboxBuf4,sizeof(m_acListboxBuf4),0);
  gslc_ElemXListboxSetSize(&m_gui, pElemRef, 5, 1); // 5 rows, 1 columns
  gslc_ElemXListboxItemsSetSize(&m_gui, pElemRef, XLISTBOX_SIZE_AUTO, XLISTBOX_SIZE_AUTO);
  gslc_ElemSetTxtMarginXY(&m_gui, pElemRef, 5, 0);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_BLACK,GSLC_COL_ORANGE);
  gslc_ElemXListboxSetSelFunc(&m_gui, pElemRef, &CbListbox);
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Log 1");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Log 2");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Log 3");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Log 4");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Log 5");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Log 6");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Log 7");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Log 8");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Log 9");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Log 10");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Log 11");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Log 12");
  logList = pElemRef;

  // Create vertical scrollbar for listbox
  pElemRef = gslc_ElemXSliderCreate(&m_gui,LOG_SCRL,LOG_SAVE_LOAD,&m_sListScroll4,
          (gslc_tsRect){170+120-21,45+4,20,120-8},0,17,0,5,true);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_BLACK,GSLC_COL_ORANGE);
  gslc_ElemXSliderSetPosFunc(&m_gui,pElemRef,&CbSlidePos);
  logScrl = pElemRef;
   
  // Create SAVE_LOAD_PROG_BOX box
  pElemRef = gslc_ElemCreateBox(&m_gui,SAVE_LOAD_PROG_BOX,LOG_SAVE_LOAD,(gslc_tsRect){58,164,204,8});
  // Set the callback function to handle all drawing for the element
  gslc_ElemSetDrawFunc(&m_gui,pElemRef,&CbDrawScanner);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_BLACK,GSLC_COL_BLACK);
  saveLoadProgBox = pElemRef;

  // Create progress bar SAVE_LOAD_PROG 
  pElemRef = gslc_ElemXProgressCreate(&m_gui,SAVE_LOAD_PROG,LOG_SAVE_LOAD,&m_sXBarGauge1,
    (gslc_tsRect){60,165,200,6},0,12,0,GSLC_COL_GREEN,false);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_BLACK,GSLC_COL_BLACK);
  saveLoadProgress = pElemRef;
  
  // create LOG_SAVE_BTN button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,LOG_SAVE_BTN,LOG_SAVE_LOAD,
    (gslc_tsRect){60,180,40,30},(char*)"Save",0,E_BUILTIN5X8,&CbBtnCommon);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_BLACK);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_GRAY_LT1,GSLC_COL_BLUE_DK1);
  logSaveBtn = pElemRef;
  
  // create LOG_LOAD_BTN button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,LOG_LOAD_BTN,LOG_SAVE_LOAD,
    (gslc_tsRect){140,180,40,30},(char*)"Load",0,E_BUILTIN5X8,&CbBtnCommon);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_BLACK);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_GRAY_LT1,GSLC_COL_BLUE_DK1);
  logLoadBtn = pElemRef;
  
  // create LOG_BACK_BTN button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,LOG_BACK_BTN,LOG_SAVE_LOAD,
    (gslc_tsRect){220,180,40,30},(char*)"Back",0,E_BUILTIN5X8,&CbBtnCommon);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_BLACK);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_GRAY_LT1,GSLC_COL_BLUE_DK1);
  logBackBtn = pElemRef;

  // -----------------------------------
  // PAGE: CONFIRM_DELETE
  
   
  // Create E_ELEM_BOX17 box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_ELEM_BOX17,CONFIRM_DELETE,(gslc_tsRect){35,60,250,120});
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_BLACK,GSLC_COL_BLACK);
  
  // Create E_ELEM_TEXT60 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT60,CONFIRM_DELETE,(gslc_tsRect){64,70,192,23},
    (char*)"Delete current log data?",0,E_FREESANS9);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT67 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT67,CONFIRM_DELETE,(gslc_tsRect){81,95,157,10},
    (char*)"If data has not been saved",0,E_BUILTIN5X8);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT68 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT68,CONFIRM_DELETE,(gslc_tsRect){69,105,181,10},
    (char*)"it will be deleted permanatly!",0,E_BUILTIN5X8);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // create LOG_DEL_YES button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,LOG_DEL_YES,CONFIRM_DELETE,
    (gslc_tsRect){90,130,40,30},(char*)"yes",0,E_BUILTIN5X8,&CbBtnCommon);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_BLACK);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_GRAY_LT1,GSLC_COL_BLUE_DK1);
  logDeleteYes = pElemRef;
  
  // create LOG_DEL_NO button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,LOG_DEL_NO,CONFIRM_DELETE,
    (gslc_tsRect){180,130,40,30},(char*)"no",0,E_BUILTIN5X8,&CbBtnCommon);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_BLACK);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_ORANGE,GSLC_COL_GRAY_LT1,GSLC_COL_BLUE_DK1);
  logDeleteNo = pElemRef;

  // -----------------------------------
  // PAGE: E_POP_KEYPAD_NUM
  
  static gslc_tsXKeyPadCfg_Num sCfg;
  sCfg = gslc_ElemXKeyPadCfgInit_Num();
  gslc_ElemXKeyPadCfgSetFloatEn_Num(&sCfg, false);
  gslc_ElemXKeyPadCfgSetSignEn_Num(&sCfg, true);
  gslc_ElemXKeyPadCfgSetButtonSz((gslc_tsXKeyPadCfg*)&sCfg, 38, 38);
  gslc_ElemXKeyPadCfgSetButtonSpace((gslc_tsXKeyPadCfg*)&sCfg, 2, 2);
  gslc_ElemXKeyPadCfgSetRoundEn((gslc_tsXKeyPadCfg*)&sCfg, true);
  m_pElemKeyPadNum = gslc_ElemXKeyPadCreate_Num(&m_gui, E_ELEM_KEYPAD_NUM, E_POP_KEYPAD_NUM,
    &m_sKeyPadNum, 5, 40, E_DOSIS_BOOK8, &sCfg);
  gslc_ElemXKeyPadValSetCb(&m_gui, m_pElemKeyPadNum, &CbKeypad);
//<InitGUI !End!>

//<Startup !Start!>
  gslc_SetTransparentColor(&m_gui, ((gslc_tsColor){26,26,26}));
//<Startup !End!>

}

#endif // end _GUISLICE_GEN_H
