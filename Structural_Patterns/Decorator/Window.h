#ifndef WINDOW_H
#define WINDOW_H

class VisualComponent;

class Window {
public:
    void SetContents (VisualComponent* contents);
private:
    VisualComponent* _contents;
};

#endif /* WINDOW_H */
