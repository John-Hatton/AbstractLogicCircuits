//
// Created by snake on 12/7/2022.
//

#include "LogicGates/NotGate.h"

NotGate::NotGate() = default;


bool NotGate::getInput() const {
    return input;
}

void NotGate::setInput(bool in) {
    input = in;
}

bool NotGate::answer() {
    output = !input;
    return !input;
}
