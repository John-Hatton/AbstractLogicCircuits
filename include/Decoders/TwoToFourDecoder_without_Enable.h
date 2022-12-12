//
// Created by snake on 12/11/2022.
//
#pragma once


#include <vector>
#include "LogicGates/AndGate.h"
#include "LogicGates/NotGate.h"

class TwoToFourDecoder_without_Enable {

private:

    bool a0;

    bool a1;

    NotGate* aNot0;

    NotGate* aNot1;

    AndGate* dataAnd0;

    AndGate* dataAnd1;

    AndGate* dataAnd2;

    AndGate* dataAnd3;

    bool d0;


    bool d1;

    bool d2;

    bool d3;

public:

    TwoToFourDecoder_without_Enable();
    TwoToFourDecoder_without_Enable(std::vector<bool> dataInputVector);

    bool getA0() const;

    void setA0(bool a0);

    bool getA1() const;

    void setA1(bool a1);

    NotGate *getANot0() const;

    void setANot0(NotGate *aNot0);

    NotGate *getANot1() const;

    void setANot1(NotGate *aNot1);

    AndGate *getDataAnd0() const;

    void setDataAnd0(AndGate *dataAnd0);

    AndGate *getDataAnd1() const;

    void setDataAnd1(AndGate *dataAnd1);

    AndGate *getDataAnd2() const;

    void setDataAnd2(AndGate *dataAnd2);

    AndGate *getDataAnd3() const;

    void setDataAnd3(AndGate *dataAnd3);

    bool getD0() const;

    void setD0(bool d0);

    bool getD1() const;

    void setD1(bool d1);

    bool getD2() const;

    void setD2(bool d2);

    bool getD3() const;

    void setD3(bool d3);

    std::vector<bool> currentState();

};
