#include "Window.h"
#include "WindowImp.h"
#include "WindowSystemFactory.h"

 void Window::Open() {
    // TODO
 }
 
 void Window::Close() {
    // TODO
 }
 
 void Window::Iconify() {
    // TODO
 }
 
 void Window::Deiconify() {
    // TODO
 }

void SetOrigin(const Point& at) {
    // TODO
 }

void SetExtent(const Point& extent) {
    // TODO
 }

void Raise() {
    // TODO
 }

void Lower() {
    // TODO
 }

void Window::DrawRect (const Point& p1, const Point& p2) {
    WindowImp* imp = GetWindowImp();
    imp->DeviceRect(p1.X(), p1.Y(), p2.X(), p2.Y());
}

void Window::DrawPolygon(const Point[], int n)
{
    // TODO
}

WindowImp* Window::GetWindowImp () {
    if (_imp == 0) {
        _imp = WindowSystemFactory::Instance()->MakeWindowImp();
    }
    return _imp;
}
