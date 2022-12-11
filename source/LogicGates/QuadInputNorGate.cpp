//
// Created by snake on 12/8/2022.
//

#include "LogicGates/QuadInputNorGate.h"

QuadInputNorGate::QuadInputNorGate() = default;

bool QuadInputNorGate::getInputA() const {
    return inputA;
}

void QuadInputNorGate::setInputA(bool inA) {
    inputA = inA;
}

bool QuadInputNorGate::getInputB() const {
    return inputB;
}

void QuadInputNorGate::setInputB(bool inB) {
    inputB = inB;
}

bool QuadInputNorGate::getInputC() const {
    return inputC;
}

void QuadInputNorGate::setInputC(bool inC) {
    inputC = inC;
}

bool QuadInputNorGate::getInputD() const {
    return inputD;
}

void QuadInputNorGate::setInputD(bool inD) {
    inputD = inD;
}

bool QuadInputNorGate::answer() {
    if (!inputA && !inputB && !inputC && !inputD)
    {
        output = true;
        return true;
    }
    output = false;
    return false;
}
