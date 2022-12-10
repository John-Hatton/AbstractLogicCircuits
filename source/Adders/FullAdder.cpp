//
// Created by physiker on 11/20/2022.
//

#include "Adders/FullAdder.h"
#include "LogicGates/OrGate.h"

FullAdder::FullAdder() = default;


bool FullAdder::getInputX() const {
    return inputX;
}

void FullAdder::setInputX(bool inX) {
    inputX = inX;
}

bool FullAdder::getInputY() const {
    return inputY;
}

void FullAdder::setInputY(bool inY) {
    inputY = inY;
}

bool FullAdder::getCarryIn() const {
    return carryIn;
}

void FullAdder::setCarryIn(bool cIn) {
    carryIn = cIn;
}

int FullAdder::getSum() const {
    return sum;
}

void FullAdder::setSum(int mySum) {
    sum = mySum;
}

int FullAdder::getCarryOut() {
    return carryOut;
}

void FullAdder::setCarryOut(int myCarryOut) {
    carryOut = myCarryOut;
}

std::vector<bool> FullAdder::answer() {

    // Initialize objects

    auto myXorGate = new XorGate();
    auto myAndGate = new AndGate();
    auto myXorGate2 = new XorGate();
    auto myAndGate2 = new AndGate();
    auto myOrGate = new OrGate();

    // Set object properties

    myXorGate->setInputX(inputX);
    myXorGate->setInputY(inputY);
    myAndGate->setInputX(inputX);
    myAndGate->setInputY(inputY);

    myXorGate2->setInputX(myXorGate->answer()); // See coming documents for Logic Circuits
    myXorGate2->setInputY(carryIn);

    myAndGate2->setInputX(myXorGate->answer());
    myAndGate2->setInputY(carryIn);

    myOrGate->setInputX(myAndGate2->answer());
    myOrGate->setInputY(myAndGate->answer());

    bool mySum = myXorGate2->answer();
    bool myCarryOut = myOrGate->answer();


    // Logic goes here.

    // Between the Sum and the Carry, we can determine the state of the machine.

    // We only have a certain number of cases here. With two inputs and one carry in, we have
    // 1. Sum off (0 + 0)
    // 2. Sum On (0 + 1) OR (1 + 0 ) ORR (0+0) + Carry In!

    if (carryIn)
    {
        // Do all carry in logic here

        // Remember, CARRY IN was true!

        // (0+0 == 1) Sum Off && Carry Out Off (CARRY IN ON!!!)
        if (mySum && !myCarryOut)
        {
            // Result is 0+0
            sum = mySum;
            return {carryOut,sum};
        }
        else if (!mySum && (!inputX && inputY))
        {
            // Result is 0+1 + 1 (CARRY IN!!!)
            sum = mySum;
            carryOut = myCarryOut;
            return {carryOut,sum};
        }
        else if (!mySum && (inputX && !inputY))
        {
            // Result is 1+0 + 1 (CARRY IN!!!)
            sum = mySum;
            carryOut = myCarryOut;
            return {carryOut,sum};
        }
        else if ((mySum && myCarryOut) && (inputX && inputY))
        {
            // Result is 1+1 + 1 (CARRY IN!!!)
            sum = mySum;
            carryOut = myCarryOut;
            return {carryOut,sum};
        }
        else
        {
            std::cout << "Something went very wrong..." << std::endl;
        }
    }
    else
    {
        // If we reach this statement, there was no Carry in input.

        // (0+0 == 0) Sum Off && Carry Out Off
        if (!mySum && !myCarryOut)
        {
            sum = mySum;
            // Result is 0+0
            return {carryOut,sum};
        }
        else if ((mySum && !myCarryOut) && (!inputX && inputY))
        {
            // Result is 0+1
            sum = mySum;
            return {carryOut,sum};
        }
        else if ((mySum && !myCarryOut) && (inputX && !inputY))
        {
            // Result is 1+0
            sum = mySum;
            return {carryOut,sum};
        }
        else if ((!mySum && myCarryOut) && (inputX && inputY))
        {
            // Result is 1+1
            sum = mySum;
            carryOut = myCarryOut;
            return {carryOut,sum};
        }
        else
        {
            std::cout << "Something went very wrong..." << std::endl;
        }
    }
    return {false};
}

