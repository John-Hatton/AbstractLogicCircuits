//
// Created by snake on 12/10/2022.
//
#pragma once


#include "EightBitAdder.h"

/**
 * The Sixteen Bit Adder Class TODO: .. Finish documentation!!!
 */
class SixteenBitAdder {

private:

    bool carryIn;

    bool inputX1;
    bool inputX2;
    bool inputX3;
    bool inputX4;
    bool inputX5;
    bool inputX6;
    bool inputX7;
    bool inputX8;
    bool inputX9;
    bool inputX10;
    bool inputX11;
    bool inputX12;
    bool inputX13;
    bool inputX14;
    bool inputX15;
    bool inputX16;

    bool inputY1;
    bool inputY2;
    bool inputY3;
    bool inputY4;
    bool inputY5;
    bool inputY6;
    bool inputY7;
    bool inputY8;
    bool inputY9;
    bool inputY10;
    bool inputY11;
    bool inputY12;
    bool inputY13;
    bool inputY14;
    bool inputY15;
    bool inputY16;

    bool output1;
    bool output2;
    bool output3;
    bool output4;
    bool output5;
    bool output6;
    bool output7;
    bool output8;
    bool output9;
    bool output10;
    bool output11;
    bool output12;
    bool output13;
    bool output14;
    bool output15;
    bool output16;

    bool carryOut;

    EightBitAdder* bitsOneThroughEight8BA;

    EightBitAdder* bitsNineThroughSixteen8BA;


public:

    SixteenBitAdder();

    bool getCarryIn() const;

    void setCarryIn(bool myCarryIn);

    bool getInputX1() const;

    void setInputX1(bool inX1);

    bool getInputX2() const;

    void setInputX2(bool inX2);

    bool getInputX3() const;

    void setInputX3(bool inX3);

    bool getInputX4() const;

    void setInputX4(bool inX4);

    bool getInputX5() const;

    void setInputX5(bool inX5);

    bool getInputX6() const;

    void setInputX6(bool inX6);

    bool getInputX7() const;

    void setInputX7(bool inX7);

    bool getInputX8() const;

    void setInputX8(bool inX8);

    bool getInputX9() const;

    void setInputX9(bool inX9);

    bool getInputX10() const;

    void setInputX10(bool inX10);

    bool getInputX11() const;

    void setInputX11(bool inX11);

    bool getInputX12() const;

    void setInputX12(bool inX12);

    bool getInputX13() const;

    void setInputX13(bool inX13);

    bool getInputX14() const;

    void setInputX14(bool inX14);

    bool getInputX15() const;

    void setInputX15(bool inX15);

    bool getInputX16() const;

    void setInputX16(bool inX16);

    bool getInputY1() const;

    void setInputY1(bool inY1);

    bool getInputY2() const;

    void setInputY2(bool inY2);

    bool getInputY3() const;

    void setInputY3(bool inY3);

    bool getInputY4() const;

    void setInputY4(bool inY4);

    bool getInputY5() const;

    void setInputY5(bool inY5);

    bool getInputY6() const;

    void setInputY6(bool inY6);

    bool getInputY7() const;

    void setInputY7(bool inY7);

    bool getInputY8() const;

    void setInputY8(bool inY8);

    bool getInputY9() const;

    void setInputY9(bool inY9);

    bool getInputY10() const;

    void setInputY10(bool inY10);

    bool getInputY11() const;

    void setInputY11(bool inY11);

    bool getInputY12() const;

    void setInputY12(bool inY12);

    bool getInputY13() const;

    void setInputY13(bool inY13);

    bool getInputY14() const;

    void setInputY14(bool inY14);

    bool getInputY15() const;

    void setInputY15(bool inY15);

    bool getInputY16() const;

    void setInputY16(bool inY16);

    bool getOutput1() const;

    void setOutput1(bool out1);

    bool getOutput2() const;

    void setOutput2(bool out2);

    bool getOutput3() const;

    void setOutput3(bool out3);

    bool getOutput4() const;

    void setOutput4(bool out4);

    bool getOutput5() const;

    void setOutput5(bool out5);

    bool getOutput6() const;

    void setOutput6(bool out6);

    bool getOutput7() const;

    void setOutput7(bool out7);

    bool getOutput8() const;

    void setOutput8(bool out8);

    bool getOutput9() const;

    void setOutput9(bool out9);

    bool getOutput10() const;

    void setOutput10(bool out10);

    bool getOutput11() const;

    void setOutput11(bool out11);

    bool getOutput12() const;

    void setOutput12(bool out12);

    bool getOutput13() const;

    void setOutput13(bool out13);

    bool getOutput14() const;

    void setOutput14(bool out14);

    bool getOutput15() const;

    void setOutput15(bool out15);

    bool getOutput16() const;

    void setOutput16(bool out16);

    bool getCarryOut() const;

    void setCarryOut(bool carryOut);

    EightBitAdder *getBitsOneThroughEight8Ba() const;

    void setBitsOneThroughEight8Ba(EightBitAdder *bitsOneThroughEight8Ba);

    EightBitAdder *getBitsNineThroughSixteen8Ba() const;

    void setBitsNineThroughSixteen8Ba(EightBitAdder *bitsNineThroughSixteen8Ba);

    std::vector<bool> answer();
};
