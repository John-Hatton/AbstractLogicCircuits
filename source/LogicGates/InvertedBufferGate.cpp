//
// Created by snake on 12/8/2022.
//

#include "LogicGates/InvertedBufferGate.h"

InvertedBufferGate::InvertedBufferGate() {

}

bool InvertedBufferGate::getInput() const {
    return input;
}

void InvertedBufferGate::setInput(bool in) {
    input = in;
}

bool InvertedBufferGate::answer() {
    output = !input;
    return !input;
}
