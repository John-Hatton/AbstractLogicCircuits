//
// Created by squid on 12/8/2022.
//
#pragma once


#include <vector>
#include "Memory/D_FlipFlop.h"
#include "LogicGates/TriInputAndGate.h"
#include "LogicGates/QuadInputNorGate.h"
#include "LogicGates/NandGate.h"
#include "LogicGates/RightInvertedAndGate.h"
#include "LogicGates/InvertedBufferGate.h"

class FourBitRAM {


private:


    bool data0;

    bool data1;

    bool data2;

    bool data3;


    bool output1;

    bool output2;

    bool output3;

    bool output4;


    bool writeInputGW;      // Write Enable (BOTH)

    bool writeInputWA;      // Write A

    bool writeInputWB;      // Write B

    bool readInputGR;       // Read Enable (BOTH)

    bool readInputRA;       // Read A

    bool readInputRB;       // Read B



    RightInvertedAndGate* leftRIAG;

    RightInvertedAndGate* rightRIAG;

    NotGate* writeNotA;

    InvertedBufferGate* writeInvertedBufferA;

    InvertedBufferGate* readIBGateRead;

    NotGate* readNotA;

    NotGate* readNotB;

    InvertedBufferGate* readIBGateA;

    InvertedBufferGate* readIBGateB;


    D_FlipFlop* wordZeroBitZero;

    D_FlipFlop* wordZeroBitOne;

    D_FlipFlop* wordZeroBitTwo;

    D_FlipFlop* wordZeroBitThree;

    D_FlipFlop* wordOneBitZero;

    D_FlipFlop* wordOneBitOne;

    D_FlipFlop* wordOneBitTwo;

    D_FlipFlop* wordOneBitThree;

    D_FlipFlop* wordTwoBitZero;

    D_FlipFlop* wordTwoBitOne;

    D_FlipFlop* wordTwoBitTwo;

    D_FlipFlop* wordTwoBitThree;

    D_FlipFlop* wordThreeBitZero;

    D_FlipFlop* wordThreeBitOne;

    D_FlipFlop* wordThreeBitTwo;

    D_FlipFlop* wordThreeBitThree;

    // AND GATES BEFORE D LATCHES

    AndGate* wordZeroBitZeroAnd;

    AndGate* wordZeroBitOneAnd;

    AndGate* wordZeroBitTwoAnd;

    AndGate* wordZeroBitThreeAnd;

    AndGate* wordOneBitZeroAnd;

    AndGate* wordOneBitOneAnd;

    AndGate* wordOneBitTwoAnd;

    AndGate* wordOneBitThreeAnd;

    AndGate* wordTwoBitZeroAnd;

    AndGate* wordTwoBitOneAnd;

    AndGate* wordTwoBitTwoAnd;

    AndGate* wordTwoBitThreeAnd;

    AndGate* wordThreeBitZeroAnd;

    AndGate* wordThreeBitOneAnd;

    AndGate* wordThreeBitTwoAnd;

    AndGate* wordThreeBitThreeAnd;

    // TRI INPUT AND GATES

    TriInputAndGate* readDecoderOutputOneAndOne;

    TriInputAndGate* readDecoderOutputOneAndTwo;

    TriInputAndGate* readDecoderOutputOneAndThree;

    TriInputAndGate* readDecoderOutputOneAndFour;

    TriInputAndGate* readDecoderOutputTwoAndOne;

    TriInputAndGate* readDecoderOutputTwoAndTwo;

    TriInputAndGate* readDecoderOutputTwoAndThree;

    TriInputAndGate* readDecoderOutputTwoAndFour;

    TriInputAndGate* readDecoderOutputThreeAndOne;

    TriInputAndGate* readDecoderOutputThreeAndTwo;

    TriInputAndGate* readDecoderOutputThreeAndThree;

    TriInputAndGate* readDecoderOutputThreeAndFour;

