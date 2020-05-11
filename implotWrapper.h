#pragma once

#include "implotWrapperTypes.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* XXX: we don't wrap anything where you provide a C callback based better.
 * That would be better done on the Go side, which could then do the calls and
 * generate arrays to pass into this API. */

extern bool IpgBeginPlot(const char* title_id,
               const char* x_label,
               const char* y_label,
               const IpgVec2* size,
               IpgImPlotFlags flags,
               IpgImAxisFlags x_flags,
               IpgImAxisFlags y_flags,
               IpgImAxisFlags y2_flags,
               IpgImAxisFlags y3_flags);

extern void IpgEndPlot();

/* extern void IpgPlotYs(const char* label_id, const float* values, int count, int offset, int stride); */
/* extern void IpgPlotVec(const char* label_id, const IpgVec2* data, int count, int offset); */
extern void IpgPlot2D(const char* label_id, const float* xs, const float* ys, int count, int offset);

// Plots vertical bars.
/* void IpgPlotBarV(const char* label_id, const float* values, int count, float width, float shift = 0, int offset = 0, int stride); */
/* void IpgPlotBar2D(const char* label_id, const float* xs, const float* ys, int count, float width, int offset = 0, int stride); */

#ifdef __cplusplus
}
#endif
