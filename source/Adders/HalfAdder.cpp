//
// Created by physiker on 11/19/2022.
//

#include "Adders/HalfAdder.h"

HalfAdder::HalfAdder() = default;

bool HalfAdder::getInputX() const {
    return inputX;
}

void HalfAdder::setInputX(bool inX) {
    inputX = inX;
}

bool HalfAdder::getInputY() const {
    return inputY;
}

void HalfAdder::setInputY(bool inY) {
    inputY = inY;
}

int HalfAdder::getSum() const {
    return sum;
}

void HalfAdder::setSum(int mySum) {
    sum = mySum;
}

int HalfAdder::getCarryOut() const {
    return carryOut;
}

void HalfAdder::setCarryOut(int myCarryOut) {
    carryOut = myCarryOut;
}

std::string HalfAdder::answer() {


    auto myXorGate = new XorGate();
    auto myAndGate = new AndGate();

    myXorGate->setInputX(inputX);
    myXorGate->setInputY(inputY);
    myAndGate->setInputX(inputX);
    myAndGate->setInputY(inputY);

    bool mySum = myXorGate->answer();
    bool myCarryOut = myAndGate->answer();

    if (mySum && !myCarryOut)
    {
        setSum(mySum);
        return "01";
    }
    else if (!mySum && !myCarryOut)
    {
        setSum(mySum && !myCarryOut);
        return "00";
    }
    else if (myCarryOut && !mySum)
    {
        setCarryOut(myCarryOut);
        return "10";
    }
    else
    {
        return "An error occured...";
    }
}
