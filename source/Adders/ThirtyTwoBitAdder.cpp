//
// Created by snake on 12/10/2022.
//

#include "Adders/ThirtyTwoBitAdder.h"

ThirtyTwoBitAdder::ThirtyTwoBitAdder() {
    carryIn = false;
    bitsOneThroughSixteen16BA           = new SixteenBitAdder();
    bitsSeventeenThroughThirtyTwo16BA   = new SixteenBitAdder();
}

bool ThirtyTwoBitAdder::getCarryIn() const {
    return carryIn;
}

void ThirtyTwoBitAdder::setCarryIn(bool carryIn) {
    ThirtyTwoBitAdder::carryIn = carryIn;
}

bool ThirtyTwoBitAdder::getInputX1() const {
    return inputX1;
}

void ThirtyTwoBitAdder::setInputX1(bool inputX1) {
    ThirtyTwoBitAdder::inputX1 = inputX1;
}

bool ThirtyTwoBitAdder::getInputX2() const {
    return inputX2;
}

void ThirtyTwoBitAdder::setInputX2(bool inputX2) {
    ThirtyTwoBitAdder::inputX2 = inputX2;
}

bool ThirtyTwoBitAdder::getInputX3() const {
    return inputX3;
}

void ThirtyTwoBitAdder::setInputX3(bool inputX3) {
    ThirtyTwoBitAdder::inputX3 = inputX3;
}

bool ThirtyTwoBitAdder::getInputX4() const {
    return inputX4;
}

void ThirtyTwoBitAdder::setInputX4(bool inputX4) {
    ThirtyTwoBitAdder::inputX4 = inputX4;
}

bool ThirtyTwoBitAdder::getInputX5() const {
    return inputX5;
}

void ThirtyTwoBitAdder::setInputX5(bool inputX5) {
    ThirtyTwoBitAdder::inputX5 = inputX5;
}

bool ThirtyTwoBitAdder::getInputX6() const {
    return inputX6;
}

void ThirtyTwoBitAdder::setInputX6(bool inputX6) {
    ThirtyTwoBitAdder::inputX6 = inputX6;
}

bool ThirtyTwoBitAdder::getInputX7() const {
    return inputX7;
}

void ThirtyTwoBitAdder::setInputX7(bool inputX7) {
    ThirtyTwoBitAdder::inputX7 = inputX7;
}

bool ThirtyTwoBitAdder::getInputX8() const {
    return inputX8;
}

void ThirtyTwoBitAdder::setInputX8(bool inputX8) {
    ThirtyTwoBitAdder::inputX8 = inputX8;
}

bool ThirtyTwoBitAdder::getInputX9() const {
    return inputX9;
}

void ThirtyTwoBitAdder::setInputX9(bool inputX9) {
    ThirtyTwoBitAdder::inputX9 = inputX9;
}

bool ThirtyTwoBitAdder::getInputX10() const {
    return inputX10;
}

void ThirtyTwoBitAdder::setInputX10(bool inputX10) {
    ThirtyTwoBitAdder::inputX10 = inputX10;
}

bool ThirtyTwoBitAdder::getInputX11() const {
    return inputX11;
}

void ThirtyTwoBitAdder::setInputX11(bool inputX11) {
    ThirtyTwoBitAdder::inputX11 = inputX11;
}

bool ThirtyTwoBitAdder::getInputX12() const {
    return inputX12;
}

void ThirtyTwoBitAdder::setInputX12(bool inputX12) {
    ThirtyTwoBitAdder::inputX12 = inputX12;
}

bool ThirtyTwoBitAdder::getInputX13() const {
    return inputX13;
}

void ThirtyTwoBitAdder::setInputX13(bool inputX13) {
    ThirtyTwoBitAdder::inputX13 = inputX13;
}

bool ThirtyTwoBitAdder::getInputX14() const {
    return inputX14;
}

void ThirtyTwoBitAdder::setInputX14(bool inputX14) {
    ThirtyTwoBitAdder::inputX14 = inputX14;
}

bool ThirtyTwoBitAdder::getInputX15() const {
    return inputX15;
}

