//
// Created by snake on 12/8/2022.
//

#include "Memory/FourBitRAM.h"

FourBitRAM::FourBitRAM() {

    // D_FlipFlops
    wordZeroBitZero      = new D_FlipFlop();
    wordZeroBitOne       = new D_FlipFlop();
    wordZeroBitTwo       = new D_FlipFlop();
    wordZeroBitThree     = new D_FlipFlop();
    wordOneBitZero       = new D_FlipFlop();
    wordOneBitOne        = new D_FlipFlop();
    wordOneBitTwo        = new D_FlipFlop();
    wordOneBitThree      = new D_FlipFlop();
    wordTwoBitZero       = new D_FlipFlop();
    wordTwoBitOne        = new D_FlipFlop();
    wordTwoBitTwo        = new D_FlipFlop();
    wordTwoBitThree      = new D_FlipFlop();
    wordThreeBitZero     = new D_FlipFlop();
    wordThreeBitOne      = new D_FlipFlop();
    wordThreeBitTwo      = new D_FlipFlop();
    wordThreeBitThree    = new D_FlipFlop();

    // Right Inverted And Gates

    leftRIAG             = new RightInvertedAndGate();
    rightRIAG            = new RightInvertedAndGate();



    // AND Gates

    wordZeroBitZeroAnd   = new AndGate();
    wordZeroBitOneAnd    = new AndGate();
    wordZeroBitTwoAnd    = new AndGate();
    wordZeroBitThreeAnd  = new AndGate();
    wordOneBitZeroAnd    = new AndGate();
    wordOneBitOneAnd     = new AndGate();
    wordOneBitTwoAnd     = new AndGate();
    wordOneBitThreeAnd   = new AndGate();
    wordTwoBitZeroAnd    = new AndGate();
    wordTwoBitOneAnd     = new AndGate();
    wordTwoBitTwoAnd     = new AndGate();
    wordTwoBitThreeAnd   = new AndGate();
    wordThreeBitZeroAnd  = new AndGate();
    wordThreeBitOneAnd   = new AndGate();
    wordThreeBitTwoAnd   = new AndGate();
    wordThreeBitThreeAnd = new AndGate();

    // TriInputAndGates


    readDecoderOutputOneAndOne;

    readDecoderOutputOneAndTwo        = new TriInputAndGate();
    readDecoderOutputOneAndThree      = new TriInputAndGate();
    readDecoderOutputOneAndFour       = new TriInputAndGate();
    readDecoderOutputTwoAndOne        = new TriInputAndGate();
    readDecoderOutputTwoAndTwo        = new TriInputAndGate();
    readDecoderOutputTwoAndThree      = new TriInputAndGate();
    readDecoderOutputTwoAndFour       = new TriInputAndGate();
    readDecoderOutputThreeAndOne      = new TriInputAndGate();
    readDecoderOutputThreeTriAndTwo   = new TriInputAndGate();
    readDecoderOutputThreeTriAndThree = new TriInputAndGate();
    readDecoderOutputThreeTriAndFour  = new TriInputAndGate();
    readDecoderOutputFourTriAndOne    = new TriInputAndGate();
    readDecoderOutputFourTriAndTwo    = new TriInputAndGate();
    readDecoderOutputFourTriAndThree  = new TriInputAndGate();
    readDecoderOutputFourTriAndFour   = new TriInputAndGate();

    // QuadInputNorGates


    dataZeroQuadNor  = new QuadInputNorGate();
    dataOneQuadNor   = new QuadInputNorGate();
    dataTwoQuadNor   = new QuadInputNorGate();
    dataThreeQuadNor = new QuadInputNorGate();

    // NandGates

    outputNandOne   = new NandGate();
    outputNandTwo   = new NandGate();
    outputNandThree = new NandGate();
    outputNandFour  = new NandGate();



}

bool FourBitRAM::isData0() const {
    return data0;
}

void FourBitRAM::setData0(bool data0) {
    FourBitRAM::data0 = data0;
}

bool FourBitRAM::isData1() const {
    return data1;
}

void FourBitRAM::setData1(bool data1) {
    FourBitRAM::data1 = data1;
}

bool FourBitRAM::isData2() const {
    return data2;
}

