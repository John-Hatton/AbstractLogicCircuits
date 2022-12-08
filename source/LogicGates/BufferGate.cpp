//
// Created by snake on 12/7/2022.
//

#include "LogicGates/BufferGate.h"

BufferGate::BufferGate() {

}

bool BufferGate::getInput() const {
    return input;
}

void BufferGate::setInput(bool in) {
    input = in;
}

bool BufferGate::answer() {
    output = input;
    return getInput();
}
