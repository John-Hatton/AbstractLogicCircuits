//
// Created by snake on 12/10/2022.
//

#include "Adders/FourBitAdder.h"

FourBitAdder::FourBitAdder() {
    bitOneFullAdder     = new FullAdder();
    bitTwoFullAdder     = new FullAdder();
    bitThreeFullAdder   = new FullAdder();
    bitFourFullAdder    = new FullAdder();
}

bool FourBitAdder::getInputX1() const {
    return inputX1;
}

void FourBitAdder::setInputX1(bool inX1) {
    inputX1 = inX1;
}

bool FourBitAdder::getInputY1() const {
    return inputY1;
}

void FourBitAdder::setInputY1(bool inY1) {
    inputY1 = inY1;
}

bool FourBitAdder::getInputX2() const {
    return inputX2;
}

void FourBitAdder::setInputX2(bool inX2) {
    inputX2 = inX2;
}

bool FourBitAdder::getInputY2() const {
    return inputY2;
}

void FourBitAdder::setInputY2(bool inY2) {
    inputY2 = inY2;
}
bool FourBitAdder::getInputX3() const {
    return inputX3;
}

void FourBitAdder::setInputX3(bool inX3) {
    inputX3 = inX3;
}

bool FourBitAdder::getInputY3() const {
    return inputY3;
}

void FourBitAdder::setInputY3(bool inY3) {
    inputY3 = inY3;
}

bool FourBitAdder::getInputX4() const {
    return inputX4;
}

void FourBitAdder::setInputX4(bool inX4) {
    inputX4 = inX4;
}

bool FourBitAdder::getInputY4() const {
    return inputY4;
}

void FourBitAdder::setInputY4(bool inY4) {
    inputY4 = inY4;
}

FullAdder *FourBitAdder::getBitOneFullAdder() const {
    return bitOneFullAdder;
}

void FourBitAdder::setBitOneFullAdder(FullAdder* fA1) {

}

FullAdder *FourBitAdder::getBitTwoFullAdder() const {
    return bitTwoFullAdder;
}

void FourBitAdder::setBitTwoFullAdder(FullAdder* fA2) {
    bitTwoFullAdder = fA2;
}

FullAdder *FourBitAdder::getBitThreeFullAdder() const {
    return bitThreeFullAdder;
}

void FourBitAdder::setBitThreeFullAdder(FullAdder* fA3) {
    bitThreeFullAdder = fA3;
}

FullAdder *FourBitAdder::getBitFourFullAdder() const {
    return bitFourFullAdder;
}

void FourBitAdder::setBitFourFullAdder(FullAdder* fA4) {
    bitFourFullAdder = fA4;
}

bool FourBitAdder::getSumOneOut() const {
    return sumOneOut;
}

void FourBitAdder::setSumOneOut(bool sum1Out) {
    sumOneOut = sum1Out;
}

bool FourBitAdder::getSumTwoOut() const {
    return sumTwoOut;
}

void FourBitAdder::setSumTwoOut(bool sum2Out) {
    sumTwoOut = sum2Out;
}

bool FourBitAdder::getSumThreeOut() const {
    return sumThreeOut;
}

void FourBitAdder::setSumThreeOut(bool sum3Out) {
    sumThreeOut = sum3Out;
}

bool FourBitAdder::getSumFourOut() const {
    return sumFourOut;
}

void FourBitAdder::setSumFourOut(bool sum4Out) {
    sumFourOut = sum4Out;
}

bool FourBitAdder::getCarryOut() const {
    return carryOut;
}

void FourBitAdder::setCarryOut(bool myCarryOut) {
    carryOut = myCarryOut;
}

std::vector<bool> FourBitAdder::answer() {
    return {false,false,false,false,false};
}






