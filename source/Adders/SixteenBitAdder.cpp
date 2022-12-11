//
// Created by snake on 12/10/2022.
//

#include "Adders/SixteenBitAdder.h"

SixteenBitAdder::SixteenBitAdder() {
    carryIn = false;
    bitsOneThroughEight8BA      = new EightBitAdder();
    bitsNineThroughSixteen8BA   = new EightBitAdder();
}


bool SixteenBitAdder::getCarryIn() const {
    return carryIn;
}

void SixteenBitAdder::setCarryIn(bool myCarryIn) {
    carryIn = myCarryIn;
}

bool SixteenBitAdder::getInputX1() const {
    return inputX1;
}

void SixteenBitAdder::setInputX1(bool inX1) {
     inputX1 = inX1;
}

bool SixteenBitAdder::getInputX2() const {
    return inputX2;
}

void SixteenBitAdder::setInputX2(bool inX2) {
     inputX2 = inX2;
}

bool SixteenBitAdder::getInputX3() const {
    return inputX3;
}

void SixteenBitAdder::setInputX3(bool inX3) {
     inputX3 = inX3;
}

bool SixteenBitAdder::getInputX4() const {
    return inputX4;
}

void SixteenBitAdder::setInputX4(bool inX4) {
     inputX4 = inX4;
}

bool SixteenBitAdder::getInputX5() const {
    return inputX5;
}

void SixteenBitAdder::setInputX5(bool inX5) {
     inputX5 = inX5;
}

bool SixteenBitAdder::getInputX6() const {
    return inputX6;
}

void SixteenBitAdder::setInputX6(bool inX6) {
     inputX6 = inX6;
}

bool SixteenBitAdder::getInputX7() const {
    return inputX7;
}

void SixteenBitAdder::setInputX7(bool inX7) {
     inputX7 = inX7;
}

bool SixteenBitAdder::getInputX8() const {
    return inputX8;
}

void SixteenBitAdder::setInputX8(bool inX8) {
     inputX8 = inX8;
}

bool SixteenBitAdder::getInputX9() const {
    return inputX9;
}

void SixteenBitAdder::setInputX9(bool inX9) {
     inputX9 = inX9;
}

bool SixteenBitAdder::getInputX10() const {
    return inputX10;
}

void SixteenBitAdder::setInputX10(bool inX10) {
     inputX10 = inX10;
}

bool SixteenBitAdder::getInputX11() const {
    return inputX11;
}

void SixteenBitAdder::setInputX11(bool inX11) {
     inputX11 = inX11;
}

bool SixteenBitAdder::getInputX12() const {
    return inputX12;
}

void SixteenBitAdder::setInputX12(bool inX12) {
     inputX12 = inX12;
}

bool SixteenBitAdder::getInputX13() const {
    return inputX13;
}

void SixteenBitAdder::setInputX13(bool inX13) {
     inputX13 = inX13;
}

bool SixteenBitAdder::getInputX14() const {
    return inputX14;
}

void SixteenBitAdder::setInputX14(bool inX14) {
     inputX14 = inX14;
}

bool SixteenBitAdder::getInputX15() const {
    return inputX15;
}

void SixteenBitAdder::setInputX15(bool inX15) {
     inputX15 = inX15;
}

bool SixteenBitAdder::getInputX16() const {
    return inputX16;
}

void SixteenBitAdder::setInputX16(bool inX16) {
     inputX16 = inX16;
}

bool SixteenBitAdder::getInputY1() const {
    return inputY1;
}

void SixteenBitAdder::setInputY1(bool inY1) {
     inputY1 = inY1;
}

bool SixteenBitAdder::getInputY2() const {
    return inputY2;
}

void SixteenBitAdder::setInputY2(bool inY2) {
     inputY2 = inY2;
}

bool SixteenBitAdder::getInputY3() const {
    return inputY3;
}

void SixteenBitAdder::setInputY3(bool inY3) {
     inputY3 = inY3;
}

bool SixteenBitAdder::getInputY4() const {
    return inputY4;
}

void SixteenBitAdder::setInputY4(bool inY4) {
     inputY4 = inY4;
}

bool SixteenBitAdder::getInputY5() const {
    return inputY5;
}

void SixteenBitAdder::setInputY5(bool inY5) {
     inputY5 = inY5;
}

bool SixteenBitAdder::getInputY6() const {
    return inputY6;
}

void SixteenBitAdder::setInputY6(bool inY6) {
     inputY6 = inY6;
}

bool SixteenBitAdder::getInputY7() const {
    return inputY7;
}