void ThirtyTwoBitAdder::setInputX15(bool inputX15) {
    ThirtyTwoBitAdder::inputX15 = inputX15;
}

bool ThirtyTwoBitAdder::getInputX16() const {
    return inputX16;
}

void ThirtyTwoBitAdder::setInputX16(bool inputX16) {
    ThirtyTwoBitAdder::inputX16 = inputX16;
}

bool ThirtyTwoBitAdder::getInputX17() const {
    return inputX17;
}

void ThirtyTwoBitAdder::setInputX17(bool inputX17) {
    ThirtyTwoBitAdder::inputX17 = inputX17;
}

bool ThirtyTwoBitAdder::getInputX18() const {
    return inputX18;
}

void ThirtyTwoBitAdder::setInputX18(bool inputX18) {
    ThirtyTwoBitAdder::inputX18 = inputX18;
}

bool ThirtyTwoBitAdder::getInputX19() const {
    return inputX19;
}

void ThirtyTwoBitAdder::setInputX19(bool inputX19) {
    ThirtyTwoBitAdder::inputX19 = inputX19;
}

bool ThirtyTwoBitAdder::getInputX20() const {
    return inputX20;
}

void ThirtyTwoBitAdder::setInputX20(bool inputX20) {
    ThirtyTwoBitAdder::inputX20 = inputX20;
}

bool ThirtyTwoBitAdder::getInputX21() const {
    return inputX21;
}

void ThirtyTwoBitAdder::setInputX21(bool inputX21) {
    ThirtyTwoBitAdder::inputX21 = inputX21;
}

bool ThirtyTwoBitAdder::getInputX22() const {
    return inputX22;
}

void ThirtyTwoBitAdder::setInputX22(bool inputX22) {
    ThirtyTwoBitAdder::inputX22 = inputX22;
}

bool ThirtyTwoBitAdder::getInputX23() const {
    return inputX23;
}

void ThirtyTwoBitAdder::setInputX23(bool inputX23) {
    ThirtyTwoBitAdder::inputX23 = inputX23;
}

bool ThirtyTwoBitAdder::getInputX24() const {
    return inputX24;
}

void ThirtyTwoBitAdder::setInputX24(bool inputX24) {
    ThirtyTwoBitAdder::inputX24 = inputX24;
}

bool ThirtyTwoBitAdder::getInputX25() const {
    return inputX25;
}

void ThirtyTwoBitAdder::setInputX25(bool inputX25) {
    ThirtyTwoBitAdder::inputX25 = inputX25;
}

bool ThirtyTwoBitAdder::getInputX26() const {
    return inputX26;
}

void ThirtyTwoBitAdder::setInputX26(bool inputX26) {
    ThirtyTwoBitAdder::inputX26 = inputX26;
}

bool ThirtyTwoBitAdder::getInputX27() const {
    return inputX27;
}

void ThirtyTwoBitAdder::setInputX27(bool inputX27) {
    ThirtyTwoBitAdder::inputX27 = inputX27;
}

bool ThirtyTwoBitAdder::getInputX28() const {
    return inputX28;
}

void ThirtyTwoBitAdder::setInputX28(bool inputX28) {
    ThirtyTwoBitAdder::inputX28 = inputX28;
}

bool ThirtyTwoBitAdder::getInputX29() const {
    return inputX29;
}

void ThirtyTwoBitAdder::setInputX29(bool inputX29) {
    ThirtyTwoBitAdder::inputX29 = inputX29;
}

bool ThirtyTwoBitAdder::getInputX30() const {
    return inputX30;
}

void ThirtyTwoBitAdder::setInputX30(bool inputX30) {
    ThirtyTwoBitAdder::inputX30 = inputX30;
}

bool ThirtyTwoBitAdder::getInputX31() const {
    return inputX31;
}

void ThirtyTwoBitAdder::setInputX31(bool inputX31) {
    ThirtyTwoBitAdder::inputX31 = inputX31;
}

bool ThirtyTwoBitAdder::getInputX32() const {
    return inputX32;
}

