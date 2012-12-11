#include "Decorator.h"

Decorator::Decorator(VisualComponent* component)
  : _component(component)
{}

void Decorator::Draw() {
    _component->Draw();
}

void Decorator::Resize() {
    _component->Resize();
}
