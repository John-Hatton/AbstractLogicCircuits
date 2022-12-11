//
// Created by snake on 12/10/2022.
//

#include "Adders/EightBitAdder.h"

EightBitAdder::EightBitAdder() {

    carryIn = false;        // Zero out the Register before use.

    bitOneFullAdder     = new FullAdder();
    bitTwoFullAdder     = new FullAdder();
    bitThreeFullAdder   = new FullAdder();
    bitFourFullAdder    = new FullAdder();
    bitFiveFullAdder    = new FullAdder();
    bitSixFullAdder     = new FullAdder();
    bitSevenFullAdder   = new FullAdder();
    bitEightFullAdder   = new FullAdder();
}

bool EightBitAdder::getCarryIn() const {
    return carryIn;
}

void EightBitAdder::setCarryIn(bool myCarryIn) {
    carryIn = myCarryIn;
}

bool EightBitAdder::getInputX1() const {
    return inputX1;
}

void EightBitAdder::setInputX1(bool inX1) {
    inputX1 = inX1;
}

bool EightBitAdder::getInputY1() const {
    return inputY1;
}

void EightBitAdder::setInputY1(bool inY1) {
    inputY1 = inY1;
}

bool EightBitAdder::getInputX2() const {
    return inputX2;
}

void EightBitAdder::setInputX2(bool inX2) {
    inputX2 = inX2;
}

bool EightBitAdder::getInputY2() const {
    return inputY2;
}

void EightBitAdder::setInputY2(bool inY2) {
    inputY2 = inY2;
}

bool EightBitAdder::getInputX3() const {
    return inputX3;
}

void EightBitAdder::setInputX3(bool inX3) {
    inputX3 = inX3;
}

bool EightBitAdder::getInputY3() const {
    return inputY3;
}

void EightBitAdder::setInputY3(bool inY3) {
    inputY3 = inY3;
}

bool EightBitAdder::getInputX4() const {
    return inputX4;
}

void EightBitAdder::setInputX4(bool inX4) {
    inputX4 = inX4;
}

bool EightBitAdder::getInputY4() const {
    return inputY4;
}

void EightBitAdder::setInputY4(bool inY4) {
    inputY4 = inY4;
}

bool EightBitAdder::getInputX5() const {
    return inputX5;
}

void EightBitAdder::setInputX5(bool inX5) {
    inputX5 = inX5;
}

bool EightBitAdder::getInputY5() const {
    return inputY5;
}

void EightBitAdder::setInputY5(bool inY5) {
    inputY5 = inY5;
}

bool EightBitAdder::getInputX6() const {
    return inputX6;
}

void EightBitAdder::setInputX6(bool inX6) {
    inputX6 = inX6;
}

bool EightBitAdder::getInputY6() const {
    return inputY6;
}

void EightBitAdder::setInputY6(bool inY6) {
    inputY6 = inY6;
}

bool EightBitAdder::getInputX7() const {
    return inputX7;
}

void EightBitAdder::setInputX7(bool inX7) {
    inputX7 = inX7;
}

bool EightBitAdder::getInputY7() const {
    return inputY7;
}

void EightBitAdder::setInputY7(bool inY7) {
    inputY7 = inY7;
}

bool EightBitAdder::getInputX8() const {
    return inputX8;
}

void EightBitAdder::setInputX8(bool inX8) {
    inputX8 = inX8;
}

bool EightBitAdder::getInputY8() const {
    return inputY8;
}

void EightBitAdder::setInputY8(bool inY8) {
    inputY8 = inY8;
}

FullAdder *EightBitAdder::getBitOneFullAdder() const {
    return bitOneFullAdder;
}

void EightBitAdder::setBitOneFullAdder(FullAdder *fA1) {
    bitOneFullAdder = fA1;
}

FullAdder *EightBitAdder::getBitTwoFullAdder() const {
    return bitTwoFullAdder;
}

void EightBitAdder::setBitTwoFullAdder(FullAdder *fA2) {
    bitTwoFullAdder = fA2;
}

FullAdder *EightBitAdder::getBitThreeFullAdder() const {
    return bitThreeFullAdder;
}

void EightBitAdder::setBitThreeFullAdder(FullAdder *fA3) {
    bitThreeFullAdder = fA3;
}

FullAdder *EightBitAdder::getBitFourFullAdder() const {
    return bitFourFullAdder;
}

void EightBitAdder::setBitFourFullAdder(FullAdder *fA4) {
    bitFourFullAdder = fA4;
}

FullAdder *EightBitAdder::getBitFiveFullAdder() const {
    return bitFiveFullAdder;
}

void EightBitAdder::setBitFiveFullAdder(FullAdder *fA5) {
    bitFiveFullAdder = fA5;
}

FullAdder *EightBitAdder::getBitSixFullAdder() const {
    return bitSixFullAdder;
}

void EightBitAdder::setBitSixFullAdder(FullAdder *fA6) {
    bitSixFullAdder = fA6;
}