void ThirtyTwoBitAdder::setInputX32(bool inputX32) {
    ThirtyTwoBitAdder::inputX32 = inputX32;
}

bool ThirtyTwoBitAdder::getInputY1() const {
    return inputY1;
}

void ThirtyTwoBitAdder::setInputY1(bool inputY1) {
    ThirtyTwoBitAdder::inputY1 = inputY1;
}

bool ThirtyTwoBitAdder::getInputY2() const {
    return inputY2;
}

void ThirtyTwoBitAdder::setInputY2(bool inputY2) {
    ThirtyTwoBitAdder::inputY2 = inputY2;
}

bool ThirtyTwoBitAdder::getInputY3() const {
    return inputY3;
}

void ThirtyTwoBitAdder::setInputY3(bool inputY3) {
    ThirtyTwoBitAdder::inputY3 = inputY3;
}

bool ThirtyTwoBitAdder::getInputY4() const {
    return inputY4;
}

void ThirtyTwoBitAdder::setInputY4(bool inputY4) {
    ThirtyTwoBitAdder::inputY4 = inputY4;
}

bool ThirtyTwoBitAdder::getInputY5() const {
    return inputY5;
}

void ThirtyTwoBitAdder::setInputY5(bool inputY5) {
    ThirtyTwoBitAdder::inputY5 = inputY5;
}

bool ThirtyTwoBitAdder::getInputY6() const {
    return inputY6;
}

void ThirtyTwoBitAdder::setInputY6(bool inputY6) {
    ThirtyTwoBitAdder::inputY6 = inputY6;
}

bool ThirtyTwoBitAdder::getInputY7() const {
    return inputY7;
}

void ThirtyTwoBitAdder::setInputY7(bool inputY7) {
    ThirtyTwoBitAdder::inputY7 = inputY7;
}

bool ThirtyTwoBitAdder::getInputY8() const {
    return inputY8;
}

void ThirtyTwoBitAdder::setInputY8(bool inputY8) {
    ThirtyTwoBitAdder::inputY8 = inputY8;
}

bool ThirtyTwoBitAdder::getInputY9() const {
    return inputY9;
}

void ThirtyTwoBitAdder::setInputY9(bool inputY9) {
    ThirtyTwoBitAdder::inputY9 = inputY9;
}

bool ThirtyTwoBitAdder::getInputY10() const {
    return inputY10;
}

void ThirtyTwoBitAdder::setInputY10(bool inputY10) {
    ThirtyTwoBitAdder::inputY10 = inputY10;
}

bool ThirtyTwoBitAdder::getInputY11() const {
    return inputY11;
}

void ThirtyTwoBitAdder::setInputY11(bool inputY11) {
    ThirtyTwoBitAdder::inputY11 = inputY11;
}

bool ThirtyTwoBitAdder::getInputY12() const {
    return inputY12;
}

void ThirtyTwoBitAdder::setInputY12(bool inputY12) {
    ThirtyTwoBitAdder::inputY12 = inputY12;
}

bool ThirtyTwoBitAdder::getInputY13() const {
    return inputY13;
}

void ThirtyTwoBitAdder::setInputY13(bool inputY13) {
    ThirtyTwoBitAdder::inputY13 = inputY13;
}

bool ThirtyTwoBitAdder::getInputY14() const {
    return inputY14;
}

void ThirtyTwoBitAdder::setInputY14(bool inputY14) {
    ThirtyTwoBitAdder::inputY14 = inputY14;
}

bool ThirtyTwoBitAdder::getInputY15() const {
    return inputY15;
}

void ThirtyTwoBitAdder::setInputY15(bool inputY15) {
    ThirtyTwoBitAdder::inputY15 = inputY15;
}

bool ThirtyTwoBitAdder::getInputY16() const {
    return inputY16;
}

void ThirtyTwoBitAdder::setInputY16(bool inputY16) {
    ThirtyTwoBitAdder::inputY16 = inputY16;
}

bool ThirtyTwoBitAdder::getInputY17() const {
    return inputY17;
}

