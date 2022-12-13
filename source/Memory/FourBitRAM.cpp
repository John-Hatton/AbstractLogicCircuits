//
// Created by snake on 12/8/2022.
//

#include "Memory/FourBitRAM.h"


FourBitRAM::FourBitRAM() { // Constructor Prologue

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

    leftRIAG  = new RightInvertedAndGate();
    rightRIAG = new RightInvertedAndGate();

    writeNotA = new NotGate();

    readIBGateRead = new InvertedBufferGate();

    writeInvertedBufferA = new InvertedBufferGate();

    readNotA = new NotGate();

    readNotB = new NotGate();

    readIBGateA = new InvertedBufferGate();

    readIBGateB = new InvertedBufferGate();


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


    readDecoderOutputOneAndOne        = new TriInputAndGate();
    readDecoderOutputOneAndTwo        = new TriInputAndGate();
    readDecoderOutputOneAndThree      = new TriInputAndGate();
    readDecoderOutputOneAndFour       = new TriInputAndGate();
    readDecoderOutputTwoAndOne        = new TriInputAndGate();
    readDecoderOutputTwoAndTwo        = new TriInputAndGate();
    readDecoderOutputTwoAndThree      = new TriInputAndGate();
    readDecoderOutputTwoAndFour       = new TriInputAndGate();
    readDecoderOutputThreeAndOne      = new TriInputAndGate();
    readDecoderOutputThreeAndTwo   = new TriInputAndGate();
    readDecoderOutputThreeAndThree = new TriInputAndGate();
    readDecoderOutputThreeAndFour  = new TriInputAndGate();
    readDecoderOutputFourAndOne    = new TriInputAndGate();
    readDecoderOutputFourAndTwo    = new TriInputAndGate();
    readDecoderOutputFourAndThree  = new TriInputAndGate();
    readDecoderOutputFourAndFour   = new TriInputAndGate();



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



} // Constructor Epilogue



//data1234,//addressbits12, //writeenable
// This totals 7 bits. We'll give as two vectors and a bool

FourBitRAM::FourBitRAM(std::vector<bool> dataInputVector, std::vector<bool> addressInputVector, bool wEnable)
{
    writeInputGW = false;
    if (dataInputVector.size() == 4 && addressInputVector.size() == 2)
    {

        data0 = dataInputVector.at(3);
        data1 = dataInputVector.at(2);
        data2 = dataInputVector.at(1);
        data3 = dataInputVector.at(0);

        writeInputWA = addressInputVector.at(1);
        writeInputWB = addressInputVector.at(0);
        readInputRA = addressInputVector.at(1);
        readInputRB = addressInputVector.at(0);
        readInputGR = false;

        writeInputGW = wEnable;

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

        leftRIAG  = new RightInvertedAndGate();
        rightRIAG = new RightInvertedAndGate();

        writeNotA = new NotGate();

        readIBGateRead = new InvertedBufferGate();

        writeInvertedBufferA = new InvertedBufferGate();

        readNotA = new NotGate();

        readNotB = new NotGate();

        readIBGateA = new InvertedBufferGate();

        readIBGateB = new InvertedBufferGate();


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


        readDecoderOutputOneAndOne        = new TriInputAndGate();
        readDecoderOutputOneAndTwo        = new TriInputAndGate();
        readDecoderOutputOneAndThree      = new TriInputAndGate();
        readDecoderOutputOneAndFour       = new TriInputAndGate();
        readDecoderOutputTwoAndOne        = new TriInputAndGate();
        readDecoderOutputTwoAndTwo        = new TriInputAndGate();
        readDecoderOutputTwoAndThree      = new TriInputAndGate();
        readDecoderOutputTwoAndFour       = new TriInputAndGate();
        readDecoderOutputThreeAndOne      = new TriInputAndGate();
        readDecoderOutputThreeAndTwo   = new TriInputAndGate();
        readDecoderOutputThreeAndThree = new TriInputAndGate();
        readDecoderOutputThreeAndFour  = new TriInputAndGate();
        readDecoderOutputFourAndOne    = new TriInputAndGate();
        readDecoderOutputFourAndTwo    = new TriInputAndGate();
        readDecoderOutputFourAndThree  = new TriInputAndGate();
        readDecoderOutputFourAndFour   = new TriInputAndGate();



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

        currentState();
    }
}