FullAdder *EightBitAdder::getBitSevenFullAdder() const {
    return bitSevenFullAdder;
}

void EightBitAdder::setBitSevenFullAdder(FullAdder *fA7) {
    bitSevenFullAdder = fA7;
}

FullAdder *EightBitAdder::getBitEightFullAdder() const {
    return bitEightFullAdder;
}

void EightBitAdder::setBitEightFullAdder(FullAdder *fA8) {
    bitEightFullAdder = fA8;
}

bool EightBitAdder::getSumOneOut() const {
    return sumOneOut;
}

void EightBitAdder::setSumOneOut(bool sum1Out) {
    sumOneOut = sum1Out;
}

bool EightBitAdder::getSumTwoOut() const {
    return sumTwoOut;
}

void EightBitAdder::setSumTwoOut(bool sum2Out) {
    sumTwoOut = sum2Out;
}

bool EightBitAdder::getSumThreeOut() const {
    return sumThreeOut;
}

void EightBitAdder::setSumThreeOut(bool sum3Out) {
    sumThreeOut = sum3Out;
}

bool EightBitAdder::getSumFourOut() const {
    return sumFourOut;
}

void EightBitAdder::setSumFourOut(bool sum4Out) {
    sumFourOut = sum4Out;
}

bool EightBitAdder::getSumFiveOut() const {
    return sumFiveOut;
}

void EightBitAdder::setSumFiveOut(bool sum5Out) {
    sumFiveOut = sum5Out;
}

bool EightBitAdder::getSumSixOut() const {
    return sumSixOut;
}

void EightBitAdder::setSumSixOut(bool sum6Out) {
    sumSixOut = sum6Out;
}

bool EightBitAdder::getSumSevenOut() const {
    return sumSevenOut;
}

void EightBitAdder::setSumSevenOut(bool sum7Out) {
    sumSevenOut = sum7Out;
}

bool EightBitAdder::getSumEightOut() const {
    return sumEightOut;
}

void EightBitAdder::setSumEightOut(bool sum8Out) {
    sumEightOut = sum8Out;
}

bool EightBitAdder::getCarryOut() const {
    return carryOut;
}

void EightBitAdder::setCarryOut(bool myCarryOut) {
    carryOut = myCarryOut;
}

std::vector<bool> EightBitAdder::answer() {
    bitOneFullAdder->setCarryIn(carryIn); // Remember we have a Carry-In!
    bitOneFullAdder->setInputX(inputX1);
    bitOneFullAdder->setInputY(inputY1);
    bitOneFullAdder->answer(); // Must call answer(), to populate sum variable
    sumOneOut = bitOneFullAdder->getSum();

    bitTwoFullAdder->setCarryIn(bitOneFullAdder->getCarryOut());
    bitTwoFullAdder->setInputX(inputX2);
    bitTwoFullAdder->setInputY(inputY2);
    bitTwoFullAdder->answer();
    sumTwoOut = bitTwoFullAdder->getSum();

    bitThreeFullAdder->setCarryIn(bitTwoFullAdder->getCarryOut());
    bitThreeFullAdder->setInputX(inputX3);
    bitThreeFullAdder->setInputY(inputY3);
    bitThreeFullAdder->answer();
    sumThreeOut = bitThreeFullAdder->getSum();

    bitFourFullAdder->setCarryIn(bitThreeFullAdder->getCarryOut());
    bitFourFullAdder->setInputX(inputX4);
    bitFourFullAdder->setInputY(inputY4);
    bitFourFullAdder->answer();
    sumFourOut = bitFourFullAdder->getSum();

    // Bits 5-8

    bitFiveFullAdder->setCarryIn(bitFourFullAdder->getCarryOut());
    bitFiveFullAdder->setInputX(inputX5);
    bitFiveFullAdder->setInputY(inputY5);
    bitFiveFullAdder->answer();
    sumFiveOut = bitFiveFullAdder->getSum();

    bitSixFullAdder->setCarryIn(bitFiveFullAdder->getCarryOut());
    bitSixFullAdder->setInputX(inputX6);
    bitSixFullAdder->setInputY(inputY6);
    bitSixFullAdder->answer();
    sumSixOut = bitSixFullAdder->getSum();

    bitSevenFullAdder->setCarryIn(bitSixFullAdder->getCarryOut());
    bitSevenFullAdder->setInputX(inputX7);
    bitSevenFullAdder->setInputY(inputY7);
    bitSevenFullAdder->answer();
    sumSevenOut = bitSevenFullAdder->getSum();

    bitEightFullAdder->setCarryIn(bitSevenFullAdder->getCarryOut());
    bitEightFullAdder->setInputX(inputX8);
    bitEightFullAdder->setInputY(inputY8);
    bitEightFullAdder->answer();
    sumEightOut = bitEightFullAdder->getSum();



    carryOut = bitEightFullAdder->getCarryOut();

    return {carryOut, sumEightOut, sumSevenOut, sumSixOut, sumFiveOut, sumFourOut, sumThreeOut, sumTwoOut, sumOneOut};
}