void SixteenBitAdder::setInputY7(bool inY7) {
     inputY7 = inY7;
}

bool SixteenBitAdder::getInputY8() const {
    return inputY8;
}

void SixteenBitAdder::setInputY8(bool inY8) {
     inputY8 = inY8;
}

bool SixteenBitAdder::getInputY9() const {
    return inputY9;
}

void SixteenBitAdder::setInputY9(bool inY9) {
     inputY9 = inY9;
}

bool SixteenBitAdder::getInputY10() const {
    return inputY10;
}

void SixteenBitAdder::setInputY10(bool inY10) {
     inputY10 = inY10;
}

bool SixteenBitAdder::getInputY11() const {
    return inputY11;
}

void SixteenBitAdder::setInputY11(bool inY11) {
     inputY11 = inY11;
}

bool SixteenBitAdder::getInputY12() const {
    return inputY12;
}

void SixteenBitAdder::setInputY12(bool inY12) {
     inputY12 = inY12;
}

bool SixteenBitAdder::getInputY13() const {
    return inputY13;
}

void SixteenBitAdder::setInputY13(bool inY13) {
     inputY13 = inY13;
}

bool SixteenBitAdder::getInputY14() const {
    return inputY14;
}

void SixteenBitAdder::setInputY14(bool inY14) {
     inputY14 = inY14;
}

bool SixteenBitAdder::getInputY15() const {
    return inputY15;
}

void SixteenBitAdder::setInputY15(bool inY15) {
     inputY15 = inY15;
}

bool SixteenBitAdder::getInputY16() const {
    return inputY16;
}

void SixteenBitAdder::setInputY16(bool inY16) {
     inputY16 = inY16;
}

bool SixteenBitAdder::getOutput1() const {
    return output1;
}

void SixteenBitAdder::setOutput1(bool out1) {
    output1 = out1;
}

bool SixteenBitAdder::getOutput2() const {
    return output2;
}

void SixteenBitAdder::setOutput2(bool out2) {
    output2 = out2;
}

bool SixteenBitAdder::getOutput3() const {
    return output3;
}

void SixteenBitAdder::setOutput3(bool out3) {
    output3 = out3;
}

bool SixteenBitAdder::getOutput4() const {
    return output4;
}

void SixteenBitAdder::setOutput4(bool out4) {
    output4 = out4;
}

bool SixteenBitAdder::getOutput5() const {
    return output5;
}

void SixteenBitAdder::setOutput5(bool out5) {
    output5 = out5;
}

bool SixteenBitAdder::getOutput6() const {
    return output6;
}

void SixteenBitAdder::setOutput6(bool out6) {
    output6 = out6;
}

bool SixteenBitAdder::getOutput7() const {
    return output7;
}

void SixteenBitAdder::setOutput7(bool out7) {
    output7 = out7;
}

bool SixteenBitAdder::getOutput8() const {
    return output8;
}

void SixteenBitAdder::setOutput8(bool out8) {
    output8 = out8;
}

bool SixteenBitAdder::getOutput9() const {
    return output9;
}

void SixteenBitAdder::setOutput9(bool out9) {
    output9 = out9;
}

bool SixteenBitAdder::getOutput10() const {
    return output10;
}

void SixteenBitAdder::setOutput10(bool out10) {
    output10 = out10;
}

bool SixteenBitAdder::getOutput11() const {
    return output11;
}

void SixteenBitAdder::setOutput11(bool out11) {
    output11 = out11;
}

bool SixteenBitAdder::getOutput12() const {
    return output12;
}

void SixteenBitAdder::setOutput12(bool out12) {
    output12 = out12;
}

bool SixteenBitAdder::getOutput13() const {
    return output13;
}

void SixteenBitAdder::setOutput13(bool out13) {
    output13 = out13;
}

bool SixteenBitAdder::getOutput14() const {
    return output14;
}

void SixteenBitAdder::setOutput14(bool out14) {
    output14 = out14;
}

bool SixteenBitAdder::getOutput15() const {
    return output15;
}

void SixteenBitAdder::setOutput15(bool out15) {
    output15 = out15;
}

bool SixteenBitAdder::getOutput16() const {
    return output16;
}

void SixteenBitAdder::setOutput16(bool out16) {
    output16 = out16;
}

bool SixteenBitAdder::getCarryOut() const {
    return carryOut;
}

void SixteenBitAdder::setCarryOut(bool myCarryOut) {
    carryOut = myCarryOut;
}

EightBitAdder *SixteenBitAdder::getBitsOneThroughEight8Ba() const {
    return bitsOneThroughEight8BA;
}

