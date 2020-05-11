#include "implotWrapper.h"
#include "implot/implot.h"

bool IpgBeginPlot(const char* title_id,
               const char* x_label,
               const char* y_label,
               const IpgVec2& size,
               IpgImPlotFlags flags,
               IpgImAxisFlags x_flags,
               IpgImAxisFlags y_flags,
               IpgImAxisFlags y2_flags,
               IpgImAxisFlags y3_flags) {

	return ImGui::BeginPlot(title_id,
			x_label,
			y_label,
			size,
			flags,
			x_flags,
			y_flags,
			y2_flags,
			y3_flags);

}


void IpgEndPlot() {
	ImGui::EndPlot();
}

void IpgPlot2D(const char* label_id, const float* xs, const float* ys, int count, int offset) {
	return ImGui::Plot(label_id, cx, ys, count, offset, sizeof(float));
}
