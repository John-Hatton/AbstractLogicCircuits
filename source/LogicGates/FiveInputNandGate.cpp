//
// Created by snake on 12/11/2022.
//

#include "LogicGates/FiveInputNandGate.h"

FiveInputNandGate::FiveInputNandGate() {
    output = true;
}


bool FiveInputNandGate::getInputI() const {
    return inputI;
}

void FiveInputNandGate::setInputI(bool inputI) {
    FiveInputNandGate::inputI = inputI;
}

bool FiveInputNandGate::getInputIi() const {
    return inputII;
}

void FiveInputNandGate::setInputIi(bool inputIi) {
    inputII = inputIi;
}

bool FiveInputNandGate::getInputIii() const {
    return inputIII;
}

void FiveInputNandGate::setInputIii(bool inputIii) {
    inputIII = inputIii;
}

bool FiveInputNandGate::getInputIv() const {
    return inputIV;
}

void FiveInputNandGate::setInputIv(bool inputIv) {
    inputIV = inputIv;
}

bool FiveInputNandGate::getInputV() const {
    return inputV;
}

void FiveInputNandGate::setInputV(bool inputV) {
    FiveInputNandGate::inputV = inputV;
}

bool FiveInputNandGate::getOutput() const {
    return output;
}

void FiveInputNandGate::setOutput(bool output) {
    FiveInputNandGate::output = output;
}

bool FiveInputNandGate::answer() {
    if (inputI && inputII && inputIII && inputIV && inputV && inputV)
    {
        output = false;
        return output;
    }
    return output;
}