void FourBitRAM::setData2(bool data2) {
    FourBitRAM::data2 = data2;
}

bool FourBitRAM::isData3() const {
    return data3;
}

void FourBitRAM::setData3(bool data3) {
    FourBitRAM::data3 = data3;
}

bool FourBitRAM::isOutput1() const {
    return output1;
}

void FourBitRAM::setOutput1(bool output1) {
    FourBitRAM::output1 = output1;
}

bool FourBitRAM::isOutput2() const {
    return output2;
}

void FourBitRAM::setOutput2(bool output2) {
    FourBitRAM::output2 = output2;
}

bool FourBitRAM::isOutput3() const {
    return output3;
}

void FourBitRAM::setOutput3(bool output3) {
    FourBitRAM::output3 = output3;
}

bool FourBitRAM::isOutput4() const {
    return output4;
}

void FourBitRAM::setOutput4(bool output4) {
    FourBitRAM::output4 = output4;
}

bool FourBitRAM::isWriteInputGw() const {
    return writeInputGW;
}

void FourBitRAM::setWriteInputGw(bool writeInputGw) {
    writeInputGW = writeInputGw;
}

bool FourBitRAM::isWriteInputWa() const {
    return writeInputWA;
}

void FourBitRAM::setWriteInputWa(bool writeInputWa) {
    writeInputWA = writeInputWa;
}

bool FourBitRAM::isWriteInputWb() const {
    return writeInputWB;
}

void FourBitRAM::setWriteInputWb(bool writeInputWb) {
    writeInputWB = writeInputWb;
}

bool FourBitRAM::isReadInputGr() const {
    return readInputGR;
}

void FourBitRAM::setReadInputGr(bool readInputGr) {
    readInputGR = readInputGr;
}

bool FourBitRAM::isReadInputRa() const {
    return readInputRA;
}

void FourBitRAM::setReadInputRa(bool readInputRa) {
    readInputRA = readInputRa;
}

bool FourBitRAM::isReadInputRb() const {
    return readInputRB;
}

void FourBitRAM::setReadInputRb(bool readInputRb) {
    readInputRB = readInputRb;
}

InvertedBufferGate *FourBitRAM::getReadIbGateRead() const {
    return readIBGateRead;
}

void FourBitRAM::setReadIbGateRead(InvertedBufferGate *readIbGateRead) {
    readIBGateRead = readIbGateRead;
}

NotGate *FourBitRAM::getReadNotA() const {
    return readNotA;
}

void FourBitRAM::setReadNotA(NotGate *readNotA) {
    FourBitRAM::readNotA = readNotA;
}

NotGate *FourBitRAM::getReadNotB() const {
    return readNotB;
}

void FourBitRAM::setReadNotB(NotGate *readNotB) {
    FourBitRAM::readNotB = readNotB;
}

InvertedBufferGate *FourBitRAM::getReadIbGateA() const {
    return readIBGateA;
}

void FourBitRAM::setReadIbGateA(InvertedBufferGate *readIbGateA) {
    readIBGateA = readIbGateA;
}

InvertedBufferGate *FourBitRAM::getReadIbGateB() const {
    return readIBGateB;
}

void FourBitRAM::setReadIbGateB(InvertedBufferGate *readIbGateB) {
    readIBGateB = readIbGateB;
}


RightInvertedAndGate *FourBitRAM::getLeftRiag() const {
    return leftRIAG;
}

void FourBitRAM::setLeftRiag(RightInvertedAndGate *leftR) {
    leftRIAG = leftR;
}

RightInvertedAndGate *FourBitRAM::getRightRiag() const {
    return rightRIAG;
}

void FourBitRAM::setRightRiag(RightInvertedAndGate *rightR) {
    rightRIAG = rightR;
}

NotGate *FourBitRAM::getWriteNotA() const {
    return writeNotA;
}

void FourBitRAM::setWriteNotA(NotGate *writeNotA) {
    FourBitRAM::writeNotA = writeNotA;
}


InvertedBufferGate *FourBitRAM::getWriteInvertedBufferA() const {
    return writeInvertedBufferA;
}

