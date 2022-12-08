//
// Created by snake on 12/7/2022.
//

#include "LogicGates/NorGate.h"

NorGate::NorGate() = default;

bool NorGate::getInputX() const {
    return inputX;
}

void NorGate::setInputX(bool inX) {
    inputX = inX;
}

bool NorGate::getInputY() const {
    return inputY;
}

void NorGate::setInputY(bool inY) {
    inputY = inY;
}

bool NorGate::answer() {
    if (!inputX && !inputY)
    {
        output = true;
        return true;
    }
    else if (!inputX && inputY)
    {
        output = false;
        return false;
    }
    else if (inputX && !inputY)
    {
        output = false;
        return false;
    }
    else if (inputX && inputY)
    {
        output = false;
        return false;
    }
    else
    {
        std::cout << "Something very wrong has happened..." << std::endl;
        return -1;
    }
}