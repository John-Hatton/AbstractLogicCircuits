//
// Created by snake on 12/8/2022.
//

#include "LogicGates/TriInputAndGate.h"

TriInputAndGate::TriInputAndGate() {

}

bool TriInputAndGate::getInputX() const {
    return inputX;
}

void TriInputAndGate::setInputX(bool inX) {
    inputX = inX;
}

bool TriInputAndGate::getInputY() const {
    return inputY;
}

void TriInputAndGate::setInputY(bool inY) {
    inputY = inY;
}

bool TriInputAndGate::getInputZ() const {
    return inputZ;
}

void TriInputAndGate::setInputZ(bool inZ) {
    inputZ = inZ;
}

bool TriInputAndGate::answer() {
    if (inputX && inputY && inputZ)
    {
        output = true;
        return true;
    }
    output = false;
    return false;
}
