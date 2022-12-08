//
// Created by snake on 12/7/2022.
//

#include "Memory/D_FlipFlop.h"


D_FlipFlop::D_FlipFlop() {
    // Set properties

    inverted = new NotGate();

    enableAndOne = new AndGate();

    enableAndTwo = new AndGate();

    setNorGate = new NorGate();

    resetNorGate = new NorGate();
}

bool D_FlipFlop::getEnable() const {
    return enable;
}

void D_FlipFlop::setEnable(bool enable) {
    D_FlipFlop::enable = enable;
}

bool D_FlipFlop::getData() const {
    return data;
}

void D_FlipFlop::setData(bool myData) {
    D_FlipFlop::data = myData;
}

NotGate *D_FlipFlop::getInverted() const {
    return inverted;
}

void D_FlipFlop::setInverted(NotGate *inverted) {
    D_FlipFlop::inverted = inverted;
}

AndGate *D_FlipFlop::getEnableAndOne() const {
    return enableAndOne;
}

void D_FlipFlop::setEnableAndOne(AndGate *enableAndOne) {
    D_FlipFlop::enableAndOne = enableAndOne;
}

AndGate *D_FlipFlop::getEnableAndTwo() const {
    return enableAndTwo;
}

void D_FlipFlop::setEnableAndTwo(AndGate *enableAndTwo) {
    D_FlipFlop::enableAndTwo = enableAndTwo;
}

NorGate *D_FlipFlop::getSetNorGate() const {
    return setNorGate;
}

void D_FlipFlop::setSetNorGate(NorGate *setNorGate) {
    D_FlipFlop::setNorGate = setNorGate;
}

NorGate *D_FlipFlop::getResetNorGate() const {
    return resetNorGate;
}

void D_FlipFlop::setResetNorGate(NorGate *resetNorGate) {
    D_FlipFlop::resetNorGate = resetNorGate;
}

bool D_FlipFlop::currentState() {

    // 1. Data goes through inverter:

    inverted->setInput(data);

    // 2. And Gate One inputs: output of Not Gate && output of Enable Pin

    enableAndOne->setInputX(inverted->answer());
    enableAndOne->setInputY(enable);

    // 3. And Gate Two inputs: output of Data (before NOT)

    enableAndTwo->setInputX(enable);
    enableAndTwo->setInputY(data);

    // 4. Set Nor Gate inputs: output of AndGateOne and output of ResetNorGate
    setNorGate->setInputX(enableAndOne->answer());
    resetNorGate->setInputY(enableAndTwo->answer());

    // Set known values before unknown...

    setNorGate->setInputY(resetNorGate->answer());
    resetNorGate->setInputX(setNorGate->answer());




    // Serves as Q output
    state = setNorGate->answer();
    return setNorGate->answer();
}
