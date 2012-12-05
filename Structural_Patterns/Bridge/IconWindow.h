#ifndef ICONWINDOW_H
#define ICONWINDOW_H

#include "Window.h"

class IconWindow : public Window {
public:
    // ...
    virtual void DrawContents();
private:
    const char* _bitmapName;
};

#endif /* ICONWINDOW_H */
