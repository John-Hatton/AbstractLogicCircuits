//
// Created by snake on 11/20/2022.
//

#include <vector>
#include "Adders/TwoBitAdder.h"

TwoBitAdder::TwoBitAdder() {
        bitOneFullAdder = new FullAdder();
        bitTwoFullAdder = new FullAdder();
}

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

std::vector<bool> TwoBitAdder::answer() {

    bitOneFullAdder->setInputX(inputX1);
    bitOneFullAdder->setInputY(inputY1);
    bitOneFullAdder->answer();
    sumOneOut = bitOneFullAdder->getSum();

    // Set the carry out of the first adder to the carry in of the second.
    bitTwoFullAdder->setCarryIn(bitOneFullAdder->getCarryOut());
    bitTwoFullAdder->setInputX(inputX2);
    bitTwoFullAdder->setInputY(inputY2);
    bitTwoFullAdder->answer();

    sumTwoOut = bitTwoFullAdder->getSum();
    carryOut = bitTwoFullAdder->getCarryOut();

    return {carryOut, sumTwoOut, sumOneOut};

}