    TriInputAndGate* readDecoderOutputFourAndOne;

    TriInputAndGate* readDecoderOutputFourAndTwo;

    TriInputAndGate* readDecoderOutputFourAndThree;

    TriInputAndGate* readDecoderOutputFourAndFour;


    // QUAD INPUT NOR GATES


    QuadInputNorGate* dataZeroQuadNor;

    QuadInputNorGate* dataOneQuadNor;

    QuadInputNorGate* dataTwoQuadNor;

    QuadInputNorGate* dataThreeQuadNor;


    // NAND GATES


    NandGate* outputNandOne;

    NandGate* outputNandTwo;

    NandGate* outputNandThree;

    NandGate* outputNandFour;






public:

    FourBitRAM();

    bool isData0() const;

    void setData0(bool data0);

    bool isData1() const;

    void setData1(bool data1);

    bool isData2() const;

    void setData2(bool data2);

    bool isData3() const;

    void setData3(bool data3);

    bool isOutput1() const;

    void setOutput1(bool output1);

    bool isOutput2() const;

    void setOutput2(bool output2);

    bool isOutput3() const;

    void setOutput3(bool output3);

    bool isOutput4() const;

    void setOutput4(bool output4);

    bool isWriteInputGw() const;

    void setWriteInputGw(bool writeInputGw);

    bool isWriteInputWa() const;

    void setWriteInputWa(bool writeInputWa);

    bool isWriteInputWb() const;

    void setWriteInputWb(bool writeInputWb);

    bool isReadInputGr() const;

    void setReadInputGr(bool readInputGr);

    bool isReadInputRa() const;

    void setReadInputRa(bool readInputRa);

    bool isReadInputRb() const;

    void setReadInputRb(bool readInputRb);

    InvertedBufferGate *getReadIbGateRead() const;

    void setReadIbGateRead(InvertedBufferGate *readIbGateRead);

    NotGate *getReadNotA() const;

    void setReadNotA(NotGate *readNotA);

    NotGate *getReadNotB() const;

    void setReadNotB(NotGate *readNotB);

    InvertedBufferGate *getReadIbGateA() const;

    void setReadIbGateA(InvertedBufferGate *readIbGateA);

    InvertedBufferGate *getReadIbGateB() const;

    void setReadIbGateB(InvertedBufferGate *readIbGateB);

    RightInvertedAndGate *getLeftRiag() const;

    void setLeftRiag(RightInvertedAndGate *leftRiag);

    RightInvertedAndGate *getRightRiag() const;

    void setRightRiag(RightInvertedAndGate *rightRiag);

    NotGate *getWriteNotA() const;

    void setWriteNotA(NotGate *writeNotA);

    InvertedBufferGate *getWriteInvertedBufferA() const;

    void setWriteInvertedBufferA(InvertedBufferGate *writeInvertedBufferA);

    D_FlipFlop *getWordZeroBitZero() const;

    void setWordZeroBitZero(D_FlipFlop *wordZeroBitZero);

    D_FlipFlop *getWordZeroBitOne() const;

    void setWordZeroBitOne(D_FlipFlop *wordZeroBitOne);

    D_FlipFlop *getWordZeroBitTwo() const;

    void setWordZeroBitTwo(D_FlipFlop *wordZeroBitTwo);

    D_FlipFlop *getWordZeroBitThree() const;

    void setWordZeroBitThree(D_FlipFlop *wordZeroBitThree);

    D_FlipFlop *getWordOneBitZero() const;

    void setWordOneBitZero(D_FlipFlop *wordOneBitZero);

    D_FlipFlop *getWordOneBitOne() const;

    void setWordOneBitOne(D_FlipFlop *wordOneBitOne);

    D_FlipFlop *getWordOneBitTwo() const;

    void setWordOneBitTwo(D_FlipFlop *wordOneBitTwo);

    D_FlipFlop *getWordOneBitThree() const;

