//
// Created by snake on 12/11/2022.
//

#include "Decoders/ThreeToEightLineDecoder.h"

ThreeToEightLineDecoder::ThreeToEightLineDecoder() {

}

bool ThreeToEightLineDecoder::isEnableInputG1() const {
    return enableInputG1;
}

void ThreeToEightLineDecoder::setEnableInputG1(bool enableInputG1) {
    ThreeToEightLineDecoder::enableInputG1 = enableInputG1;
}

bool ThreeToEightLineDecoder::isEnableInputG2A() const {
    return enableInputG2A;
}

void ThreeToEightLineDecoder::setEnableInputG2A(bool enableInputG2A) {
    ThreeToEightLineDecoder::enableInputG2A = enableInputG2A;
}

bool ThreeToEightLineDecoder::isEnableInputG2B() const {
    return enableInputG2B;
}

void ThreeToEightLineDecoder::setEnableInputG2B(bool enableInputG2B) {
    ThreeToEightLineDecoder::enableInputG2B = enableInputG2B;
}

bool ThreeToEightLineDecoder::isInputA() const {
    return inputA;
}

void ThreeToEightLineDecoder::setInputA(bool inputA) {
    ThreeToEightLineDecoder::inputA = inputA;
}

bool ThreeToEightLineDecoder::isInputB() const {
    return inputB;
}

void ThreeToEightLineDecoder::setInputB(bool inputB) {
    ThreeToEightLineDecoder::inputB = inputB;
}

bool ThreeToEightLineDecoder::isInputC() const {
    return inputC;
}

void ThreeToEightLineDecoder::setInputC(bool inputC) {
    ThreeToEightLineDecoder::inputC = inputC;
}

NotGate *ThreeToEightLineDecoder::getEnableNotG1() const {
    return enableNotG1;
}

void ThreeToEightLineDecoder::setEnableNotG1(NotGate *enableNotG1) {
    ThreeToEightLineDecoder::enableNotG1 = enableNotG1;
}

TriInvertedAndGate *ThreeToEightLineDecoder::getEnableInputs3InvAnd() const {
    return enableInputs3InvAnd;
}

void ThreeToEightLineDecoder::setEnableInputs3InvAnd(TriInvertedAndGate *enableInputs3InvAnd) {
    ThreeToEightLineDecoder::enableInputs3InvAnd = enableInputs3InvAnd;
}

NotGate *ThreeToEightLineDecoder::getSelectInputNotA() const {
    return selectInputNotA;
}

void ThreeToEightLineDecoder::setSelectInputNotA(NotGate *selectInputNotA) {
    ThreeToEightLineDecoder::selectInputNotA = selectInputNotA;
}

NotGate *ThreeToEightLineDecoder::getSelectInputNotB() const {
    return selectInputNotB;
}

void ThreeToEightLineDecoder::setSelectInputNotB(NotGate *selectInputNotB) {
    ThreeToEightLineDecoder::selectInputNotB = selectInputNotB;
}

NotGate *ThreeToEightLineDecoder::getSelectInputNotC() const {
    return selectInputNotC;
}

void ThreeToEightLineDecoder::setSelectInputNotC(NotGate *selectInputNotC) {
    ThreeToEightLineDecoder::selectInputNotC = selectInputNotC;
}

InvertedBufferGate *ThreeToEightLineDecoder::getSelectInputIba() const {
    return selectInputIBA;
}

void ThreeToEightLineDecoder::setSelectInputIba(InvertedBufferGate *selectInputIba) {
    selectInputIBA = selectInputIba;
}

InvertedBufferGate *ThreeToEightLineDecoder::getSelectInputIbb() const {
    return selectInputIBB;
}

void ThreeToEightLineDecoder::setSelectInputIbb(InvertedBufferGate *selectInputIbb) {
    selectInputIBB = selectInputIbb;
}

InvertedBufferGate *ThreeToEightLineDecoder::getSelectInputIbc() const {
    return selectInputIBC;
}

void ThreeToEightLineDecoder::setSelectInputIbc(InvertedBufferGate *selectInputIbc) {
    selectInputIBC = selectInputIbc;
}

QuadInputNandGate *ThreeToEightLineDecoder::getQuadInNandY0() const {
    return quadInNandY0;
}

void ThreeToEightLineDecoder::setQuadInNandY0(QuadInputNandGate *quadInNandY0) {
    ThreeToEightLineDecoder::quadInNandY0 = quadInNandY0;
}

QuadInputNandGate *ThreeToEightLineDecoder::getQuadInNandY1() const {
    return quadInNandY1;
}

void ThreeToEightLineDecoder::setQuadInNandY1(QuadInputNandGate *quadInNandY1) {
    ThreeToEightLineDecoder::quadInNandY1 = quadInNandY1;
}

QuadInputNandGate *ThreeToEightLineDecoder::getQuadInNandY2() const {
    return quadInNandY2;
}

void ThreeToEightLineDecoder::setQuadInNandY2(QuadInputNandGate *quadInNandY2) {
    ThreeToEightLineDecoder::quadInNandY2 = quadInNandY2;
}

QuadInputNandGate *ThreeToEightLineDecoder::getQuadInNandY3() const {
    return quadInNandY3;
}

void ThreeToEightLineDecoder::setQuadInNandY3(QuadInputNandGate *quadInNandY3) {
    ThreeToEightLineDecoder::quadInNandY3 = quadInNandY3;
}

QuadInputNandGate *ThreeToEightLineDecoder::getQuadInNandY4() const {
    return quadInNandY4;
}

void ThreeToEightLineDecoder::setQuadInNandY4(QuadInputNandGate *quadInNandY4) {
    ThreeToEightLineDecoder::quadInNandY4 = quadInNandY4;
}

QuadInputNandGate *ThreeToEightLineDecoder::getQuadInNandY5() const {
    return quadInNandY5;
}

void ThreeToEightLineDecoder::setQuadInNandY5(QuadInputNandGate *quadInNandY5) {
    ThreeToEightLineDecoder::quadInNandY5 = quadInNandY5;
}

QuadInputNandGate *ThreeToEightLineDecoder::getQuadInNandY6() const {
    return quadInNandY6;
}

void ThreeToEightLineDecoder::setQuadInNandY6(QuadInputNandGate *quadInNandY6) {
    ThreeToEightLineDecoder::quadInNandY6 = quadInNandY6;
}

QuadInputNandGate *ThreeToEightLineDecoder::getQuadInNandY7() const {
    return quadInNandY7;
}

void ThreeToEightLineDecoder::setQuadInNandY7(QuadInputNandGate *quadInNandY7) {
    ThreeToEightLineDecoder::quadInNandY7 = quadInNandY7;
}

std::vector<bool> ThreeToEightLineDecoder::currentState() {
    return {false};
}
