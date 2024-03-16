#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMG_SLIDER_KNOB
#define LV_ATTRIBUTE_IMG_IMG_SLIDER_KNOB
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_SLIDER_KNOB uint8_t img_slider_knob_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x1f, 0xff, 0x81, 0xff, 0xc7, 0xff, 0xef, 0xff, 0xfb, 0xff, 0xef, 0xff, 0xc7, 0xff, 0x81, 0xff, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x09, 0xff, 0x90, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0x90, 0xff, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0x17, 0xff, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xce, 0xff, 0x17, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0x09, 0xff, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0x09, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0x90, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x90, 0x00, 0x00, 
  0xff, 0x20, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0x20, 
  0xff, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 
  0xff, 0xc6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc6, 
  0xff, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 
  0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 
  0xff, 0xc6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc6, 
  0xff, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 
  0xff, 0x20, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0x20, 
  0x00, 0x00, 0xff, 0x90, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x90, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0x09, 0xff, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0x09, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0x17, 0xff, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xce, 0xff, 0x17, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x09, 0xff, 0x90, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0x90, 0xff, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x1f, 0xff, 0x81, 0xff, 0xc7, 0xff, 0xef, 0xff, 0xfb, 0xff, 0xef, 0xff, 0xc7, 0xff, 0x81, 0xff, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9f, 0xff, 0x1f, 0xbf, 0xff, 0x81, 0xbf, 0xff, 0xc7, 0xdf, 0xff, 0xef, 0xdf, 0xff, 0xfb, 0xdf, 0xff, 0xef, 0xbf, 0xff, 0xc7, 0xbf, 0xff, 0x81, 0x9f, 0xff, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xe7, 0x09, 0xbf, 0xff, 0x90, 0xdf, 0xff, 0xfb, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xfb, 0xbf, 0xff, 0x90, 0x3c, 0xe7, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0xff, 0x17, 0xdf, 0xff, 0xce, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xce, 0xbf, 0xff, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3c, 0xe7, 0x09, 0xdf, 0xff, 0xce, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xcf, 0x3c, 0xe7, 0x09, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xbf, 0xff, 0x90, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xbf, 0xff, 0x90, 0x00, 0x00, 0x00, 
  0x9f, 0xff, 0x20, 0xdf, 0xff, 0xfb, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xfb, 0x9f, 0xff, 0x20, 
  0xbf, 0xff, 0x81, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xbf, 0xff, 0x81, 
  0xbf, 0xff, 0xc6, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xbf, 0xff, 0xc6, 
  0xdf, 0xff, 0xee, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xee, 
  0xdf, 0xff, 0xfc, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xfc, 
  0xdf, 0xff, 0xee, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xee, 
  0xbf, 0xff, 0xc6, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xbf, 0xff, 0xc6, 
  0xbf, 0xff, 0x81, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xbf, 0xff, 0x81, 
  0x9f, 0xff, 0x20, 0xdf, 0xff, 0xfb, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xfb, 0x9f, 0xff, 0x20, 
  0x00, 0x00, 0x00, 0xbf, 0xff, 0x90, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xbf, 0xff, 0x90, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3c, 0xe7, 0x09, 0xdf, 0xff, 0xce, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xcf, 0x3c, 0xe7, 0x09, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0xff, 0x17, 0xdf, 0xff, 0xce, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xce, 0xbf, 0xff, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xe7, 0x09, 0xbf, 0xff, 0x90, 0xdf, 0xff, 0xfb, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xfb, 0xbf, 0xff, 0x90, 0x3c, 0xe7, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9f, 0xff, 0x1f, 0xbf, 0xff, 0x81, 0xbf, 0xff, 0xc7, 0xdf, 0xff, 0xef, 0xdf, 0xff, 0xfb, 0xdf, 0xff, 0xef, 0xbf, 0xff, 0xc7, 0xbf, 0xff, 0x81, 0x9f, 0xff, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x9f, 0x1f, 0xff, 0xbf, 0x81, 0xff, 0xbf, 0xc7, 0xff, 0xdf, 0xef, 0xff, 0xdf, 0xfb, 0xff, 0xdf, 0xef, 0xff, 0xbf, 0xc7, 0xff, 0xbf, 0x81, 0xff, 0x9f, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x3c, 0x09, 0xff, 0xbf, 0x90, 0xff, 0xdf, 0xfb, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xfb, 0xff, 0xbf, 0x90, 0xe7, 0x3c, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xbf, 0x17, 0xff, 0xdf, 0xce, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xce, 0xff, 0xbf, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xe7, 0x3c, 0x09, 0xff, 0xdf, 0xce, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xcf, 0xe7, 0x3c, 0x09, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xbf, 0x90, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xbf, 0x90, 0x00, 0x00, 0x00, 
  0xff, 0x9f, 0x20, 0xff, 0xdf, 0xfb, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xfb, 0xff, 0x9f, 0x20, 
  0xff, 0xbf, 0x81, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xbf, 0x81, 
  0xff, 0xbf, 0xc6, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xbf, 0xc6, 
  0xff, 0xdf, 0xee, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xee, 
  0xff, 0xdf, 0xfc, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xfc, 
  0xff, 0xdf, 0xee, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xee, 
  0xff, 0xbf, 0xc6, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xbf, 0xc6, 
  0xff, 0xbf, 0x81, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xbf, 0x81, 
  0xff, 0x9f, 0x20, 0xff, 0xdf, 0xfb, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xfb, 0xff, 0x9f, 0x20, 
  0x00, 0x00, 0x00, 0xff, 0xbf, 0x90, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xbf, 0x90, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xe7, 0x3c, 0x09, 0xff, 0xdf, 0xce, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xcf, 0xe7, 0x3c, 0x09, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xbf, 0x17, 0xff, 0xdf, 0xce, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xce, 0xff, 0xbf, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x3c, 0x09, 0xff, 0xbf, 0x90, 0xff, 0xdf, 0xfb, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0xfb, 0xff, 0xbf, 0x90, 0xe7, 0x3c, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x9f, 0x1f, 0xff, 0xbf, 0x81, 0xff, 0xbf, 0xc7, 0xff, 0xdf, 0xef, 0xff, 0xdf, 0xfb, 0xff, 0xdf, 0xef, 0xff, 0xbf, 0xc7, 0xff, 0xbf, 0x81, 0xff, 0x9f, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xef, 0xf7, 0x1f, 0xfd, 0xf5, 0xfb, 0x81, 0xfe, 0xf5, 0xfc, 0xc7, 0xfe, 0xf6, 0xfd, 0xef, 0xfe, 0xf6, 0xfd, 0xfb, 0xfe, 0xf6, 0xfd, 0xef, 0xfe, 0xf5, 0xfc, 0xc7, 0xfd, 0xf5, 0xfb, 0x81, 0xf7, 0xef, 0xf7, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe3, 0xe3, 0xe3, 0x09, 0xfd, 0xf4, 0xfb, 0x90, 0xfe, 0xf6, 0xfd, 0xfb, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfe, 0xf6, 0xfd, 0xfb, 0xfd, 0xf4, 0xfb, 0x90, 0xe3, 0xe3, 0xe3, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0x17, 0xfe, 0xf6, 0xfd, 0xce, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfe, 0xf6, 0xfd, 0xce, 0xf4, 0xf4, 0xf4, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe3, 0xe3, 0xe3, 0x09, 0xfe, 0xf6, 0xfd, 0xce, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfe, 0xf6, 0xfd, 0xcf, 0xe3, 0xe3, 0xe3, 0x09, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xfd, 0xf4, 0xfb, 0x90, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfd, 0xf4, 0xfb, 0x90, 0x00, 0x00, 0x00, 0x00, 
  0xf7, 0xef, 0xf7, 0x20, 0xfe, 0xf6, 0xfd, 0xfb, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfe, 0xf6, 0xfd, 0xfb, 0xf7, 0xef, 0xf7, 0x20, 
  0xfd, 0xf5, 0xfb, 0x81, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfd, 0xf5, 0xfb, 0x81, 
  0xfe, 0xf5, 0xfc, 0xc6, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfe, 0xf5, 0xfc, 0xc6, 
  0xfe, 0xf6, 0xfd, 0xee, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfe, 0xf6, 0xfd, 0xee, 
  0xfe, 0xf6, 0xfd, 0xfc, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfe, 0xf6, 0xfd, 0xfc, 
  0xfe, 0xf6, 0xfd, 0xee, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfe, 0xf6, 0xfd, 0xee, 
  0xfe, 0xf5, 0xfc, 0xc6, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfe, 0xf5, 0xfc, 0xc6, 
  0xfd, 0xf5, 0xfb, 0x81, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfd, 0xf5, 0xfb, 0x81, 
  0xf7, 0xef, 0xf7, 0x20, 0xfe, 0xf6, 0xfd, 0xfb, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfe, 0xf6, 0xfd, 0xfb, 0xf7, 0xef, 0xf7, 0x20, 
  0x00, 0x00, 0x00, 0x00, 0xfd, 0xf4, 0xfb, 0x90, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfd, 0xf4, 0xfb, 0x90, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe3, 0xe3, 0xe3, 0x09, 0xfe, 0xf6, 0xfd, 0xce, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfe, 0xf6, 0xfd, 0xcf, 0xe3, 0xe3, 0xe3, 0x09, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0x17, 0xfe, 0xf6, 0xfd, 0xce, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfe, 0xf6, 0xfd, 0xce, 0xf4, 0xf4, 0xf4, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe3, 0xe3, 0xe3, 0x09, 0xfd, 0xf4, 0xfb, 0x90, 0xfe, 0xf6, 0xfd, 0xfb, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xff, 0xf6, 0xfd, 0xff, 0xfe, 0xf6, 0xfd, 0xfb, 0xfd, 0xf4, 0xfb, 0x90, 0xe3, 0xe3, 0xe3, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xef, 0xf7, 0x1f, 0xfd, 0xf5, 0xfb, 0x81, 0xfe, 0xf5, 0xfc, 0xc7, 0xfe, 0xf6, 0xfd, 0xef, 0xfe, 0xf6, 0xfd, 0xfb, 0xfe, 0xf6, 0xfd, 0xef, 0xfe, 0xf5, 0xfc, 0xc7, 0xfd, 0xf5, 0xfb, 0x81, 0xf7, 0xef, 0xf7, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t img_slider_knob = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 19,
  .header.h = 19,
  .data_size = 361 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .data = img_slider_knob_map,
};