    void setWordOneBitThree(D_FlipFlop *wordOneBitThree);

    D_FlipFlop *getWordTwoBitZero() const;

    void setWordTwoBitZero(D_FlipFlop *wordTwoBitZero);

    D_FlipFlop *getWordTwoBitOne() const;

    void setWordTwoBitOne(D_FlipFlop *wordTwoBitOne);

    D_FlipFlop *getWordTwoBitTwo() const;

    void setWordTwoBitTwo(D_FlipFlop *wordTwoBitTwo);

    D_FlipFlop *getWordTwoBitThree() const;

    void setWordTwoBitThree(D_FlipFlop *wordTwoBitThree);

    D_FlipFlop *getWordThreeBitZero() const;

    void setWordThreeBitZero(D_FlipFlop *wordThreeBitZero);

    D_FlipFlop *getWordThreeBitOne() const;

    void setWordThreeBitOne(D_FlipFlop *wordThreeBitOne);

    D_FlipFlop *getWordThreeBitTwo() const;

    void setWordThreeBitTwo(D_FlipFlop *wordThreeBitTwo);

    D_FlipFlop *getWordThreeBitThree() const;

    void setWordThreeBitThree(D_FlipFlop *wordThreeBitThree);

    AndGate *getWordZeroBitZeroAnd() const;

    void setWordZeroBitZeroAnd(AndGate *wordZeroBitZeroAnd);

    AndGate *getWordZeroBitOneAnd() const;

    void setWordZeroBitOneAnd(AndGate *wordZeroBitOneAnd);

    AndGate *getWordZeroBitTwoAnd() const;

    void setWordZeroBitTwoAnd(AndGate *wordZeroBitTwoAnd);

    AndGate *getWordZeroBitThreeAnd() const;

    void setWordZeroBitThreeAnd(AndGate *wordZeroBitThreeAnd);

    AndGate *getWordOneBitZeroAnd() const;

    void setWordOneBitZeroAnd(AndGate *wordOneBitZeroAnd);

    AndGate *getWordOneBitOneAnd() const;

    void setWordOneBitOneAnd(AndGate *wordOneBitOneAnd);

    AndGate *getWordOneBitTwoAnd() const;

    void setWordOneBitTwoAnd(AndGate *wordOneBitTwoAnd);

    AndGate *getWordOneBitThreeAnd() const;

    void setWordOneBitThreeAnd(AndGate *wordOneBitThreeAnd);

    AndGate *getWordTwoBitZeroAnd() const;

    void setWordTwoBitZeroAnd(AndGate *wordTwoBitZeroAnd);

    AndGate *getWordTwoBitOneAnd() const;

    void setWordTwoBitOneAnd(AndGate *wordTwoBitOneAnd);

    AndGate *getWordTwoBitTwoAnd() const;

    void setWordTwoBitTwoAnd(AndGate *wordTwoBitTwoAnd);

    AndGate *getWordTwoBitThreeAnd() const;

    void setWordTwoBitThreeAnd(AndGate *wordTwoBitThreeAnd);

    AndGate *getWordThreeBitZeroAnd() const;

    void setWordThreeBitZeroAnd(AndGate *wordThreeBitZeroAnd);

    AndGate *getWordThreeBitOneAnd() const;

    void setWordThreeBitOneAnd(AndGate *wordThreeBitOneAnd);

    AndGate *getWordThreeBitTwoAnd() const;

    void setWordThreeBitTwoAnd(AndGate *wordThreeBitTwoAnd);

    AndGate *getWordThreeBitThreeAnd() const;

    void setWordThreeBitThreeAnd(AndGate *wordThreeBitThreeAnd);






    TriInputAndGate *getReadDecoderOutputOneAndOne() const;

    void setReadDecoderOutputOneAndOne(TriInputAndGate *readDecoderOutputOneAndOne);

    TriInputAndGate *getReadDecoderOutputOneAndTwo() const;