void FourBitRAM::setWriteInvertedBufferA(InvertedBufferGate *writeInvertedBufferA) {
    FourBitRAM::writeInvertedBufferA = writeInvertedBufferA;
}


D_FlipFlop *FourBitRAM::getWordZeroBitZero() const {
    return wordZeroBitZero;
}

void FourBitRAM::setWordZeroBitZero(D_FlipFlop *wordZeroBitZero) {
    FourBitRAM::wordZeroBitZero = wordZeroBitZero;
}

D_FlipFlop *FourBitRAM::getWordZeroBitOne() const {
    return wordZeroBitOne;
}

void FourBitRAM::setWordZeroBitOne(D_FlipFlop *wordZeroBitOne) {
    FourBitRAM::wordZeroBitOne = wordZeroBitOne;
}

D_FlipFlop *FourBitRAM::getWordZeroBitTwo() const {
    return wordZeroBitTwo;
}

void FourBitRAM::setWordZeroBitTwo(D_FlipFlop *wordZeroBitTwo) {
    FourBitRAM::wordZeroBitTwo = wordZeroBitTwo;
}

D_FlipFlop *FourBitRAM::getWordZeroBitThree() const {
    return wordZeroBitThree;
}

void FourBitRAM::setWordZeroBitThree(D_FlipFlop *wordZeroBitThree) {
    FourBitRAM::wordZeroBitThree = wordZeroBitThree;
}

D_FlipFlop *FourBitRAM::getWordOneBitZero() const {
    return wordOneBitZero;
}

void FourBitRAM::setWordOneBitZero(D_FlipFlop *wordOneBitZero) {
    FourBitRAM::wordOneBitZero = wordOneBitZero;
}

D_FlipFlop *FourBitRAM::getWordOneBitOne() const {
    return wordOneBitOne;
}

void FourBitRAM::setWordOneBitOne(D_FlipFlop *wordOneBitOne) {
    FourBitRAM::wordOneBitOne = wordOneBitOne;
}

D_FlipFlop *FourBitRAM::getWordOneBitTwo() const {
    return wordOneBitTwo;
}

void FourBitRAM::setWordOneBitTwo(D_FlipFlop *wordOneBitTwo) {
    FourBitRAM::wordOneBitTwo = wordOneBitTwo;
}

D_FlipFlop *FourBitRAM::getWordOneBitThree() const {
    return wordOneBitThree;
}

void FourBitRAM::setWordOneBitThree(D_FlipFlop *wordOneBitThree) {
    FourBitRAM::wordOneBitThree = wordOneBitThree;
}

D_FlipFlop *FourBitRAM::getWordTwoBitZero() const {
    return wordTwoBitZero;
}

void FourBitRAM::setWordTwoBitZero(D_FlipFlop *wordTwoBitZero) {
    FourBitRAM::wordTwoBitZero = wordTwoBitZero;
}

D_FlipFlop *FourBitRAM::getWordTwoBitOne() const {
    return wordTwoBitOne;
}

void FourBitRAM::setWordTwoBitOne(D_FlipFlop *wordTwoBitOne) {
    FourBitRAM::wordTwoBitOne = wordTwoBitOne;
}

D_FlipFlop *FourBitRAM::getWordTwoBitTwo() const {
    return wordTwoBitTwo;
}

void FourBitRAM::setWordTwoBitTwo(D_FlipFlop *wordTwoBitTwo) {
    FourBitRAM::wordTwoBitTwo = wordTwoBitTwo;
}

D_FlipFlop *FourBitRAM::getWordTwoBitThree() const {
    return wordTwoBitThree;
}

void FourBitRAM::setWordTwoBitThree(D_FlipFlop *wordTwoBitThree) {
    FourBitRAM::wordTwoBitThree = wordTwoBitThree;
}

D_FlipFlop *FourBitRAM::getWordThreeBitZero() const {
    return wordThreeBitZero;
}

void FourBitRAM::setWordThreeBitZero(D_FlipFlop *wordThreeBitZero) {
    FourBitRAM::wordThreeBitZero = wordThreeBitZero;
}

D_FlipFlop *FourBitRAM::getWordThreeBitOne() const {
    return wordThreeBitOne;
}

