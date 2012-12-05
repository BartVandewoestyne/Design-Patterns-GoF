#ifndef VIEW_H
#define VIEW_H

class ApplicationWindow;

class View {
public:
    void DrawOn(const ApplicationWindow* w) const;
};

#endif /* VIEW */