void ThirtyTwoBitAdder::setInputY17(bool inputY17) {
    ThirtyTwoBitAdder::inputY17 = inputY17;
}

bool ThirtyTwoBitAdder::getInputY18() const {
    return inputY18;
}

void ThirtyTwoBitAdder::setInputY18(bool inputY18) {
    ThirtyTwoBitAdder::inputY18 = inputY18;
}

bool ThirtyTwoBitAdder::getInputY19() const {
    return inputY19;
}

void ThirtyTwoBitAdder::setInputY19(bool inputY19) {
    ThirtyTwoBitAdder::inputY19 = inputY19;
}

bool ThirtyTwoBitAdder::getInputY20() const {
    return inputY20;
}

void ThirtyTwoBitAdder::setInputY20(bool inputY20) {
    ThirtyTwoBitAdder::inputY20 = inputY20;
}

bool ThirtyTwoBitAdder::getInputY21() const {
    return inputY21;
}

void ThirtyTwoBitAdder::setInputY21(bool inputY21) {
    ThirtyTwoBitAdder::inputY21 = inputY21;
}

bool ThirtyTwoBitAdder::getInputY22() const {
    return inputY22;
}

void ThirtyTwoBitAdder::setInputY22(bool inputY22) {
    ThirtyTwoBitAdder::inputY22 = inputY22;
}

bool ThirtyTwoBitAdder::getInputY23() const {
    return inputY23;
}

void ThirtyTwoBitAdder::setInputY23(bool inputY23) {
    ThirtyTwoBitAdder::inputY23 = inputY23;
}

bool ThirtyTwoBitAdder::getInputY24() const {
    return inputY24;
}

void ThirtyTwoBitAdder::setInputY24(bool inputY24) {
    ThirtyTwoBitAdder::inputY24 = inputY24;
}

bool ThirtyTwoBitAdder::getInputY25() const {
    return inputY25;
}

void ThirtyTwoBitAdder::setInputY25(bool inputY25) {
    ThirtyTwoBitAdder::inputY25 = inputY25;
}

bool ThirtyTwoBitAdder::getInputY26() const {
    return inputY26;
}

void ThirtyTwoBitAdder::setInputY26(bool inputY26) {
    ThirtyTwoBitAdder::inputY26 = inputY26;
}

bool ThirtyTwoBitAdder::getInputY27() const {
    return inputY27;
}

void ThirtyTwoBitAdder::setInputY27(bool inputY27) {
    ThirtyTwoBitAdder::inputY27 = inputY27;
}

bool ThirtyTwoBitAdder::getInputY28() const {
    return inputY28;
}

void ThirtyTwoBitAdder::setInputY28(bool inputY28) {
    ThirtyTwoBitAdder::inputY28 = inputY28;
}

bool ThirtyTwoBitAdder::getInputY29() const {
    return inputY29;
}

void ThirtyTwoBitAdder::setInputY29(bool inputY29) {
    ThirtyTwoBitAdder::inputY29 = inputY29;
}

bool ThirtyTwoBitAdder::getInputY30() const {
    return inputY30;
}

void ThirtyTwoBitAdder::setInputY30(bool inputY30) {
    ThirtyTwoBitAdder::inputY30 = inputY30;
}

bool ThirtyTwoBitAdder::getInputY31() const {
    return inputY31;
}

void ThirtyTwoBitAdder::setInputY31(bool inputY31) {
    ThirtyTwoBitAdder::inputY31 = inputY31;
}

bool ThirtyTwoBitAdder::getInputY32() const {
    return inputY32;
}

void ThirtyTwoBitAdder::setInputY32(bool inputY32) {
    ThirtyTwoBitAdder::inputY32 = inputY32;
}

bool ThirtyTwoBitAdder::getCarryOut() const {
    return carryOut;
}

void ThirtyTwoBitAdder::setCarryOut(bool carryOut) {
    ThirtyTwoBitAdder::carryOut = carryOut;
}

SixteenBitAdder *ThirtyTwoBitAdder::getBitsOneThroughSixteen16Ba() const {
    return bitsOneThroughSixteen16BA;
}

