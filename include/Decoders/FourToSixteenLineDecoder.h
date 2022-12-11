//
// Created by snake on 12/11/2022.
//
#pragma once


#include "TwoToFourLineDecoder.h"
#include "LogicGates/TriInputAndGate.h"
#include "TwoToFourDecoder_without_Enable.h"

class FourToSixteenLineDecoder {

    // Write Enable

    // Inputs A-D

    // 2x4 decoder1

    // 2x4 decoder2

    // 0-F (HEX) Tri-INPUT AND Gates (x16)

private:

    bool writeEnable;

    bool inputA;

    bool inputB;

    bool inputC;

    bool inputD;

    TwoToFourDecoder_without_Enable* decoder2x4One;

    TwoToFourDecoder_without_Enable* decoder2x4Two;

    TriInputAndGate* andGate0;
    TriInputAndGate* andGate1;
    TriInputAndGate* andGate2;
    TriInputAndGate* andGate3;
    TriInputAndGate* andGate4;
    TriInputAndGate* andGate5;
    TriInputAndGate* andGate6;
    TriInputAndGate* andGate7;
    TriInputAndGate* andGate8;
    TriInputAndGate* andGate9;
    TriInputAndGate* andGateA;
    TriInputAndGate* andGateB;
    TriInputAndGate* andGateC;
    TriInputAndGate* andGateD;
    TriInputAndGate* andGateE;
    TriInputAndGate* andGateF;

    bool lineOut0;
    bool lineOut1;
    bool lineOut2;
    bool lineOut3;
    bool lineOut4;
    bool lineOut5;
    bool lineOut6;
    bool lineOut7;
    bool lineOut8;
    bool lineOut9;
    bool lineOutA;
    bool lineOutB;
    bool lineOutC;
    bool lineOutD;
    bool lineOutE;
    bool lineOutF;

public:

    FourToSixteenLineDecoder();

    FourToSixteenLineDecoder(std::vector<bool> dataInputVector, bool wEnable);

    bool getWriteEnable() const;

    void setWriteEnable(bool writeEnable);

    bool getInputA() const;

    void setInputA(bool inputA);

    bool getInputB() const;

    void setInputB(bool inputB);

    bool getInputC() const;

    void setInputC(bool inputC);

    bool getInputD() const;

    void setInputD(bool inputD);

    TwoToFourDecoder_without_Enable *getDecoder2X4One() const;

    void setDecoder2X4One(TwoToFourDecoder_without_Enable *decoder2X4One);

    TwoToFourDecoder_without_Enable *getDecoder2X4Two() const;

    void setDecoder2X4Two(TwoToFourDecoder_without_Enable *decoder2X4Two);

    TriInputAndGate *getAndGate0() const;

    void setAndGate0(TriInputAndGate *andGate0);

    TriInputAndGate *getAndGate1() const;

    void setAndGate1(TriInputAndGate *andGate1);

    TriInputAndGate *getAndGate2() const;

    void setAndGate2(TriInputAndGate *andGate2);

    TriInputAndGate *getAndGate3() const;

    void setAndGate3(TriInputAndGate *andGate3);

    TriInputAndGate *getAndGate4() const;

    void setAndGate4(TriInputAndGate *andGate4);

    TriInputAndGate *getAndGate5() const;

    void setAndGate5(TriInputAndGate *andGate5);

    TriInputAndGate *getAndGate6() const;

    void setAndGate6(TriInputAndGate *andGate6);

    TriInputAndGate *getAndGate7() const;

    void setAndGate7(TriInputAndGate *andGate7);

    TriInputAndGate *getAndGate8() const;

    void setAndGate8(TriInputAndGate *andGate8);

    TriInputAndGate *getAndGate9() const;

    void setAndGate9(TriInputAndGate *andGate9);

    TriInputAndGate *getAndGateA() const;

    void setAndGateA(TriInputAndGate *andGateA);

    TriInputAndGate *getAndGateB() const;

    void setAndGateB(TriInputAndGate *andGateB);

    TriInputAndGate *getAndGateC() const;

    void setAndGateC(TriInputAndGate *andGateC);

    TriInputAndGate *getAndGateD() const;

    void setAndGateD(TriInputAndGate *andGateD);

    TriInputAndGate *getAndGateE() const;

    void setAndGateE(TriInputAndGate *andGateE);

    TriInputAndGate *getAndGateF() const;

    void setAndGateF(TriInputAndGate *andGateF);

    bool getLineOut0() const;

    void setLineOut0(bool lineOut0);

    bool getLineOut1() const;

    void setLineOut1(bool lineOut1);

    bool getLineOut2() const;

    void setLineOut2(bool lineOut2);

    bool getLineOut3() const;

    void setLineOut3(bool lineOut3);

    bool getLineOut4() const;

    void setLineOut4(bool lineOut4);

    bool getLineOut5() const;

    void setLineOut5(bool lineOut5);

    bool getLineOut6() const;

    void setLineOut6(bool lineOut6);

    bool getLineOut7() const;

    void setLineOut7(bool lineOut7);

    bool getLineOut8() const;

    void setLineOut8(bool lineOut8);

    bool getLineOut9() const;

    void setLineOut9(bool lineOut9);

    bool getLineOutA() const;

    void setLineOutA(bool lineOutA);

    bool getLineOutB() const;

    void setLineOutB(bool lineOutB);

    bool getLineOutC() const;

    void setLineOutC(bool lineOutC);

    bool getLineOutD() const;

    void setLineOutD(bool lineOutD);

    bool getLineOutE() const;

    void setLineOutE(bool lineOutE);

    bool getLineOutF() const;

    void setLineOutF(bool lineOutF);

    std::vector<bool> currentState();

};