void FourBitRAM::setWordThreeBitOne(D_FlipFlop *wordThreeBitOne) {
    FourBitRAM::wordThreeBitOne = wordThreeBitOne;
}

D_FlipFlop *FourBitRAM::getWordThreeBitTwo() const {
    return wordThreeBitTwo;
}

void FourBitRAM::setWordThreeBitTwo(D_FlipFlop *wordThreeBitTwo) {
    FourBitRAM::wordThreeBitTwo = wordThreeBitTwo;
}

D_FlipFlop *FourBitRAM::getWordThreeBitThree() const {
    return wordThreeBitThree;
}

void FourBitRAM::setWordThreeBitThree(D_FlipFlop *wordThreeBitThree) {
    FourBitRAM::wordThreeBitThree = wordThreeBitThree;
}

AndGate *FourBitRAM::getWordZeroBitZeroAnd() const {
    return wordZeroBitZeroAnd;
}

void FourBitRAM::setWordZeroBitZeroAnd(AndGate *wordZeroBitZeroAnd) {
    FourBitRAM::wordZeroBitZeroAnd = wordZeroBitZeroAnd;
}

AndGate *FourBitRAM::getWordZeroBitOneAnd() const {
    return wordZeroBitOneAnd;
}

void FourBitRAM::setWordZeroBitOneAnd(AndGate *wordZeroBitOneAnd) {
    FourBitRAM::wordZeroBitOneAnd = wordZeroBitOneAnd;
}

AndGate *FourBitRAM::getWordZeroBitTwoAnd() const {
    return wordZeroBitTwoAnd;
}

void FourBitRAM::setWordZeroBitTwoAnd(AndGate *wordZeroBitTwoAnd) {
    FourBitRAM::wordZeroBitTwoAnd = wordZeroBitTwoAnd;
}

AndGate *FourBitRAM::getWordZeroBitThreeAnd() const {
    return wordZeroBitThreeAnd;
}

void FourBitRAM::setWordZeroBitThreeAnd(AndGate *wordZeroBitThreeAnd) {
    FourBitRAM::wordZeroBitThreeAnd = wordZeroBitThreeAnd;
}

AndGate *FourBitRAM::getWordOneBitZeroAnd() const {
    return wordOneBitZeroAnd;
}

void FourBitRAM::setWordOneBitZeroAnd(AndGate *wordOneBitZeroAnd) {
    FourBitRAM::wordOneBitZeroAnd = wordOneBitZeroAnd;
}

AndGate *FourBitRAM::getWordOneBitOneAnd() const {
    return wordOneBitOneAnd;
}

void FourBitRAM::setWordOneBitOneAnd(AndGate *wordOneBitOneAnd) {
    FourBitRAM::wordOneBitOneAnd = wordOneBitOneAnd;
}

AndGate *FourBitRAM::getWordOneBitTwoAnd() const {
    return wordOneBitTwoAnd;
}

void FourBitRAM::setWordOneBitTwoAnd(AndGate *wordOneBitTwoAnd) {
    FourBitRAM::wordOneBitTwoAnd = wordOneBitTwoAnd;
}

AndGate *FourBitRAM::getWordOneBitThreeAnd() const {
    return wordOneBitThreeAnd;
}

void FourBitRAM::setWordOneBitThreeAnd(AndGate *wordOneBitThreeAnd) {
    FourBitRAM::wordOneBitThreeAnd = wordOneBitThreeAnd;
}

AndGate *FourBitRAM::getWordTwpBitZeroAnd() const {
    return wordTwpBitZeroAnd;
}

void FourBitRAM::setWordTwpBitZeroAnd(AndGate *wordTwpBitZeroAnd) {
    FourBitRAM::wordTwpBitZeroAnd = wordTwpBitZeroAnd;
}

AndGate *FourBitRAM::getWordTwoBitOneAnd() const {
    return wordTwoBitOneAnd;
}

void FourBitRAM::setWordTwoBitOneAnd(AndGate *wordTwoBitOneAnd) {
    FourBitRAM::wordTwoBitOneAnd = wordTwoBitOneAnd;
}

AndGate *FourBitRAM::getWordTwoBitTwoAnd() const {
    return wordTwoBitTwoAnd;
}