void ThirtyTwoBitAdder::setBitsOneThroughSixteen16Ba(SixteenBitAdder *bitsOneThroughSixteen16Ba) {
    bitsOneThroughSixteen16BA = bitsOneThroughSixteen16Ba;
}

SixteenBitAdder *ThirtyTwoBitAdder::getBitsSeventeenThroughThirtyTwo16Ba() const {
    return bitsSeventeenThroughThirtyTwo16BA;
}

void ThirtyTwoBitAdder::setBitsSeventeenThroughThirtyTwo16Ba(SixteenBitAdder *bitsSeventeenThroughThirtyTwo16Ba) {
    bitsSeventeenThroughThirtyTwo16BA = bitsSeventeenThroughThirtyTwo16Ba;
}

bool ThirtyTwoBitAdder::isOutput1() const {
    return output1;
}

void ThirtyTwoBitAdder::setOutput1(bool output1) {
    ThirtyTwoBitAdder::output1 = output1;
}

bool ThirtyTwoBitAdder::isOutput2() const {
    return output2;
}

void ThirtyTwoBitAdder::setOutput2(bool output2) {
    ThirtyTwoBitAdder::output2 = output2;
}

bool ThirtyTwoBitAdder::isOutput3() const {
    return output3;
}

void ThirtyTwoBitAdder::setOutput3(bool output3) {
    ThirtyTwoBitAdder::output3 = output3;
}

bool ThirtyTwoBitAdder::isOutput4() const {
    return output4;
}

void ThirtyTwoBitAdder::setOutput4(bool output4) {
    ThirtyTwoBitAdder::output4 = output4;
}

bool ThirtyTwoBitAdder::isOutput5() const {
    return output5;
}

void ThirtyTwoBitAdder::setOutput5(bool output5) {
    ThirtyTwoBitAdder::output5 = output5;
}

bool ThirtyTwoBitAdder::isOutput6() const {
    return output6;
}

void ThirtyTwoBitAdder::setOutput6(bool output6) {
    ThirtyTwoBitAdder::output6 = output6;
}

bool ThirtyTwoBitAdder::isOutput7() const {
    return output7;
}

void ThirtyTwoBitAdder::setOutput7(bool output7) {
    ThirtyTwoBitAdder::output7 = output7;
}

bool ThirtyTwoBitAdder::isOutput8() const {
    return output8;
}

void ThirtyTwoBitAdder::setOutput8(bool output8) {
    ThirtyTwoBitAdder::output8 = output8;
}

bool ThirtyTwoBitAdder::isOutput9() const {
    return output9;
}

void ThirtyTwoBitAdder::setOutput9(bool output9) {
    ThirtyTwoBitAdder::output9 = output9;
}

bool ThirtyTwoBitAdder::isOutput10() const {
    return output10;
}

void ThirtyTwoBitAdder::setOutput10(bool output10) {
    ThirtyTwoBitAdder::output10 = output10;
}

bool ThirtyTwoBitAdder::isOutput11() const {
    return output11;
}

void ThirtyTwoBitAdder::setOutput11(bool output11) {
    ThirtyTwoBitAdder::output11 = output11;
}

bool ThirtyTwoBitAdder::isOutput12() const {
    return output12;
}

void ThirtyTwoBitAdder::setOutput12(bool output12) {
    ThirtyTwoBitAdder::output12 = output12;
}

bool ThirtyTwoBitAdder::isOutput13() const {
    return output13;
}

void ThirtyTwoBitAdder::setOutput13(bool output13) {
    ThirtyTwoBitAdder::output13 = output13;
}

bool ThirtyTwoBitAdder::isOutput14() const {
    return output14;
}

void ThirtyTwoBitAdder::setOutput14(bool output14) {
    ThirtyTwoBitAdder::output14 = output14;
}

bool ThirtyTwoBitAdder::isOutput15() const {
    return output15;
}

void ThirtyTwoBitAdder::setOutput15(bool output15) {
    ThirtyTwoBitAdder::output15 = output15;
}

