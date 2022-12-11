//
// Created by physiker on 12/11/2022.
//

#include "LogicGates/TriInputNandGate.h"

TriInputNandGate::TriInputNandGate() {
    output = true;
}

bool TriInputNandGate::getInputX() const {
    return inputX;
}

void TriInputNandGate::setInputX(bool inX) {
    inputX = inX;
}

bool TriInputNandGate::getInputY() const {
    return inputY;
}

void TriInputNandGate::setInputY(bool inY) {
    inputY = inY;
}

bool TriInputNandGate::getInputZ() const {
    return inputZ;
}

void TriInputNandGate::setInputZ(bool inZ) {
    inputZ = inZ;
}

bool TriInputNandGate::answer() {
    if (inputX && inputY && inputZ)
    {
        output = false;
        return output;
    }
    return output;
}
