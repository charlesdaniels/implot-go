#pragma once

/* based on inkyblackness/imgui-go/imguiWrapperTypes.h and modified */

#ifdef __cplusplus
extern "C"
{
#endif

typedef int IpgBool;
typedef void *IpgTextureID;

typedef void *IpgContext;
typedef void *IpgDrawCmd;
typedef void *IpgDrawData;
typedef void *IpgDrawList;
typedef void *IpgFontAtlas;
typedef void *IpgFontConfig;
typedef void *IpgFont;
typedef void *IpgGlyphRanges;
typedef void *IpgGuiStyle;
typedef void *IpgInputTextCallbackData;
typedef void *IpgIO;
typedef unsigned int IpgPackedColor;

typedef struct tagIpgVec2
{
   float x;
   float y;
} IpgVec2;

typedef struct tagIpgVec4
{
   float x;
   float y;
   float z;
   float w;
} IpgVec4;

typedef int IpgImPlotFlags;
typedef int IpgImAxisFlags;
typedef int IpgImPlotCol;
typedef int IpgImPlotStyleVar;
typedef int IpgImMarker;

#ifdef __cplusplus
}
#endif