bool FourBitRAM::getData0() const {
    return data0;
}

void FourBitRAM::setData0(bool data0) {
    FourBitRAM::data0 = data0;
}

bool FourBitRAM::getData1() const {
    return data1;
}

void FourBitRAM::setData1(bool data1) {
    FourBitRAM::data1 = data1;
}

bool FourBitRAM::getData2() const {
    return data2;
}

void FourBitRAM::setData2(bool data2) {
    FourBitRAM::data2 = data2;
}

bool FourBitRAM::getData3() const {
    return data3;
}

void FourBitRAM::setData3(bool data3) {
    FourBitRAM::data3 = data3;
}

bool FourBitRAM::getOutput1() const {
    return output1;
}

void FourBitRAM::setOutput1(bool output1) {
    FourBitRAM::output1 = output1;
}

bool FourBitRAM::getOutput2() const {
    return output2;
}

void FourBitRAM::setOutput2(bool output2) {
    FourBitRAM::output2 = output2;
}

bool FourBitRAM::getOutput3() const {
    return output3;
}

void FourBitRAM::setOutput3(bool output3) {
    FourBitRAM::output3 = output3;
}

bool FourBitRAM::getOutput4() const {
    return output4;
}

void FourBitRAM::setOutput4(bool output4) {
    FourBitRAM::output4 = output4;
}

bool FourBitRAM::getWriteInputGw() const {
    return writeInputGW;
}

void FourBitRAM::setWriteInputGw(bool writeInputGw) {
    writeInputGW = writeInputGw;
}

bool FourBitRAM::getWriteInputWa() const {
    return writeInputWA;
}

void FourBitRAM::setWriteInputWa(bool writeInputWa) {
    writeInputWA = writeInputWa;
}

bool FourBitRAM::getWriteInputWb() const {
    return writeInputWB;
}

void FourBitRAM::setWriteInputWb(bool writeInputWb) {
    writeInputWB = writeInputWb;
}

bool FourBitRAM::getReadInputGr() const {
    return readInputGR; // Might have to stay inverted, depending on diagram
}

void FourBitRAM::setReadInputGr(bool readInputGr) {
    readInputGR = readInputGr;
}

bool FourBitRAM::getReadInputRa() const {
    return readInputRA;
}

void FourBitRAM::setReadInputRa(bool readInputRa) {
    readInputRA = readInputRa;
}