    void setReadDecoderOutputOneAndTwo(TriInputAndGate *readDecoderOutputOneAndTwo);

    TriInputAndGate *getReadDecoderOutputOneAndThree() const;

    void setReadDecoderOutputOneAndThree(TriInputAndGate *readDecoderOutputOneAndThree);

    TriInputAndGate *getReadDecoderOutputOneAndFour() const;

    void setReadDecoderOutputOneAndFour(TriInputAndGate *readDecoderOutputOneAndFour);

    TriInputAndGate *getReadDecoderOutputTwoAndOne() const;

    void setReadDecoderOutputTwoAndOne(TriInputAndGate *readDecoderOutputTwoAndOne);

    TriInputAndGate *getReadDecoderOutputTwoAndTwo() const;

    void setReadDecoderOutputTwoAndTwo(TriInputAndGate *readDecoderOutputTwoAndTwo);

    TriInputAndGate *getReadDecoderOutputTwoAndThree() const;

    void setReadDecoderOutputTwoAndThree(TriInputAndGate *readDecoderOutputTwoAndThree);

    TriInputAndGate *getReadDecoderOutputTwoAndFour() const;

    void setReadDecoderOutputTwoAndFour(TriInputAndGate *readDecoderOutputTwoAndFour);

    TriInputAndGate *getReadDecoderOutputThreeAndOne() const;

    void setReadDecoderOutputThreeAndOne(TriInputAndGate *readDecoderOutputThreeAndOne);

    TriInputAndGate *getReadDecoderOutputThreeAndTwo() const;

    void setReadDecoderOutputThreeAndTwo(TriInputAndGate *readDecoderOutputThreeAndTwo);

    TriInputAndGate *getReadDecoderOutputThreeAndThree() const;

    void setReadDecoderOutputThreeAndThree(TriInputAndGate *readDecoderOutputThreeAndThree);

    TriInputAndGate *getReadDecoderOutputThreeAndFour() const;

    void setReadDecoderOutputThreeAndFour(TriInputAndGate *readDecoderOutputThreeAndFour);

    TriInputAndGate *getReadDecoderOutputFourAndOne() const;

    void setReadDecoderOutputFourAndOne(TriInputAndGate *readDecoderOutputFourAndOne);

    TriInputAndGate *getReadDecoderOutputFourAndTwo() const;

    void setReadDecoderOutputFourAndTwo(TriInputAndGate *readDecoderOutputFourAndTwo);

    TriInputAndGate *getReadDecoderOutputFourAndThree() const;

    void setReadDecoderOutputFourAndThree(TriInputAndGate *readDecoderOutputFourAndThree);

    TriInputAndGate *getReadDecoderOutputFourAndFour() const;

    void setReadDecoderOutputFourAndFour(TriInputAndGate *readDecoderOutputFourAndFour);




    QuadInputNorGate *getDataZeroQuadNor() const;

    void setDataZeroQuadNor(QuadInputNorGate *dataZeroQuadNor);

    QuadInputNorGate *getDataOneQuadNor() const;

    void setDataOneQuadNor(QuadInputNorGate *dataOneQuadNor);

    QuadInputNorGate *getDataTwoQuadNor() const;

    void setDataTwoQuadNor(QuadInputNorGate *dataTwoQuadNor);

    QuadInputNorGate *getDataThreeQuadNor() const;

    void setDataThreeQuadNor(QuadInputNorGate *dataThreeQuadNor);

    NandGate *getOutputNandOne() const;

    void setOutputNandOne(NandGate *outputNandOne);

    NandGate *getOutputNandTwo() const;

    void setOutputNandTwo(NandGate *outputNandTwo);

    NandGate *getOutputNandThree() const;

    void setOutputNandThree(NandGate *outputNandThree);

    NandGate *getOutputNandFour() const;

    void setOutputNandFour(NandGate *outputNandFour);


    std::vector<bool> currentState();

};
