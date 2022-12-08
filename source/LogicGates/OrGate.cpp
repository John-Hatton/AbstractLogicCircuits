//
// Created by physiker on 11/19/2022.
//

#include "LogicGates/OrGate.h"

OrGate::OrGate() = default;

bool OrGate::getInputX() const {
    return inputX;
}

void OrGate::setInputX(bool inX) {
    inputX = inX;
}

bool OrGate::getInputY() const {
    return inputY;
}

void OrGate::setInputY(bool inY) {
    inputY = inY;
}

bool OrGate::answer() {
    output = inputX || inputY;
    return inputX || inputY;
}