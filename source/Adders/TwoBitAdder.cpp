//
// Created by snake on 11/20/2022.
//

#include "Adders/TwoBitAdder.h"

TwoBitAdder::TwoBitAdder() = default;

bool TwoBitAdder::getInputX1() const {
    return inputX1;
}

void TwoBitAdder::setInputX1(bool inX1) {
    inputX1 = inX1;
}

bool TwoBitAdder::getInputY1() const {
    return inputY1;
}

void TwoBitAdder::setInputY1(bool inY1) {
    inputY1 = inY1;
}

bool TwoBitAdder::getInputX2() const {
    return inputX2;
}

void TwoBitAdder::setInputX2(bool inX2) {
    inputX2 = inX2;
}

bool TwoBitAdder::getInputY2() const {
    return inputY2;
}

void TwoBitAdder::setInputY2(bool inY2) {
    inputY2 = inY2;
}

FullAdder* TwoBitAdder::getBitOneFullAdder() const {
    return bitOneFullAdder;
}

void TwoBitAdder::setBitOneFullAdder(FullAdder* fA1) {
    bitOneFullAdder = fA1;
}

FullAdder* TwoBitAdder::getBitTwoFullAdder() const {
    return bitTwoFullAdder;
}

void TwoBitAdder::setBitTwoFullAdder(FullAdder* fA2) {
    bitTwoFullAdder = fA2;
}

std::string TwoBitAdder::answer() {


    auto fullAdderOne = new FullAdder();
    auto fullAdderTwo = new FullAdder();

    fullAdderOne->setInputX(inputX1);
    fullAdderOne->setInputY(inputY1);
    fullAdderOne->answer();

    // Set the carry out of the first adder to the carry in of the second.
    fullAdderTwo->setCarryIn(fullAdderOne->getCarryOut());

    fullAdderTwo->setInputX(inputX2);
    fullAdderTwo->setInputY(inputY2);
    fullAdderTwo->answer();


    // Logic goes here!

    bool adderOneSum = fullAdderOne->getSum();
    bool adderTwoSum = fullAdderTwo->getSum();
    bool adderOneCarryOut = fullAdderOne->getCarryOut();
    bool adderTwoCarryOut = fullAdderTwo->getCarryOut();

    // TODO: The idea is, I want to replace those bottom inputs with these, so I'm actually using my logic gates.


    // Case 1: 00 + 00 == 0000
    if (!adderOneSum && !adderTwoSum && !adderOneCarryOut && !adderTwoCarryOut)
    {
        // Result is 0
        return "0 0000";
    }

    // Cases 2-5 == 0001
    else if(adderOneSum && !adderTwoSum && !adderOneCarryOut && !adderTwoCarryOut)
    {
        // Result is 1
        return "0 0001";
    }
    else if(!adderOneSum && adderTwoSum && !adderOneCarryOut && !adderTwoCarryOut)
    {
        // Result is 1
        return "0 0010";
    }
    else if(!adderOneSum && adderTwoSum && adderOneCarryOut && !adderTwoCarryOut)
    {
        // Result is 1
        return "0 0010";
    }
    else if(!adderOneSum && !adderTwoSum && !adderOneCarryOut && adderTwoCarryOut)
    {
        // Result is 1
        return "0 0100";
    }
    else if(!adderOneSum && !adderTwoSum && adderOneCarryOut && adderTwoCarryOut)
    {
        // Result is 1
        return "0 0101";
    }
    else if(adderOneSum && !adderTwoSum && !adderOneCarryOut && adderTwoCarryOut)
    {
        // Result is 1
        return "0 0101";
    }
    else if(!adderOneSum && adderTwoSum && adderOneCarryOut && adderTwoCarryOut)
    {
        // Result is 1
        return "0 0110";
    }

    return "-1"; // TODO: Finish the rest of the test cases for the two bit Adder...
}
