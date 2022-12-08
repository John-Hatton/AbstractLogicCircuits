//
// Created by snake on 12/7/2022.
//

#pragma once


#include "LogicGates/NotGate.h"
#include "LogicGates/AndGate.h"
#include "LogicGates/NorGate.h"

class D_FlipFlop {

private:
    bool enable;

    bool data;

    bool state;


    NotGate* inverted;

    AndGate* enableAndOne;

    AndGate* enableAndTwo;

    NorGate* setNorGate;

    NorGate* resetNorGate;




public:

    D_FlipFlop();


    bool getEnable() const;

    void setEnable(bool enable);

    bool getData() const;

    void setData(bool myData);

    NotGate *getInverted() const;

    void setInverted(NotGate *inverted);

    AndGate *getEnableAndOne() const;

    void setEnableAndOne(AndGate *enableAndOne);

    AndGate *getEnableAndTwo() const;

    void setEnableAndTwo(AndGate *enableAndTwo);

    NorGate *getSetNorGate() const;

    void setSetNorGate(NorGate *setNorGate);

    NorGate *getResetNorGate() const;

    void setResetNorGate(NorGate *resetNorGate);


    bool currentState();

};