bool ThirtyTwoBitAdder::isOutput16() const {
    return output16;
}

void ThirtyTwoBitAdder::setOutput16(bool output16) {
    ThirtyTwoBitAdder::output16 = output16;
}

bool ThirtyTwoBitAdder::isOutput17() const {
    return output17;
}

void ThirtyTwoBitAdder::setOutput17(bool output17) {
    ThirtyTwoBitAdder::output17 = output17;
}

bool ThirtyTwoBitAdder::isOutput18() const {
    return output18;
}

void ThirtyTwoBitAdder::setOutput18(bool output18) {
    ThirtyTwoBitAdder::output18 = output18;
}

bool ThirtyTwoBitAdder::isOutput19() const {
    return output19;
}

void ThirtyTwoBitAdder::setOutput19(bool output19) {
    ThirtyTwoBitAdder::output19 = output19;
}

bool ThirtyTwoBitAdder::isOutput20() const {
    return output20;
}

void ThirtyTwoBitAdder::setOutput20(bool output20) {
    ThirtyTwoBitAdder::output20 = output20;
}

bool ThirtyTwoBitAdder::isOutput21() const {
    return output21;
}

void ThirtyTwoBitAdder::setOutput21(bool output21) {
    ThirtyTwoBitAdder::output21 = output21;
}

bool ThirtyTwoBitAdder::isOutput22() const {
    return output22;
}

void ThirtyTwoBitAdder::setOutput22(bool output22) {
    ThirtyTwoBitAdder::output22 = output22;
}

bool ThirtyTwoBitAdder::isOutput23() const {
    return output23;
}

void ThirtyTwoBitAdder::setOutput23(bool output23) {
    ThirtyTwoBitAdder::output23 = output23;
}

bool ThirtyTwoBitAdder::isOutput24() const {
    return output24;
}

void ThirtyTwoBitAdder::setOutput24(bool output24) {
    ThirtyTwoBitAdder::output24 = output24;
}

bool ThirtyTwoBitAdder::isOutput25() const {
    return output25;
}

void ThirtyTwoBitAdder::setOutput25(bool output25) {
    ThirtyTwoBitAdder::output25 = output25;
}

bool ThirtyTwoBitAdder::isOutput26() const {
    return output26;
}

void ThirtyTwoBitAdder::setOutput26(bool output26) {
    ThirtyTwoBitAdder::output26 = output26;
}

bool ThirtyTwoBitAdder::isOutput27() const {
    return output27;
}

void ThirtyTwoBitAdder::setOutput27(bool output27) {
    ThirtyTwoBitAdder::output27 = output27;
}

bool ThirtyTwoBitAdder::isOutput28() const {
    return output28;
}

void ThirtyTwoBitAdder::setOutput28(bool output28) {
    ThirtyTwoBitAdder::output28 = output28;
}

bool ThirtyTwoBitAdder::isOutput29() const {
    return output29;
}

void ThirtyTwoBitAdder::setOutput29(bool output29) {
    ThirtyTwoBitAdder::output29 = output29;
}

bool ThirtyTwoBitAdder::isOutput30() const {
    return output30;
}

void ThirtyTwoBitAdder::setOutput30(bool output30) {
    ThirtyTwoBitAdder::output30 = output30;
}

bool ThirtyTwoBitAdder::isOutput31() const {
    return output31;
}

void ThirtyTwoBitAdder::setOutput31(bool output31) {
    ThirtyTwoBitAdder::output31 = output31;
}

bool ThirtyTwoBitAdder::isOutput32() const {
    return output32;
}

void ThirtyTwoBitAdder::setOutput32(bool output32) {
    ThirtyTwoBitAdder::output32 = output32;
}