void FourBitRAM::setWordTwoBitTwoAnd(AndGate *wordTwoBitTwoAnd) {
    FourBitRAM::wordTwoBitTwoAnd = wordTwoBitTwoAnd;
}

AndGate *FourBitRAM::getWordTwoBitThreeAnd() const {
    return wordTwoBitThreeAnd;
}

void FourBitRAM::setWordTwoBitThreeAnd(AndGate *wordTwoBitThreeAnd) {
    FourBitRAM::wordTwoBitThreeAnd = wordTwoBitThreeAnd;
}

AndGate *FourBitRAM::getWordThreeBitZeroAnd() const {
    return wordThreeBitZeroAnd;
}

void FourBitRAM::setWordThreeBitZeroAnd(AndGate *wordThreeBitZeroAnd) {
    FourBitRAM::wordThreeBitZeroAnd = wordThreeBitZeroAnd;
}

AndGate *FourBitRAM::getWordThreeBitOneAnd() const {
    return wordThreeBitOneAnd;
}

void FourBitRAM::setWordThreeBitOneAnd(AndGate *wordThreeBitOneAnd) {
    FourBitRAM::wordThreeBitOneAnd = wordThreeBitOneAnd;
}

AndGate *FourBitRAM::getWordThreeBitTwoAnd() const {
    return wordThreeBitTwoAnd;
}

void FourBitRAM::setWordThreeBitTwoAnd(AndGate *wordThreeBitTwoAnd) {
    FourBitRAM::wordThreeBitTwoAnd = wordThreeBitTwoAnd;
}

AndGate *FourBitRAM::getWordThreeBitThreeAnd() const {
    return wordThreeBitThreeAnd;
}