void SixteenBitAdder::setBitsOneThroughEight8Ba(EightBitAdder *bitsOneThroughEight8Ba) {
    bitsOneThroughEight8BA = bitsOneThroughEight8Ba;
}

EightBitAdder *SixteenBitAdder::getBitsNineThroughSixteen8Ba() const {
    return bitsNineThroughSixteen8BA;
}

void SixteenBitAdder::setBitsNineThroughSixteen8Ba(EightBitAdder *bitsNineThroughSixteen8Ba) {
    bitsNineThroughSixteen8BA = bitsNineThroughSixteen8Ba;
}

std::vector<bool> SixteenBitAdder::answer() {


    bitsOneThroughEight8BA->setCarryIn(carryIn);

    bitsOneThroughEight8BA->setInputX1(inputX1);
    bitsOneThroughEight8BA->setInputX2(inputX2);
    bitsOneThroughEight8BA->setInputX3(inputX3);
    bitsOneThroughEight8BA->setInputX4(inputX4);
    bitsOneThroughEight8BA->setInputX5(inputX5);
    bitsOneThroughEight8BA->setInputX6(inputX6);
    bitsOneThroughEight8BA->setInputX7(inputX7);
    bitsOneThroughEight8BA->setInputX8(inputX8);

    bitsOneThroughEight8BA->setInputY1(inputY1);
    bitsOneThroughEight8BA->setInputY2(inputY2);
    bitsOneThroughEight8BA->setInputY3(inputY3);
    bitsOneThroughEight8BA->setInputY4(inputY4);
    bitsOneThroughEight8BA->setInputY5(inputY5);
    bitsOneThroughEight8BA->setInputY6(inputY6);
    bitsOneThroughEight8BA->setInputY7(inputY7);
    bitsOneThroughEight8BA->setInputY8(inputY8);
    bitsOneThroughEight8BA->answer();

    output1 = bitsOneThroughEight8BA->getSumOneOut();
    output2 = bitsOneThroughEight8BA->getSumTwoOut();
    output3 = bitsOneThroughEight8BA->getSumThreeOut();
    output4 = bitsOneThroughEight8BA->getSumFourOut();
    output5 = bitsOneThroughEight8BA->getSumFiveOut();
    output6 = bitsOneThroughEight8BA->getSumSixOut();
    output7 = bitsOneThroughEight8BA->getSumSevenOut();
    output8 = bitsOneThroughEight8BA->getSumEightOut();

    bitsNineThroughSixteen8BA->setCarryIn(bitsOneThroughEight8BA->getCarryOut());

    bitsNineThroughSixteen8BA->setInputX1(inputX9);
    bitsNineThroughSixteen8BA->setInputX2(inputX10);
    bitsNineThroughSixteen8BA->setInputX3(inputX11);
    bitsNineThroughSixteen8BA->setInputX4(inputX12);
    bitsNineThroughSixteen8BA->setInputX5(inputX13);
    bitsNineThroughSixteen8BA->setInputX6(inputX14);
    bitsNineThroughSixteen8BA->setInputX7(inputX15);
    bitsNineThroughSixteen8BA->setInputX8(inputX16);

    bitsNineThroughSixteen8BA->setInputY1(inputY9);
    bitsNineThroughSixteen8BA->setInputY2(inputY10);
    bitsNineThroughSixteen8BA->setInputY3(inputY11);
    bitsNineThroughSixteen8BA->setInputY4(inputY12);
    bitsNineThroughSixteen8BA->setInputY5(inputY13);
    bitsNineThroughSixteen8BA->setInputY6(inputY14);
    bitsNineThroughSixteen8BA->setInputY7(inputY15);
    bitsNineThroughSixteen8BA->setInputY8(inputY16);
    bitsNineThroughSixteen8BA-> answer();

    output9 = bitsNineThroughSixteen8BA->getSumOneOut();
    output10 = bitsNineThroughSixteen8BA->getSumTwoOut();
    output11 = bitsNineThroughSixteen8BA->getSumThreeOut();
    output12 = bitsNineThroughSixteen8BA->getSumFourOut();
    output13 = bitsNineThroughSixteen8BA->getSumFiveOut();
    output14 = bitsNineThroughSixteen8BA->getSumSixOut();
    output15 = bitsNineThroughSixteen8BA->getSumSevenOut();
    output16 = bitsNineThroughSixteen8BA->getSumEightOut();

    carryOut = bitsNineThroughSixteen8BA->getCarryOut();

    return {carryOut,output16,output15,output14,output13,output12,output11,output10,output9,
            output8,output7,output6,output5,output4,output3,output2,output1};
}