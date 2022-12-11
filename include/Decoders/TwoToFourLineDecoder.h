//
// Created by snake on 12/11/2022.
//
#pragma once


#include <vector>
#include "LogicGates/NotGate.h"
#include "LogicGates/InvertedBufferGate.h"
#include "LogicGates/TriInputNandGate.h"

class TwoToFourLineDecoder {

private:

    bool writeEnable;

    bool inputX;

    bool inputY;

    NotGate *selectInputNotX;

    NotGate *selectInputNotY;

    InvertedBufferGate *selectInputIBX;

    InvertedBufferGate *selectInputIBY;

    TriInputNandGate* triNandData0;

    TriInputNandGate* triNandData1;

    TriInputNandGate* triNandData2;

    TriInputNandGate* triNandData3;


    bool lineOut0;

    bool lineOut1;

    bool lineOut2;

    bool lineOut3;

public:

    TwoToFourLineDecoder();

    TwoToFourLineDecoder(std::vector<bool> dataInputVector, bool wEnable);

    bool getWriteEnable() const;

    void setWriteEnable(bool wEnable);

    bool getInputX() const;

    void setInputX(bool inputX);

    bool getInputY() const;

    void setInputY(bool inputY);

    NotGate *getSelectInputNotX() const;

    void setSelectInputNotX(NotGate *selectInputNotX);

    NotGate *getSelectInputNotY() const;

    void setSelectInputNotY(NotGate *selectInputNotY);

    InvertedBufferGate *getSelectInputIbx() const;

    void setSelectInputIbx(InvertedBufferGate *selectInputIbx);

    InvertedBufferGate *getSelectInputIby() const;

    void setSelectInputIby(InvertedBufferGate *selectInputIby);

    TriInputNandGate *getTriNandData0() const;

    void setTriNandData0(TriInputNandGate *d0);

    TriInputNandGate *getTriNandData1() const;

    void setTriNandData1(TriInputNandGate *d1);

    TriInputNandGate *getTriNandData2() const;

    void setTriNandData2(TriInputNandGate *d2);

    TriInputNandGate *getTriNandData3() const;

    void setTriNandData3(TriInputNandGate *d3);

    std::vector<bool> currentState();
};
