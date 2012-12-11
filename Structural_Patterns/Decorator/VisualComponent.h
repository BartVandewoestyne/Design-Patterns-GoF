#ifndef VISUAL_COMPONENT_H
#define VISUAL_COMPONENT_H

class VisualComponent {
public:
    VisualComponent();

    virtual void Draw();
    virtual void Resize();
    // ...
};

#endif /* VISUAL_COMPONENT_H */
