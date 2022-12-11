//
// Created by snake on 12/11/2022.
//

#include "Decoders/ThreeToEightLineDecoder.h"

ThreeToEightLineDecoder::ThreeToEightLineDecoder() {

    enableInputG1 = false;
    enableInputG2A = false;
    enableInputG2B = false;

    enableNotG1 = new NotGate();
    enableInputs3InvAnd = new TriInvertedAndGate();
    selectInputNotA = new NotGate();
    selectInputNotB = new NotGate();
    selectInputNotC = new NotGate();
    selectInputIBA = new InvertedBufferGate();
    selectInputIBB = new InvertedBufferGate();
    selectInputIBC = new InvertedBufferGate();

    quadInNandY0 = new QuadInputNandGate();
    quadInNandY1 = new QuadInputNandGate();
    quadInNandY2 = new QuadInputNandGate();
    quadInNandY3 = new QuadInputNandGate();
    quadInNandY4 = new QuadInputNandGate();
    quadInNandY5 = new QuadInputNandGate();
    quadInNandY6 = new QuadInputNandGate();
    quadInNandY7 = new QuadInputNandGate();
}

bool ThreeToEightLineDecoder::getEnableInputG1() const {
    return enableInputG1;
}

void ThreeToEightLineDecoder::setEnableInputG1(bool enableInputG1) {
    ThreeToEightLineDecoder::enableInputG1 = enableInputG1;
}

bool ThreeToEightLineDecoder::getEnableInputG2A() const {
    return enableInputG2A;
}

void ThreeToEightLineDecoder::setEnableInputG2A(bool enableInputG2A) {
    ThreeToEightLineDecoder::enableInputG2A = enableInputG2A;
}

bool ThreeToEightLineDecoder::getEnableInputG2B() const {
    return enableInputG2B;
}

void ThreeToEightLineDecoder::setEnableInputG2B(bool enableInputG2B) {
    ThreeToEightLineDecoder::enableInputG2B = enableInputG2B;
}

bool ThreeToEightLineDecoder::getInputA() const {
    return inputA;
}

void ThreeToEightLineDecoder::setInputA(bool inputA) {
    ThreeToEightLineDecoder::inputA = inputA;
}

bool ThreeToEightLineDecoder::getInputB() const {
    return inputB;
}

void ThreeToEightLineDecoder::setInputB(bool inputB) {
    ThreeToEightLineDecoder::inputB = inputB;
}

