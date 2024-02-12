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

void Window::SetOrigin(const Point& at) {
    // TODO
 }

void Window::SetExtent(const Point& extent) {
    // TODO
 }

void Window::Raise() {
    // TODO
 }

void Window::Lower() {
    // TODO
 }

void Window::DrawLine(const Point&, const Point&) {
    // TODO
}

void Window::DrawRect (const Point& p1, const Point& p2) {
    WindowImp* imp = GetWindowImp();
    imp->DeviceRect(p1.X(), p1.Y(), p2.X(), p2.Y());
}

void Window::DrawPolygon(const Point[], int n) {
    // TODO
}

void Window::DrawText(const char*, const Point&) {
    // TODO
}

WindowImp* Window::GetWindowImp () {
    if (_imp == 0) {
        _imp = WindowSystemFactory::Instance()->MakeWindowImp();
    }
    return _imp;
}

View* Window::GetView() {
    // TODO
    return 0;
}