std::vector<bool> ThirtyTwoBitAdder::answer() {
    std::vector<bool> retVal = {};

    bitsOneThroughSixteen16BA->setCarryIn(carryIn);

    bitsOneThroughSixteen16BA->setInputX1(inputX1);
    bitsOneThroughSixteen16BA->setInputX2(inputX2);
    bitsOneThroughSixteen16BA->setInputX3(inputX3);
    bitsOneThroughSixteen16BA->setInputX4(inputX4);
    bitsOneThroughSixteen16BA->setInputX5(inputX5);
    bitsOneThroughSixteen16BA->setInputX6(inputX6);
    bitsOneThroughSixteen16BA->setInputX7(inputX7);
    bitsOneThroughSixteen16BA->setInputX8(inputX8);
    bitsOneThroughSixteen16BA->setInputX9(inputX9);
    bitsOneThroughSixteen16BA->setInputX10(inputX10);
    bitsOneThroughSixteen16BA->setInputX11(inputX11);
    bitsOneThroughSixteen16BA->setInputX12(inputX12);
    bitsOneThroughSixteen16BA->setInputX13(inputX13);
    bitsOneThroughSixteen16BA->setInputX14(inputX14);
    bitsOneThroughSixteen16BA->setInputX15(inputX15);
    bitsOneThroughSixteen16BA->setInputX16(inputX16);

    bitsOneThroughSixteen16BA->setInputY1(inputY1);
    bitsOneThroughSixteen16BA->setInputY2(inputY2);
    bitsOneThroughSixteen16BA->setInputY3(inputY3);
    bitsOneThroughSixteen16BA->setInputY4(inputY4);
    bitsOneThroughSixteen16BA->setInputY5(inputY5);
    bitsOneThroughSixteen16BA->setInputY6(inputY6);
    bitsOneThroughSixteen16BA->setInputY7(inputY7);
    bitsOneThroughSixteen16BA->setInputY8(inputY8);
    bitsOneThroughSixteen16BA->setInputY9(inputY9);
    bitsOneThroughSixteen16BA->setInputY10(inputY10);
    bitsOneThroughSixteen16BA->setInputY11(inputY11);
    bitsOneThroughSixteen16BA->setInputY12(inputY12);
    bitsOneThroughSixteen16BA->setInputY13(inputY13);
    bitsOneThroughSixteen16BA->setInputY14(inputY14);
    bitsOneThroughSixteen16BA->setInputY15(inputY15);
    bitsOneThroughSixteen16BA->setInputY16(inputY16);
    bitsOneThroughSixteen16BA->answer();

    output1 = bitsOneThroughSixteen16BA->getOutput1();
    output2 = bitsOneThroughSixteen16BA->getOutput2();
    output3 = bitsOneThroughSixteen16BA->getOutput3();
    output4 = bitsOneThroughSixteen16BA->getOutput4();
    output5 = bitsOneThroughSixteen16BA->getOutput5();
    output6 = bitsOneThroughSixteen16BA->getOutput6();
    output7 = bitsOneThroughSixteen16BA->getOutput7();
    output8 = bitsOneThroughSixteen16BA->getOutput8();
    output9 = bitsOneThroughSixteen16BA->getOutput9();
    output10 = bitsOneThroughSixteen16BA->getOutput10();
    output11 = bitsOneThroughSixteen16BA->getOutput11();
    output12 = bitsOneThroughSixteen16BA->getOutput12();
    output13 = bitsOneThroughSixteen16BA->getOutput13();
    output14 = bitsOneThroughSixteen16BA->getOutput14();
    output15 = bitsOneThroughSixteen16BA->getOutput15();
    output16 = bitsOneThroughSixteen16BA->getOutput16();

    bitsSeventeenThroughThirtyTwo16BA->setCarryIn(bitsOneThroughSixteen16BA->getCarryOut());

    bitsSeventeenThroughThirtyTwo16BA->setInputX1(inputX17);
    bitsSeventeenThroughThirtyTwo16BA->setInputX2(inputX18);
    bitsSeventeenThroughThirtyTwo16BA->setInputX3(inputX19);
    bitsSeventeenThroughThirtyTwo16BA->setInputX4(inputX20);
    bitsSeventeenThroughThirtyTwo16BA->setInputX5(inputX21);
    bitsSeventeenThroughThirtyTwo16BA->setInputX6(inputX22);
    bitsSeventeenThroughThirtyTwo16BA->setInputX7(inputX23);
    bitsSeventeenThroughThirtyTwo16BA->setInputX8(inputX24);
    bitsSeventeenThroughThirtyTwo16BA->setInputX9(inputX25);
    bitsSeventeenThroughThirtyTwo16BA->setInputX10(inputX26);
    bitsSeventeenThroughThirtyTwo16BA->setInputX11(inputX27);
    bitsSeventeenThroughThirtyTwo16BA->setInputX12(inputX28);
    bitsSeventeenThroughThirtyTwo16BA->setInputX13(inputX29);
    bitsSeventeenThroughThirtyTwo16BA->setInputX14(inputX30);
    bitsSeventeenThroughThirtyTwo16BA->setInputX15(inputX31);
    bitsSeventeenThroughThirtyTwo16BA->setInputX16(inputX32);

    bitsSeventeenThroughThirtyTwo16BA->setInputY1(inputY17);
    bitsSeventeenThroughThirtyTwo16BA->setInputY2(inputY18);
    bitsSeventeenThroughThirtyTwo16BA->setInputY3(inputY19);
    bitsSeventeenThroughThirtyTwo16BA->setInputY4(inputY20);
    bitsSeventeenThroughThirtyTwo16BA->setInputY5(inputY21);
    bitsSeventeenThroughThirtyTwo16BA->setInputY6(inputY22);
    bitsSeventeenThroughThirtyTwo16BA->setInputY7(inputY23);
    bitsSeventeenThroughThirtyTwo16BA->setInputY8(inputY24);
    bitsSeventeenThroughThirtyTwo16BA->setInputY9(inputY25);
    bitsSeventeenThroughThirtyTwo16BA->setInputY10(inputY26);
    bitsSeventeenThroughThirtyTwo16BA->setInputY11(inputY27);
    bitsSeventeenThroughThirtyTwo16BA->setInputY12(inputY28);
    bitsSeventeenThroughThirtyTwo16BA->setInputY13(inputY29);
    bitsSeventeenThroughThirtyTwo16BA->setInputY14(inputY30);
    bitsSeventeenThroughThirtyTwo16BA->setInputY15(inputY31);
    bitsSeventeenThroughThirtyTwo16BA->setInputY16(inputY32);
    bitsSeventeenThroughThirtyTwo16BA->answer();

    output17 = bitsSeventeenThroughThirtyTwo16BA->getOutput1();
    output18 = bitsSeventeenThroughThirtyTwo16BA->getOutput2();
    output19 = bitsSeventeenThroughThirtyTwo16BA->getOutput3();
    output20 = bitsSeventeenThroughThirtyTwo16BA->getOutput4();
    output21 = bitsSeventeenThroughThirtyTwo16BA->getOutput5();
    output22 = bitsSeventeenThroughThirtyTwo16BA->getOutput6();
    output23 = bitsSeventeenThroughThirtyTwo16BA->getOutput7();
    output24 = bitsSeventeenThroughThirtyTwo16BA->getOutput8();
    output25 = bitsSeventeenThroughThirtyTwo16BA->getOutput9();
    output26 = bitsSeventeenThroughThirtyTwo16BA->getOutput10();
    output27 = bitsSeventeenThroughThirtyTwo16BA->getOutput11();
    output28 = bitsSeventeenThroughThirtyTwo16BA->getOutput12();
    output29 = bitsSeventeenThroughThirtyTwo16BA->getOutput13();
    output30 = bitsSeventeenThroughThirtyTwo16BA->getOutput14();
    output31 = bitsSeventeenThroughThirtyTwo16BA->getOutput15();
    output32 = bitsSeventeenThroughThirtyTwo16BA->getOutput16();

    carryOut = bitsSeventeenThroughThirtyTwo16BA->getCarryOut();

    return {
        carryOut,
        output32,output31,output30,output29,
        output28,output27,output26,output25,
        output24,output23,output22,output21,
        output20,output19,output18,output17,
        output16,output15,output14,output13,
        output12,output11,output10,output9,
        output8,output7,output6,output5,
        output4,output3,output2,output1,
    };
}