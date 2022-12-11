//
// Created by snake on 12/8/2022.
//

#include "LogicGates/TriInvertedAndGate.h"

TriInvertedAndGate::TriInvertedAndGate() = default;

bool TriInvertedAndGate::getInputX() const {
    return inputX;
}

void TriInvertedAndGate::setInputX(bool inX) {
    inputX = inX;
}

bool TriInvertedAndGate::getInputY() const {
    return inputY;
}

void TriInvertedAndGate::setInputY(bool inY) {
    inputY = inY;
}

bool TriInvertedAndGate::getInputZ() const {
    return inputZ;
}

void TriInvertedAndGate::setInputZ(bool inZ) {
    inputZ = inZ;
}

bool TriInvertedAndGate::answer() {
    if (inputX && inputY && inputZ)
    {
        output = false;
        return output;
    }
    output = true;
    return output;
}
