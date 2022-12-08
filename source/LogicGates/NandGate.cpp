//
// Created by physiker on 11/19/2022.
//

#include "LogicGates/NandGate.h"

NandGate::NandGate() = default;

bool NandGate::getInputX() const {
    return inputX;
}

void NandGate::setInputX(bool inX) {
    NandGate::inputX = inX;
}

bool NandGate::getInputY() const {
    return inputY;
}

void NandGate::setInputY(bool inY) {
    NandGate::inputY = inY;
}

bool NandGate::answer() {
    if (!inputX && !inputY)
    {
        output = false;
        return false;
    }
    else if (inputX && !inputY)
    {
        output = true;
        return true;
    }
    else if (!inputX && inputY)
    {
        output = true;
        return true;
    }
    else if (inputX && inputY)
    {
        output = false;
        return false;
    }
    else
    {
        std::cout << "Something very bad has happened..." << std::endl;
        return -1;
    }

}




