//
// Created by snake on 12/11/2022.
//
#pragma once


#include <vector>
#include "LogicGates/QuadInputNandGate.h"
#include "LogicGates/TriInvertedAndGate.h"
#include "LogicGates/NotGate.h"
#include "LogicGates/InvertedBufferGate.h"

class ThreeToEightLineDecoder {

private:

    bool enableInputG1;

    bool enableInputG2A;

    bool enableInputG2B;

    bool inputA;

    bool inputB;

    bool inputC;

    NotGate* enableNotG1;

    TriInvertedAndGate* enableInputs3InvAnd;

    NotGate* selectInputNotA;

    NotGate* selectInputNotB;

    NotGate* selectInputNotC;

    InvertedBufferGate* selectInputIBA;

    InvertedBufferGate* selectInputIBB;

    InvertedBufferGate* selectInputIBC;


    QuadInputNandGate* quadInNandY0;

    QuadInputNandGate* quadInNandY1;

    QuadInputNandGate* quadInNandY2;

    QuadInputNandGate* quadInNandY3;

    QuadInputNandGate* quadInNandY4;

    QuadInputNandGate* quadInNandY5;

    QuadInputNandGate* quadInNandY6;

    QuadInputNandGate* quadInNandY7;

public:

    ThreeToEightLineDecoder();

    bool isEnableInputG1() const;

    void setEnableInputG1(bool enableInputG1);

    bool isEnableInputG2A() const;

    void setEnableInputG2A(bool enableInputG2A);

    bool isEnableInputG2B() const;

    void setEnableInputG2B(bool enableInputG2B);

    bool isInputA() const;

    void setInputA(bool inputA);

    bool isInputB() const;

    void setInputB(bool inputB);

    bool isInputC() const;

    void setInputC(bool inputC);

    NotGate *getEnableNotG1() const;

    void setEnableNotG1(NotGate *enableNotG1);

    TriInvertedAndGate *getEnableInputs3InvAnd() const;

    void setEnableInputs3InvAnd(TriInvertedAndGate *enableInputs3InvAnd);

    NotGate *getSelectInputNotA() const;

    void setSelectInputNotA(NotGate *selectInputNotA);

    NotGate *getSelectInputNotB() const;

    void setSelectInputNotB(NotGate *selectInputNotB);

    NotGate *getSelectInputNotC() const;

    void setSelectInputNotC(NotGate *selectInputNotC);

    InvertedBufferGate *getSelectInputIba() const;

    void setSelectInputIba(InvertedBufferGate *selectInputIba);

    InvertedBufferGate *getSelectInputIbb() const;

    void setSelectInputIbb(InvertedBufferGate *selectInputIbb);

    InvertedBufferGate *getSelectInputIbc() const;

    void setSelectInputIbc(InvertedBufferGate *selectInputIbc);

    QuadInputNandGate *getQuadInNandY0() const;

    void setQuadInNandY0(QuadInputNandGate *quadInNandY0);

    QuadInputNandGate *getQuadInNandY1() const;

    void setQuadInNandY1(QuadInputNandGate *quadInNandY1);

    QuadInputNandGate *getQuadInNandY2() const;

    void setQuadInNandY2(QuadInputNandGate *quadInNandY2);

    QuadInputNandGate *getQuadInNandY3() const;

    void setQuadInNandY3(QuadInputNandGate *quadInNandY3);

    QuadInputNandGate *getQuadInNandY4() const;

    void setQuadInNandY4(QuadInputNandGate *quadInNandY4);

    QuadInputNandGate *getQuadInNandY5() const;

    void setQuadInNandY5(QuadInputNandGate *quadInNandY5);

    QuadInputNandGate *getQuadInNandY6() const;

    void setQuadInNandY6(QuadInputNandGate *quadInNandY6);

    QuadInputNandGate *getQuadInNandY7() const;

    void setQuadInNandY7(QuadInputNandGate *quadInNandY7);

    std::vector<bool> currentState();
};
