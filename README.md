# implot-go

**WIP**: this code doesn't work yet. Come back later.

Go bindings for [epezent/implot](https://github.com/epezent/implot) written
against [inkyblackness/imgui-go](https://github.com/inkyblackness/imgui-go).
The ultimate intent is to provide bindings in
[AllenDang/giu](https://github.com/AllenDang/giu).

## Submodules

* `implot` - this is the code we're wrapping... obviously we need this.
* `imgui-go` - we need an `imgui.h`; since we're binding into `imgui-go`, it's
  easier to use `imgui.h` from there rather than pull in our own, since it
  needs to stay in sync with `imgui-go` anyway.
