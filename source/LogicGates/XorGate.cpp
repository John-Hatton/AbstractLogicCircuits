//
// Created by physiker on 11/19/2022.
//

#include "LogicGates/XorGate.h"

XorGate::XorGate() {

}

bool XorGate::getInputX() const {
    return inputX;
}

void XorGate::setInputX(bool inX) {
    inputX = inX;
}

bool XorGate::getInputY() const {
    return inputY;
}

void XorGate::setInputY(bool inY) {
    inputY = inY;
}

bool XorGate::answer() {
    output = (!inputX != !inputY);
    return !inputX != !inputY; // Best way to do XOR!
}
