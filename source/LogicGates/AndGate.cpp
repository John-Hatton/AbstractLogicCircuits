//
// Created by physiker on 11/19/2022.
//

#include "LogicGates/AndGate.h"

AndGate::AndGate() = default;

bool AndGate::getInputX() const {
    return inputX;
}

void AndGate::setInputX(bool inX) {
    AndGate::inputX = inX;
}

bool AndGate::getInputY() const {
    return inputY;
}

void AndGate::setInputY(bool inY) {
    AndGate::inputY = inY;
}

bool AndGate::answer() {
    output = inputX && inputY;
    return inputX && inputY;
}




