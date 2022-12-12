//
// Created by snake on 12/11/2022.
//

#include "LogicGates/QuadInputNandGate.h"


QuadInputNandGate::QuadInputNandGate() {
    output = true;
}


bool QuadInputNandGate::getInputA() const {
    return inputA;
}

void QuadInputNandGate::setInputA(bool inputA) {
    QuadInputNandGate::inputA = inputA;
}

bool QuadInputNandGate::getInputB() const {
    return inputB;
}

void QuadInputNandGate::setInputB(bool inputB) {
    QuadInputNandGate::inputB = inputB;
}

bool QuadInputNandGate::getInputC() const {
    return inputC;
}

void QuadInputNandGate::setInputC(bool inputC) {
    QuadInputNandGate::inputC = inputC;
}

bool QuadInputNandGate::getInputD() const {
    return inputD;
}

void QuadInputNandGate::setInputD(bool inputD) {
    QuadInputNandGate::inputD = inputD;
}

bool QuadInputNandGate::getOutput() const {
    return output;
}

void QuadInputNandGate::setOutput(bool output) {
    QuadInputNandGate::output = output;
}

bool QuadInputNandGate::answer() {
    if (inputA && inputB && inputC && inputD)
    {
        output = false;
        return output;
    }
    return output;
}