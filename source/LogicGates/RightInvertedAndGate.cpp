//
// Created by snake on 12/9/2022.
//

#include "LogicGates/RightInvertedAndGate.h"

RightInvertedAndGate::RightInvertedAndGate() {

}

bool RightInvertedAndGate::getInputX() const {
    return inputX;
}

void RightInvertedAndGate::setInputX(bool inX) {
    inputX = inX;
}

bool RightInvertedAndGate::getInputY() const {
    return inputY;
}

void RightInvertedAndGate::setInputY(bool inY) {
    inputY = inY;
}

bool RightInvertedAndGate::answer() {
    // Whatever we receive, we'll pass inputX as normal
    //  and inputY as !inputY. Done.

    output = inputX && !inputY;
    return (inputX && !inputY);
}