bool ThreeToEightLineDecoder::getInputC() const {
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

bool ThreeToEightLineDecoder::getOutputLineY0() const {
    return outputLineY0;
}

void ThreeToEightLineDecoder::setOutputLineY0(bool outputLineY0) {
    ThreeToEightLineDecoder::outputLineY0 = outputLineY0;
}

bool ThreeToEightLineDecoder::getOutputLineY1() const {
    return outputLineY1;
}

void ThreeToEightLineDecoder::setOutputLineY1(bool outputLineY1) {
    ThreeToEightLineDecoder::outputLineY1 = outputLineY1;
}

bool ThreeToEightLineDecoder::getOutputLineY2() const {
    return outputLineY2;
}

void ThreeToEightLineDecoder::setOutputLineY2(bool outputLineY2) {
    ThreeToEightLineDecoder::outputLineY2 = outputLineY2;
}

bool ThreeToEightLineDecoder::getOutputLineY3() const {
    return outputLineY3;
}

void ThreeToEightLineDecoder::setOutputLineY3(bool outputLineY3) {
    ThreeToEightLineDecoder::outputLineY3 = outputLineY3;
}

bool ThreeToEightLineDecoder::getOutputLineY4() const {
    return outputLineY4;
}

void ThreeToEightLineDecoder::setOutputLineY4(bool outputLineY4) {
    ThreeToEightLineDecoder::outputLineY4 = outputLineY4;
}

bool ThreeToEightLineDecoder::getOutputLineY5() const {
    return outputLineY5;
}

void ThreeToEightLineDecoder::setOutputLineY5(bool outputLineY5) {
    ThreeToEightLineDecoder::outputLineY5 = outputLineY5;
}

bool ThreeToEightLineDecoder::getOutputLineY6() const {
    return outputLineY6;
}

void ThreeToEightLineDecoder::setOutputLineY6(bool outputLineY6) {
    ThreeToEightLineDecoder::outputLineY6 = outputLineY6;
}

bool ThreeToEightLineDecoder::getOutputLineY7() const {
    return outputLineY7;
}

void ThreeToEightLineDecoder::setOutputLineY7(bool outputLineY7) {
    ThreeToEightLineDecoder::outputLineY7 = outputLineY7;
}


std::vector<bool> ThreeToEightLineDecoder::currentState() {

    enableNotG1->setInput(enableInputG1);
    enableInputs3InvAnd->setInputX(enableNotG1->answer());
    enableInputs3InvAnd->setInputY(enableInputG2A);
    enableInputs3InvAnd->setInputZ(enableInputG2B);

    selectInputNotA->setInput(inputA);
    selectInputNotB->setInput(inputB);
    selectInputNotC->setInput(inputC);

    selectInputIBA->setInput(selectInputNotA->answer());
    selectInputIBB->setInput(selectInputNotB->answer());
    selectInputIBC->setInput(selectInputNotC->answer());



    // Quad Nand Population

    quadInNandY0->setInputA(selectInputNotA->answer());
    quadInNandY0->setInputB(selectInputNotB->answer());
    quadInNandY0->setInputC(selectInputNotC->answer());
    quadInNandY0->setInputD(enableInputs3InvAnd->answer());
    outputLineY0 = quadInNandY0->answer();

    quadInNandY1->setInputA(selectInputIBA->answer());
    quadInNandY1->setInputB(selectInputNotB->answer());
    quadInNandY1->setInputC(selectInputNotC->answer());
    quadInNandY1->setInputD(enableInputs3InvAnd->answer());
    outputLineY1 = quadInNandY1->answer();

    quadInNandY2->setInputA(selectInputNotA->answer());
    quadInNandY2->setInputB(selectInputIBB->answer());
    quadInNandY2->setInputC(selectInputNotC->answer());
    quadInNandY2->setInputD(enableInputs3InvAnd->answer());
    outputLineY2 = quadInNandY2->answer();

    quadInNandY3->setInputA(selectInputIBA->answer());
    quadInNandY3->setInputB(selectInputIBB->answer());
    quadInNandY3->setInputC(selectInputNotC->answer());
    quadInNandY3->setInputD(enableInputs3InvAnd->answer());
    outputLineY3 = quadInNandY3->answer();

    quadInNandY4->setInputA(selectInputNotA->answer());
    quadInNandY4->setInputB(selectInputNotB->answer());
    quadInNandY4->setInputC(selectInputIBC->answer());
    quadInNandY4->setInputD(enableInputs3InvAnd->answer());
    outputLineY4 = quadInNandY4->answer();

    quadInNandY5->setInputA(selectInputIBA->answer());
    quadInNandY5->setInputB(selectInputNotB->answer());
    quadInNandY5->setInputC(selectInputIBC->answer());
    quadInNandY5->setInputD(enableInputs3InvAnd->answer());
    outputLineY5 = quadInNandY5->answer();

    quadInNandY6->setInputA(selectInputNotA->answer());
    quadInNandY6->setInputB(selectInputIBB->answer());
    quadInNandY6->setInputC(selectInputIBC->answer());
    quadInNandY6->setInputD(enableInputs3InvAnd->answer());
    outputLineY6 = quadInNandY6->answer();

    quadInNandY7->setInputA(selectInputIBA->answer());
    quadInNandY7->setInputB(selectInputIBA->answer());
    quadInNandY7->setInputC(selectInputIBA->answer());
    quadInNandY7->setInputD(enableInputs3InvAnd->answer());
    outputLineY7 = quadInNandY7->answer();



    // Remember, we return inverted outputs, because the original datasheet has
    // reverse polarity. We want to maintain normal polarity, and by doing so, we won't need
    // a lot of reverse logic with the other circuits. Perhaps this isn't wisdom, since most
    // of these drawings are designed to go together, but I have other drawings, not from TI. Lol
    return {!outputLineY0,!outputLineY1,!outputLineY2,!outputLineY3,
            !outputLineY4,!outputLineY5,!outputLineY6,!outputLineY7};
}


