#ifndef TEXT_MANIPULATOR_H
#define TEXT_MANIPULATOR_H

#include "Manipulator.h"

class TextShape;

class TextManipulator : public Manipulator {
public:
    TextManipulator(const TextShape* s);
};

#endif /* TEXT_MANIPULATOR_H */
