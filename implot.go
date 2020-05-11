package implot

// #cgo CXXFLAGS: -std=c++11 -I./imgui -I./implot
// #cgo CFLAGS: -I./imgui -I./implot
// #include "implotWrapper.h"
import "C"
import "github.com/inkyblackness/imgui-go"

func BeginPlot(id, x_label, y_label string, size imgui.Vec2, flags, x_flags, y_flags, y2_flags, y3_flags int) bool {
	IpgSize := C.IpgVec2;
	IpgSize.X = size.X;
	IpgSize.Y = size.Y;
	res := C.IpgBeginPlot(C.CString(id), C.CString(x_label), C.CString(y_label), &IpgSize, C.int(flags), C.int(x_flags), C.int(y_flags), C.int(y2_flags), C.int(y3_flags));
	return res;
}

func EndPlot() {
	C.IpgEndPlot();
}

func IpgPlot2D(id string, xs, ys []float32, offset int) {
	count := len(xs)
	if len(ys) < count {
		count = len(ys)
	}
	IpgPlot2D(C.CString(id), &(xs[0]), &(ys[0]), C.int(count), C.int(offset))
}