bool FourBitRAM::getReadInputRb() const {
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

AndGate *FourBitRAM::getWordTwoBitZeroAnd() const {
    return wordTwoBitZeroAnd;
}

void FourBitRAM::setWordTwoBitZeroAnd(AndGate *wordTwoBitZeroAnd) {
    FourBitRAM::wordTwoBitZeroAnd = wordTwoBitZeroAnd;
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

TriInputAndGate *FourBitRAM::getReadDecoderOutputThreeAndTwo() const {
    return readDecoderOutputThreeAndTwo;
}

void FourBitRAM::setReadDecoderOutputThreeAndTwo(TriInputAndGate *readDecoderOutputThreeAndTwo) {
    FourBitRAM::readDecoderOutputThreeAndTwo = readDecoderOutputThreeAndTwo;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputThreeAndThree() const {
    return readDecoderOutputThreeAndThree;
}

void FourBitRAM::setReadDecoderOutputThreeAndThree(TriInputAndGate *readDecoderOutputThreeAndThree) {
    FourBitRAM::readDecoderOutputThreeAndThree = readDecoderOutputThreeAndThree;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputThreeAndFour() const {
    return readDecoderOutputThreeAndFour;
}

void FourBitRAM::setReadDecoderOutputThreeAndFour(TriInputAndGate *readDecoderOutputThreeAndFour) {
    FourBitRAM::readDecoderOutputThreeAndFour = readDecoderOutputThreeAndFour;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputFourAndOne() const {
    return readDecoderOutputFourAndOne;
}

void FourBitRAM::setReadDecoderOutputFourAndOne(TriInputAndGate *readDecoderOutputFourAndOne) {
    FourBitRAM::readDecoderOutputFourAndOne = readDecoderOutputFourAndOne;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputFourAndTwo() const {
    return readDecoderOutputFourAndTwo;
}

void FourBitRAM::setReadDecoderOutputFourAndTwo(TriInputAndGate *readDecoderOutputFourAndTwo) {
    FourBitRAM::readDecoderOutputFourAndTwo = readDecoderOutputFourAndTwo;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputFourAndThree() const {
    return readDecoderOutputFourAndThree;
}

void FourBitRAM::setReadDecoderOutputFourAndThree(TriInputAndGate *readDecoderOutputFourAndThree) {
    FourBitRAM::readDecoderOutputFourAndThree = readDecoderOutputFourAndThree;
}

TriInputAndGate *FourBitRAM::getReadDecoderOutputFourAndFour() const {
    return readDecoderOutputFourAndFour;
}

void FourBitRAM::setReadDecoderOutputFourAndFour(TriInputAndGate *readDecoderOutputFourAndFour) {
    FourBitRAM::readDecoderOutputFourAndFour = readDecoderOutputFourAndFour;
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

    // Inputs: DataZero, DataOne, DataTwo, DataThree, WriteG, WriteA, WriteB, ReadR, ReadA, ReadB

    ///////////////////////// Step 1

    // WB

    rightRIAG->setInputX(writeInputGW);
    rightRIAG->setInputY(writeInputWB);
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

    /////// Bit Zero

    // Word Zero

    wordZeroBitZeroAnd->setInputX(rightRIAG->answer());
    wordZeroBitZeroAnd->setInputY(writeNotA->answer());
    wordZeroBitZeroAnd->answer();

    wordZeroBitZero->setEnable(wordZeroBitZeroAnd->answer());
    wordZeroBitZero->setData(data0);
    wordZeroBitZero->currentState();

    // Word One

    wordOneBitZeroAnd->setInputX(rightRIAG->answer());
    wordOneBitZeroAnd->setInputY(writeInvertedBufferA->answer());
    wordOneBitZeroAnd->answer();

    wordOneBitZero->setEnable(wordOneBitZeroAnd->answer());
    wordOneBitZero->setData(data0);
    wordOneBitZero->currentState();

    // Word Two

    wordTwoBitZeroAnd->setInputX(leftRIAG->answer());
    wordTwoBitZeroAnd->setInputY(writeNotA->answer());
    wordTwoBitZeroAnd->answer();

    wordTwoBitZero->setEnable(wordTwoBitZeroAnd->answer());
    wordTwoBitZero->setData(data0);
    wordTwoBitZero->currentState();

    // Word Three

    wordThreeBitZeroAnd->setInputX(leftRIAG->answer());
    wordThreeBitZeroAnd->setInputY(writeInvertedBufferA->answer());
    wordThreeBitZeroAnd->answer();

    wordThreeBitZero->setEnable(wordThreeBitZeroAnd->answer());
    wordThreeBitZero->setData(data0);
    wordThreeBitZero->currentState();


    // Finish for Bits One, Two, and Three


    ///////// Bit One

    // Word Zero
    wordZeroBitOneAnd->setInputX(rightRIAG->answer());
    wordZeroBitOneAnd->setInputY(writeNotA->answer());
    wordZeroBitOneAnd->answer();

    wordZeroBitOne->setEnable(wordZeroBitOneAnd->answer());
    wordZeroBitOne->setData(data1);
    wordZeroBitOne->currentState();

    // Word One

    wordOneBitOneAnd->setInputX(rightRIAG->answer());
    wordOneBitOneAnd->setInputY(writeInvertedBufferA->answer());
    wordOneBitOneAnd->answer();

    wordOneBitOne->setEnable(wordOneBitOneAnd->answer());
    wordOneBitOne->setData(data1);
    wordOneBitOne->currentState();

    // Word Two

    wordTwoBitOneAnd->setInputX(leftRIAG->answer());
    wordTwoBitOneAnd->setInputY(writeNotA->answer());
    wordTwoBitOneAnd->answer();

    wordTwoBitOne->setEnable(wordTwoBitOneAnd->answer());
    wordTwoBitOne->setData(data1);
    wordTwoBitOne->currentState();


    // Word Three

    wordThreeBitOneAnd->setInputX(leftRIAG->answer());
    wordThreeBitOneAnd->setInputY(writeInvertedBufferA->answer());
    wordThreeBitOneAnd->answer();

    wordThreeBitOne->setEnable(wordThreeBitOneAnd->answer());
    wordThreeBitOne->setData(data1);
    wordThreeBitOne->currentState();




    ///////// Bit Two


    // Word Zero

    wordZeroBitTwoAnd->setInputX(rightRIAG->answer());
    wordZeroBitTwoAnd->setInputY(writeNotA->answer());
    wordZeroBitTwoAnd->answer();

    wordZeroBitTwo->setEnable(wordZeroBitTwoAnd->answer());
    wordZeroBitTwo->setData(data2);
    wordZeroBitTwo->currentState();

    // Word One

    wordOneBitTwoAnd->setInputX(rightRIAG->answer());
    wordOneBitTwoAnd->setInputY(writeInvertedBufferA->answer());
    wordOneBitTwoAnd->answer();

    wordOneBitTwo->setEnable(wordOneBitTwoAnd->answer());
    wordOneBitTwo->setData(data2);
    wordOneBitTwo->currentState();

    // Word Two

    wordTwoBitTwoAnd->setInputX(leftRIAG->answer());
    wordTwoBitTwoAnd->setInputY(writeNotA->answer());
    wordTwoBitTwoAnd->answer();

    wordTwoBitTwo->setEnable(wordTwoBitTwoAnd->answer());
    wordTwoBitTwo->setData(data2);
    wordTwoBitTwo->currentState();


    // Word Three

    wordThreeBitTwoAnd->setInputX(leftRIAG->answer());
    wordThreeBitTwoAnd->setInputY(writeInvertedBufferA->answer());
    wordThreeBitTwoAnd->answer();

    wordThreeBitTwo->setEnable(wordThreeBitTwoAnd->answer());
    wordThreeBitTwo->setData(data2);
    wordThreeBitTwo->currentState();


    ///////// Bit Three


    // Word Zero

    wordZeroBitThreeAnd->setInputX(rightRIAG->answer());
    wordZeroBitThreeAnd->setInputY(writeNotA->answer());
    wordZeroBitThreeAnd->answer();

    wordZeroBitThree->setEnable(wordZeroBitThreeAnd->answer());
    wordZeroBitThree->setData(data3);
    wordZeroBitThree->currentState();

    // Word One

    wordOneBitThreeAnd->setInputX(rightRIAG->answer());
    wordOneBitThreeAnd->setInputY(writeInvertedBufferA->answer());
    wordOneBitThreeAnd->answer();

    wordOneBitThree->setEnable(wordOneBitThreeAnd->answer());
    wordOneBitThree->setData(data3);
    wordOneBitThree->currentState();

    // Word Two

    wordTwoBitThreeAnd->setInputX(leftRIAG->answer());
    wordTwoBitThreeAnd->setInputY(writeNotA->answer());
    wordTwoBitThreeAnd->answer();

    wordTwoBitThree->setEnable(wordTwoBitThreeAnd->answer());
    wordTwoBitThree->setData(data3);
    wordTwoBitThree->currentState();


    // Word Three

    wordThreeBitThreeAnd->setInputX(leftRIAG->answer());
    wordThreeBitThreeAnd->setInputY(writeInvertedBufferA->answer());
    wordThreeBitThreeAnd->answer();

    wordThreeBitThree->setEnable(wordThreeBitThreeAnd->answer());
    wordThreeBitThree->setData(data3);
    wordThreeBitThree->currentState();


    // All D-Latches are populated

    // All D-Latch And gates / latch inputs have been doubly verified...


    ////////////////////////////// Step 3

    // Tri Input And Gates

    ///// Output Bit 1

    readDecoderOutputOneAndOne->setInputX(wordZeroBitZero->currentState());
    readDecoderOutputOneAndOne->setInputY(readNotB->answer());
    readDecoderOutputOneAndOne->setInputZ(readNotA->answer());
    readDecoderOutputOneAndOne->answer();


    readDecoderOutputOneAndTwo->setInputX(wordOneBitZero->currentState());
    readDecoderOutputOneAndTwo->setInputY(readNotB->answer());
    readDecoderOutputOneAndTwo->setInputZ(readIBGateA->answer());
    readDecoderOutputOneAndTwo->answer();

    readDecoderOutputOneAndThree->setInputX(wordTwoBitZero->currentState());
    readDecoderOutputOneAndThree->setInputY(readIBGateB->answer());
    readDecoderOutputOneAndThree->setInputZ(readNotA->answer());
    readDecoderOutputOneAndThree->answer();

    readDecoderOutputOneAndFour->setInputX(wordThreeBitZero->currentState());
    readDecoderOutputOneAndFour->setInputY(readIBGateB->answer());
    readDecoderOutputOneAndFour->setInputZ(readIBGateA->answer());
    readDecoderOutputOneAndFour->answer();


    ////// Output Bit 2


    readDecoderOutputTwoAndOne->setInputX(wordZeroBitOne->currentState());
    readDecoderOutputTwoAndOne->setInputY(readNotB->answer());
    readDecoderOutputTwoAndOne->setInputZ(readNotA->answer());
    readDecoderOutputTwoAndOne->answer();


    readDecoderOutputTwoAndTwo->setInputX(wordOneBitOne->currentState());
    readDecoderOutputTwoAndTwo->setInputY(readNotB->answer());
    readDecoderOutputTwoAndTwo->setInputZ(readIBGateA->answer());
    readDecoderOutputTwoAndTwo->answer();

    readDecoderOutputTwoAndThree->setInputX(wordTwoBitOne->currentState());
    readDecoderOutputTwoAndThree->setInputY(readIBGateB->answer());
    readDecoderOutputTwoAndThree->setInputZ(readNotA->answer());
    readDecoderOutputTwoAndThree->answer();

    readDecoderOutputTwoAndFour->setInputX(wordThreeBitOne->currentState());
    readDecoderOutputTwoAndFour->setInputY(readIBGateB->answer());
    readDecoderOutputTwoAndFour->setInputZ(readIBGateA->answer());
    readDecoderOutputTwoAndFour->answer();



    ///////// Output Bit 3

    readDecoderOutputThreeAndOne->setInputX(wordZeroBitTwo->currentState());
    readDecoderOutputThreeAndOne->setInputY(readNotB->answer());
    readDecoderOutputThreeAndOne->setInputZ(readNotA->answer());
    readDecoderOutputThreeAndOne->answer();

    readDecoderOutputThreeAndTwo->setInputX(wordOneBitTwo->currentState());
    readDecoderOutputThreeAndTwo->setInputY(readNotB->answer());
    readDecoderOutputThreeAndTwo->setInputZ(readIBGateA->answer());
    readDecoderOutputThreeAndTwo->answer();

    readDecoderOutputThreeAndThree->setInputX(wordTwoBitTwo->currentState());
    readDecoderOutputThreeAndThree->setInputY(readIBGateB->answer());
    readDecoderOutputThreeAndThree->setInputZ(readNotA->answer());
    readDecoderOutputThreeAndThree->answer();

    readDecoderOutputThreeAndFour->setInputX(wordThreeBitTwo->currentState());
    readDecoderOutputThreeAndFour->setInputY(readIBGateB->answer());
    readDecoderOutputThreeAndFour->setInputZ(readIBGateA->answer());
    readDecoderOutputThreeAndFour->answer();


    ////////// Output Bit 4



    readDecoderOutputFourAndOne->setInputX(wordZeroBitThree->currentState());
    readDecoderOutputFourAndOne->setInputY(readNotB->answer());
    readDecoderOutputFourAndOne->setInputZ(readNotA->answer());
    readDecoderOutputFourAndOne->answer();

    readDecoderOutputFourAndTwo->setInputX(wordOneBitThree->currentState());
    readDecoderOutputFourAndTwo->setInputY(readNotB->answer());
    readDecoderOutputFourAndTwo->setInputZ(readIBGateA->answer());
    readDecoderOutputFourAndTwo->answer();

    readDecoderOutputFourAndThree->setInputX(wordTwoBitThree->currentState());
    readDecoderOutputFourAndThree->setInputY(readIBGateB->answer());
    readDecoderOutputFourAndThree->setInputZ(readNotA->answer());
    readDecoderOutputFourAndThree->answer();

    readDecoderOutputFourAndFour->setInputX(wordThreeBitThree->currentState());
    readDecoderOutputFourAndFour->setInputY(readIBGateB->answer());
    readDecoderOutputFourAndFour->setInputZ(readIBGateA->answer());
    readDecoderOutputFourAndFour->answer();


    //////////////// Tri-Input AND Gates populated!


    // Tri-Input gates input doubly verified...

    //////////////////////////////////// Step 4

    // Quad Input Nor Gates

    dataZeroQuadNor->setInputA(readDecoderOutputOneAndOne->answer());
    dataZeroQuadNor->setInputB(readDecoderOutputOneAndTwo->answer());
    dataZeroQuadNor->setInputC(readDecoderOutputOneAndThree->answer());
    dataZeroQuadNor->setInputD(readDecoderOutputOneAndFour->answer());
    dataZeroQuadNor->answer(); // Should have output bit one!!!

    dataOneQuadNor->setInputA(readDecoderOutputTwoAndOne->answer());
    dataOneQuadNor->setInputB(readDecoderOutputTwoAndTwo->answer());
    dataOneQuadNor->setInputC(readDecoderOutputTwoAndThree->answer());
    dataOneQuadNor->setInputD(readDecoderOutputTwoAndFour->answer());
    dataOneQuadNor->answer();

    dataTwoQuadNor->setInputA(readDecoderOutputThreeAndOne->answer());
    dataTwoQuadNor->setInputB(readDecoderOutputThreeAndTwo->answer());
    dataTwoQuadNor->setInputC(readDecoderOutputThreeAndThree->answer());
    dataTwoQuadNor->setInputD(readDecoderOutputThreeAndFour->answer());
    dataTwoQuadNor->answer();

    dataThreeQuadNor->setInputA(readDecoderOutputFourAndOne->answer());
    dataThreeQuadNor->setInputB(readDecoderOutputFourAndTwo->answer());
    dataThreeQuadNor->setInputC(readDecoderOutputFourAndThree->answer());
    dataThreeQuadNor->setInputD(readDecoderOutputFourAndFour->answer());
    dataThreeQuadNor->answer();


    //////// Quad Nor Gates populated!


    ////////////////////////// Step 5


    // NandGates

    outputNandOne->setInputX(dataZeroQuadNor->answer());
    outputNandOne->setInputY(readIBGateRead->answer());
    output1 = outputNandOne->answer(); // Set final state of Output

    outputNandTwo->setInputX(dataOneQuadNor->answer());
    outputNandTwo->setInputY(readIBGateRead->answer());
    output2 = outputNandTwo->answer(); // Set final state of Output

    outputNandThree->setInputX(dataTwoQuadNor->answer());
    outputNandThree->setInputY(readIBGateRead->answer());
    output3 = outputNandThree->answer(); // Set final state of Output

    outputNandFour->setInputX(dataThreeQuadNor->answer());
    outputNandFour->setInputY(readIBGateRead->answer());
    output4 = outputNandFour->answer(); // Set final state of Output

    return {output4, output3, output2, output1};
}







