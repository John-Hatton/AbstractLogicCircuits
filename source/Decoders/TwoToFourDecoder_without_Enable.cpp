//
// Created by snake on 12/11/2022.
//

#include "Decoders/TwoToFourDecoder_without_Enable.h"

TwoToFourDecoder_without_Enable::TwoToFourDecoder_without_Enable() {

    aNot0 = new NotGate();
    aNot1 = new NotGate();
    dataAnd0 = new AndGate();
    dataAnd1 = new AndGate();
    dataAnd2 = new AndGate();
    dataAnd3 = new AndGate();
}

TwoToFourDecoder_without_Enable::TwoToFourDecoder_without_Enable(std::vector<bool> dataInputVector) {

    if (dataInputVector.size() == 2)
    {
        a0 = dataInputVector.at(1);
        a1 = dataInputVector.at(0);

        aNot0 = new NotGate();
        aNot1 = new NotGate();

        dataAnd0 = new AndGate();
        dataAnd1 = new AndGate();
        dataAnd2 = new AndGate();
        dataAnd3 = new AndGate();

        currentState();
    }

}

bool TwoToFourDecoder_without_Enable::getA0() const {
    return a0;
}

void TwoToFourDecoder_without_Enable::setA0(bool a0) {
    TwoToFourDecoder_without_Enable::a0 = a0;
}

bool TwoToFourDecoder_without_Enable::getA1() const {
    return a1;
}

void TwoToFourDecoder_without_Enable::setA1(bool a1) {
    TwoToFourDecoder_without_Enable::a1 = a1;
}

NotGate *TwoToFourDecoder_without_Enable::getANot0() const {
    return aNot0;
}

void TwoToFourDecoder_without_Enable::setANot0(NotGate *aNot0) {
    TwoToFourDecoder_without_Enable::aNot0 = aNot0;
}

NotGate *TwoToFourDecoder_without_Enable::getANot1() const {
    return aNot1;
}

void TwoToFourDecoder_without_Enable::setANot1(NotGate *aNot1) {
    TwoToFourDecoder_without_Enable::aNot1 = aNot1;
}

AndGate *TwoToFourDecoder_without_Enable::getDataAnd0() const {
    return dataAnd0;
}

void TwoToFourDecoder_without_Enable::setDataAnd0(AndGate *dataAnd0) {
    TwoToFourDecoder_without_Enable::dataAnd0 = dataAnd0;
}

AndGate *TwoToFourDecoder_without_Enable::getDataAnd1() const {
    return dataAnd1;
}

void TwoToFourDecoder_without_Enable::setDataAnd1(AndGate *dataAnd1) {
    TwoToFourDecoder_without_Enable::dataAnd1 = dataAnd1;
}

AndGate *TwoToFourDecoder_without_Enable::getDataAnd2() const {
    return dataAnd2;
}

void TwoToFourDecoder_without_Enable::setDataAnd2(AndGate *dataAnd2) {
    TwoToFourDecoder_without_Enable::dataAnd2 = dataAnd2;
}

AndGate *TwoToFourDecoder_without_Enable::getDataAnd3() const {
    return dataAnd3;
}

void TwoToFourDecoder_without_Enable::setDataAnd3(AndGate *dataAnd3) {
    TwoToFourDecoder_without_Enable::dataAnd3 = dataAnd3;
}

bool TwoToFourDecoder_without_Enable::getD0() const {
    return d0;
}

void TwoToFourDecoder_without_Enable::setD0(bool d0) {
    TwoToFourDecoder_without_Enable::d0 = d0;
}

bool TwoToFourDecoder_without_Enable::getD1() const {
    return d1;
}

void TwoToFourDecoder_without_Enable::setD1(bool d1) {
    TwoToFourDecoder_without_Enable::d1 = d1;
}

bool TwoToFourDecoder_without_Enable::getD2() const {
    return d2;
}

void TwoToFourDecoder_without_Enable::setD2(bool d2) {
    TwoToFourDecoder_without_Enable::d2 = d2;
}

bool TwoToFourDecoder_without_Enable::getD3() const {
    return d3;
}

void TwoToFourDecoder_without_Enable::setD3(bool d3) {
    TwoToFourDecoder_without_Enable::d3 = d3;
}

std::vector<bool> TwoToFourDecoder_without_Enable::currentState() {

    aNot0->setInput(a0);
    aNot1->setInput(a1);

    dataAnd0->setInputX(aNot0->answer());
    dataAnd0->setInputY(aNot1->answer());
    d0 = dataAnd0->answer();

    dataAnd1->setInputX(a0);
    dataAnd1->setInputY(aNot1->answer());
    d1 = dataAnd1->answer();

    dataAnd2->setInputX(aNot0->answer());
    dataAnd2->setInputY(a1);
    d2 = dataAnd2->answer();

    dataAnd3->setInputX(a0);
    dataAnd3->setInputY(a1);
    d3 = dataAnd3->answer();

    return {d0,d1,d2,d3};
}