void FourBitRAM::setWordThreeBitThreeAnd(AndGate *wordThreeBitThreeAnd) {
    FourBitRAM::wordThreeBitThreeAnd = wordThreeBitThreeAnd;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputOneAndOne() const {
    return readDecoderOutputOneAndOne;
}

void FourBitRAM::setReadDecoderOutputOneAndOne(TriInputAndGate *readDecoderOutputOneAndOne) {
    FourBitRAM::readDecoderOutputOneAndOne = readDecoderOutputOneAndOne;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputOneAndTwo() const {
    return readDecoderOutputOneAndTwo;
}

void FourBitRAM::setReadDecoderOutputOneAndTwo(TriInputAndGate *readDecoderOutputOneAndTwo) {
    FourBitRAM::readDecoderOutputOneAndTwo = readDecoderOutputOneAndTwo;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputOneAndThree() const {
    return readDecoderOutputOneAndThree;
}

void FourBitRAM::setReadDecoderOutputOneAndThree(TriInputAndGate *readDecoderOutputOneAndThree) {
    FourBitRAM::readDecoderOutputOneAndThree = readDecoderOutputOneAndThree;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputOneAndFour() const {
    return readDecoderOutputOneAndFour;
}

void FourBitRAM::setReadDecoderOutputOneAndFour(TriInputAndGate *readDecoderOutputOneAndFour) {
    FourBitRAM::readDecoderOutputOneAndFour = readDecoderOutputOneAndFour;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputTwoAndOne() const {
    return readDecoderOutputTwoAndOne;
}

void FourBitRAM::setReadDecoderOutputTwoAndOne(TriInputAndGate *readDecoderOutputTwoAndOne) {
    FourBitRAM::readDecoderOutputTwoAndOne = readDecoderOutputTwoAndOne;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputTwoAndTwo() const {
    return readDecoderOutputTwoAndTwo;
}

void FourBitRAM::setReadDecoderOutputTwoAndTwo(TriInputAndGate *readDecoderOutputTwoAndTwo) {
    FourBitRAM::readDecoderOutputTwoAndTwo = readDecoderOutputTwoAndTwo;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputTwoAndThree() const {
    return readDecoderOutputTwoAndThree;
}

void FourBitRAM::setReadDecoderOutputTwoAndThree(TriInputAndGate *readDecoderOutputTwoAndThree) {
    FourBitRAM::readDecoderOutputTwoAndThree = readDecoderOutputTwoAndThree;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputTwoAndFour() const {
    return readDecoderOutputTwoAndFour;
}

void FourBitRAM::setReadDecoderOutputTwoAndFour(TriInputAndGate *readDecoderOutputTwoAndFour) {
    FourBitRAM::readDecoderOutputTwoAndFour = readDecoderOutputTwoAndFour;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputThreeAndOne() const {
    return readDecoderOutputThreeAndOne;
}

void FourBitRAM::setReadDecoderOutputThreeAndOne(TriInputAndGate *readDecoderOutputThreeAndOne) {
    FourBitRAM::readDecoderOutputThreeAndOne = readDecoderOutputThreeAndOne;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputThreeTriAndTwo() const {
    return readDecoderOutputThreeTriAndTwo;
}

void FourBitRAM::setReadDecoderOutputThreeTriAndTwo(TriInputAndGate *readDecoderOutputThreeTriAndTwo) {
    FourBitRAM::readDecoderOutputThreeTriAndTwo = readDecoderOutputThreeTriAndTwo;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputThreeTriAndThree() const {
    return readDecoderOutputThreeTriAndThree;
}

void FourBitRAM::setReadDecoderOutputThreeTriAndThree(TriInputAndGate *readDecoderOutputThreeTriAndThree) {
    FourBitRAM::readDecoderOutputThreeTriAndThree = readDecoderOutputThreeTriAndThree;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputThreeTriAndFour() const {
    return readDecoderOutputThreeTriAndFour;
}

void FourBitRAM::setReadDecoderOutputThreeTriAndFour(TriInputAndGate *readDecoderOutputThreeTriAndFour) {
    FourBitRAM::readDecoderOutputThreeTriAndFour = readDecoderOutputThreeTriAndFour;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputFourTriAndOne() const {
    return readDecoderOutputFourTriAndOne;
}

void FourBitRAM::setReadDecoderOutputFourTriAndOne(TriInputAndGate *readDecoderOutputFourTriAndOne) {
    FourBitRAM::readDecoderOutputFourTriAndOne = readDecoderOutputFourTriAndOne;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputFourTriAndTwo() const {
    return readDecoderOutputFourTriAndTwo;
}

void FourBitRAM::setReadDecoderOutputFourTriAndTwo(TriInputAndGate *readDecoderOutputFourTriAndTwo) {
    FourBitRAM::readDecoderOutputFourTriAndTwo = readDecoderOutputFourTriAndTwo;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputFourTriAndThree() const {
    return readDecoderOutputFourTriAndThree;
}

void FourBitRAM::setReadDecoderOutputFourTriAndThree(TriInputAndGate *readDecoderOutputFourTriAndThree) {
    FourBitRAM::readDecoderOutputFourTriAndThree = readDecoderOutputFourTriAndThree;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputFourTriAndFour() const {
    return readDecoderOutputFourTriAndFour;
}

void FourBitRAM::setReadDecoderOutputFourTriAndFour(TriInputAndGate *readDecoderOutputFourTriAndFour) {
    FourBitRAM::readDecoderOutputFourTriAndFour = readDecoderOutputFourTriAndFour;
}

QuadInputNorGate *FourBitRAM::getDataZeroQuadNor() const {
    return dataZeroQuadNor;
}

void FourBitRAM::setDataZeroQuadNor(QuadInputNorGate *dataZeroQuadNor) {
    FourBitRAM::dataZeroQuadNor = dataZeroQuadNor;
}

QuadInputNorGate *FourBitRAM::getDataOneQuadNor() const {
    return dataOneQuadNor;
}

void FourBitRAM::setDataOneQuadNor(QuadInputNorGate *dataOneQuadNor) {
    FourBitRAM::dataOneQuadNor = dataOneQuadNor;
}

QuadInputNorGate *FourBitRAM::getDataTwoQuadNor() const {
    return dataTwoQuadNor;
}

void FourBitRAM::setDataTwoQuadNor(QuadInputNorGate *dataTwoQuadNor) {
    FourBitRAM::dataTwoQuadNor = dataTwoQuadNor;
}

QuadInputNorGate *FourBitRAM::getDataThreeQuadNor() const {
    return dataThreeQuadNor;
}

void FourBitRAM::setDataThreeQuadNor(QuadInputNorGate *dataThreeQuadNor) {
    FourBitRAM::dataThreeQuadNor = dataThreeQuadNor;
}

NandGate *FourBitRAM::getOutputNandOne() const {
    return outputNandOne;
}

void FourBitRAM::setOutputNandOne(NandGate *outputNandOne) {
    FourBitRAM::outputNandOne = outputNandOne;
}

NandGate *FourBitRAM::getOutputNandTwo() const {
    return outputNandTwo;
}

void FourBitRAM::setOutputNandTwo(NandGate *outputNandTwo) {
    FourBitRAM::outputNandTwo = outputNandTwo;
}

NandGate *FourBitRAM::getOutputNandThree() const {
    return outputNandThree;
}

void FourBitRAM::setOutputNandThree(NandGate *outputNandThree) {
    FourBitRAM::outputNandThree = outputNandThree;
}

NandGate *FourBitRAM::getOutputNandFour() const {
    return outputNandFour;
}

void FourBitRAM::setOutputNandFour(NandGate *outputNandFour) {
    FourBitRAM::outputNandFour = outputNandFour;
}

std::vector<bool> FourBitRAM::currentState() {

    // Start with Read/Write Inputs

    ///////////////////////// Step 1

    // WB

    rightRIAG->setInputX(writeInputGW);
    rightRIAG->setInputY(!writeInputWB);
    rightRIAG->answer(); // Sets output variable for rightRIAG

    // GW
    // Goes into RightInvertedAndGate

    leftRIAG->setInputX(writeInputGW);

    // Input Unknown, do others first...
    leftRIAG->setInputY(rightRIAG->answer());

    leftRIAG->answer(); // Sets output variable for leftRIAG

    writeNotA->setInput(writeInputWA);
    writeNotA->answer(); // Sets output variable for writeNotA


    writeInvertedBufferA->setInput(writeNotA->answer());
    writeInvertedBufferA->answer(); // Sets output variable for writeInvertedBufferA


    // Read Inputs

    readIBGateRead->setInput(readInputGR);
    readIBGateRead->answer();
    readNotA->setInput(readInputRA);
    readNotA->answer();
    readNotB->setInput(readInputRB);
    readNotB->answer();

    readIBGateA->setInput(readNotA->answer());
    readIBGateA->answer();
    readIBGateB->setInput(readNotB->answer());
    readIBGateB->answer();


    // Process From left to right

    /////////////////////// Step 2

    // And Gates / D Latches

    wordZeroBitZeroAnd->setInputX(rightRIAG->answer());
    wordZeroBitZeroAnd->setInputY(writeNotA->answer());

    wordZeroBitZeroAnd->answer();

    wordZeroBitZero->setEnable(wordZeroBitZeroAnd->answer());
    wordZeroBitZero->setData(data0);

    wordZeroBitZero->currentState();

    wordOneBitZeroAnd->setInputX(rightRIAG->answer());

    // Input Pin Y comes from Inverted Buffergate
    wordOneBitZeroAnd->setInputY(writeInvertedBufferA->answer());

    wordOneBitZeroAnd->answer();

    wordOneBitZero->setEnable(wordOneBitZeroAnd->answer());
    wordOneBitZero->setData(data0);

    wordOneBitZero->currentState();


    wordTwoBitZeroAnd->setInputX(leftRIAG->answer());
    wordTwoBitZeroAnd->setInputY(writeNotA->answer());

    wordTwoBitZeroAnd->answer();

    wordTwoBitZero->setEnable(wordTwoBitZeroAnd->answer());
    wordTwoBitZero->setData(data0);

    wordTwoBitZero->currentState();


    wordThreeBitZeroAnd->setInputX(leftRIAG->answer());
    wordThreeBitZeroAnd->setInputY(writeInvertedBufferA->answer());

    wordThreeBitZero->setEnable(wordThreeBitOneAnd->answer());
    wordThreeBitZero->setData(data0);

    wordThreeBitZero->currentState();


    // Tri Input And Gates

    // Quad Input Nor Gates






    return {};
}





// Inputs: DataZero, DataOne, DataTwo, DataThree, WriteG, WriteA, WriteB, ReadR, ReadA, ReadB

