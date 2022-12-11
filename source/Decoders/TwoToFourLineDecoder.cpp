//
// Created by snake on 12/11/2022.
//

#include "Decoders/TwoToFourLineDecoder.h"

TwoToFourLineDecoder::TwoToFourLineDecoder() {

    writeEnable = false;

//    lineOut0 = false;
//    lineOut1 = false;
//    lineOut2 = false;
//    lineOut3 = false;

    selectInputNotX = new NotGate();
    selectInputNotY = new NotGate();
    selectInputIBX = new InvertedBufferGate();
    selectInputIBY = new InvertedBufferGate();

    triNandData0 = new TriInputNandGate();
    triNandData1 = new TriInputNandGate();
    triNandData2 = new TriInputNandGate();
    triNandData3 = new TriInputNandGate();
}


TwoToFourLineDecoder::TwoToFourLineDecoder(std::vector<bool> dataInputVector, bool wEnable) {

    if (dataInputVector.size() == 2)
    {
        writeEnable = wEnable;
        inputX = dataInputVector.at(1);
        inputY = dataInputVector.at(0);

        selectInputNotX = new NotGate();
        selectInputNotY = new NotGate();
        selectInputIBX = new InvertedBufferGate();
        selectInputIBY = new InvertedBufferGate();

        triNandData0 = new TriInputNandGate();
        triNandData1 = new TriInputNandGate();
        triNandData2 = new TriInputNandGate();
        triNandData3 = new TriInputNandGate();

        currentState();
    }
}

bool TwoToFourLineDecoder::getWriteEnable() const {
    return writeEnable;
}
void TwoToFourLineDecoder::setWriteEnable(bool wEnable) {
    writeEnable = wEnable;
}
bool TwoToFourLineDecoder::getInputX() const {
    return inputX;
}

void TwoToFourLineDecoder::setInputX(bool inX) {
    inputX = inX;
}

bool TwoToFourLineDecoder::getInputY() const {
    return inputY;
}

void TwoToFourLineDecoder::setInputY(bool inY) {
    inputY = inY;
}




NotGate *TwoToFourLineDecoder::getSelectInputNotX() const {
    return selectInputNotX;
}

void TwoToFourLineDecoder::setSelectInputNotX(NotGate *selectInputNotX) {
    TwoToFourLineDecoder::selectInputNotX = selectInputNotX;
}

NotGate *TwoToFourLineDecoder::getSelectInputNotY() const {
    return selectInputNotY;
}

void TwoToFourLineDecoder::setSelectInputNotY(NotGate *selectInputNotY) {
    TwoToFourLineDecoder::selectInputNotY = selectInputNotY;
}

InvertedBufferGate *TwoToFourLineDecoder::getSelectInputIbx() const {
    return selectInputIBX;
}

void TwoToFourLineDecoder::setSelectInputIbx(InvertedBufferGate *selectInputIbx) {
    selectInputIBX = selectInputIbx;
}

InvertedBufferGate *TwoToFourLineDecoder::getSelectInputIby() const {
    return selectInputIBY;
}

void TwoToFourLineDecoder::setSelectInputIby(InvertedBufferGate *selectInputIby) {
    selectInputIBY = selectInputIby;
}



TriInputNandGate *TwoToFourLineDecoder::getTriNandData0() const {
    return triNandData0;
}

void TwoToFourLineDecoder::setTriNandData0(TriInputNandGate *d0) {
    triNandData0 = d0;
}

TriInputNandGate *TwoToFourLineDecoder::getTriNandData1() const {
    return triNandData1;
}

void TwoToFourLineDecoder::setTriNandData1(TriInputNandGate *d1) {
    triNandData1 = d1;
}

TriInputNandGate *TwoToFourLineDecoder::getTriNandData2() const {
    return triNandData2;
}

void TwoToFourLineDecoder::setTriNandData2(TriInputNandGate *d2) {
    triNandData2 = d2;
}

TriInputNandGate *TwoToFourLineDecoder::getTriNandData3() const {
    return triNandData3;
}

void TwoToFourLineDecoder::setTriNandData3(TriInputNandGate *d3) {
    triNandData3 = d3;
}

std::vector<bool> TwoToFourLineDecoder::currentState() {


    selectInputNotX->setInput(inputX);
    selectInputNotY->setInput(inputY);

    selectInputIBX->setInput(selectInputNotX->answer());
    selectInputIBY->setInput(selectInputNotY->answer());



    // Quad Nand Population

    triNandData0->setInputX(selectInputNotX->answer());
    triNandData0->setInputY(selectInputNotY->answer());
    triNandData0->setInputZ(writeEnable);
    lineOut0 = triNandData0->answer();

    triNandData1->setInputX(selectInputIBX->answer());
    triNandData1->setInputY(selectInputNotY->answer());
    triNandData1->setInputZ(writeEnable);
    lineOut1 = triNandData1->answer();

    triNandData2->setInputX(selectInputNotX->answer());
    triNandData2->setInputY(selectInputIBY->answer());
    triNandData2->setInputZ(writeEnable);
    lineOut2 = triNandData2->answer();

    triNandData3->setInputX(selectInputIBX->answer());
    triNandData3->setInputY(selectInputIBY->answer());
    triNandData3->setInputZ(writeEnable);
    lineOut3 = triNandData3->answer();


    // Also remember, according to the datasheet, if G1 is EVER 0, we should always get all 1's (or 0's)

    if (!writeEnable)
    {
        return {false,false,false,false};
    }

    // Remember, we return inverted outputs, because the original datasheet has
    // reverse polarity. We want to maintain normal polarity, and by doing so, we won't need
    // a lot of reverse logic with the other circuits. Perhaps this isn't wisdom, since most
    // of these drawings are designed to go together, but I have other drawings, not from TI. Lol
    return {!lineOut0,!lineOut1,!lineOut2,!lineOut3};
}


