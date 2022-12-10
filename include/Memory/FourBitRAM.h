//
// Created by squid on 12/08/2022.
//
#pragma once


#include <vector>
#include "Memory/D_FlipFlop.h"
#include "LogicGates/TriInputAndGate.h"
#include "LogicGates/QuadInputNorGate.h"
#include "LogicGates/NandGate.h"
#include "LogicGates/RightInvertedAndGate.h"
#include "LogicGates/InvertedBufferGate.h"


/**
 * Four Bit RAM - This class represents the image titled FourBitRAM. This image is from the Datasheet of a
 * Texas Instruments Chip, the SN74LS170 (and variants). It's described there as 4-by-4 Register Files with
 * Open-Collector Outputs. (This refers to the transistors used, and for our abstraction can be ignored)
 *
 * The class has nine inputs and four outputs. The nine inputs correspond with four data inputs, data0, data1,
 * data2, and data3. Then we have three write inputs, two for the two bit address, and one for the write enable.
 * We can represent the four 4-bit words (addresses) as 00, 01, 10, and 11.
 *
 *
 * *** Please note, inputs are data0, data1, data2, data3 and outputs are output1, output2, ouput3, and output4 ***
 */

class FourBitRAM {

private:


    /**
     * Data Zero Input
     */
    bool data0;
    /**
     * Data One Input
     */
    bool data1;
    /**
     * Data Two Input
     */
    bool data2;
    /**
     * Data Three Input
     */
    bool data3;


    /**
     * Output Bit One (LSB)
     */
    bool output1;
    /**
     * Output Bit Two
     */
    bool output2;
    /**
     * Output Bit Three
     */
    bool output3;
    /**
     * Output Bit Four (MSB)
     */
    bool output4;


    /**
     * Write Enable Switch
     */
    bool writeInputGW;
    /**
     * Write Input Address-Bit for Address Bit 1 (2^0), or Write A
     */
    bool writeInputWA;
    /**
     * Write Input Address-Bit for Address Bit 2 2^1, or Write B
     */
    bool writeInputWB;
    /**
     * In the original documentation, but found no use. Will probably remove later.
     * Has the effect of inverting the output of bits at whatever address, might
     * come in handy somewhere
     */
    bool readInputGR;
    /**
     * Read Input Address-Bit for Address Bit 1 (2^0), or Read A
     */
    bool readInputRA;       // Read A
    /**
     * Read Input Address-Bit for Address Bit 2 (2^1), or Read B
     */
    bool readInputRB;       // Read B
    /**
     * See datasheet. Logic Gate is at the bottom left of the image, with
     * only one of the two inputs inverted, hence Right Inverted And Gate.
     * Left Gate.
     */
    RightInvertedAndGate* leftRIAG;
    /**
     * See datasheet. Logic Gate is at the bottom left of the image, with
     * only one of the two inputs inverted, hence Right Inverted And Gate.
     * Right Gate.
     */
    RightInvertedAndGate* rightRIAG;
    /**
     * See datasheet. Logic Gate directly after writeInputWA.
     */
    NotGate* writeNotA;
    /**
     * See datasheet. Logic Gate directly after writeNotA.
     */
    InvertedBufferGate* writeInvertedBufferA;
    /**
     * See datasheet. Inverted Buffer Gate on bottom right side of image. Comes
     * right after readInputGR. Necessary for proper output. If set to true,
     * output will be inverted, so use carefully...
     */
    InvertedBufferGate* readIBGateRead;
    /**
     * See datasheet. Inverter right after readInputRA.
     */
    NotGate* readNotA;
    /**
     * See datasheet. Inverter right after readInputRB.
     */
    NotGate* readNotB;
    /**
     * See datasheet. InvertedBufferGate right after readNotA.
     */
    InvertedBufferGate* readIBGateA;
    /**
     * See datasheet. InvertedBufferGate right after readNotB.
     */
    InvertedBufferGate* readIBGateB;


    /**
     * Word Zero Bit Zero is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordZeroBitZero;
    /**
     * Word Zero Bit One is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordZeroBitOne;
    /**
     * Word Zero Bit Two is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordZeroBitTwo;
    /**
     * Word Zero Bit Three is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordZeroBitThree;
    /**
     * Word One Bit Zero is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordOneBitZero;
    /**
     * Word One Bit One is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordOneBitOne;
    /**
     * Word One Bit Two is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordOneBitTwo;
    /**
     * Word One Bit Three is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordOneBitThree;
    /**
     * Word Two Bit Zero is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordTwoBitZero;
    /**
     * Word Two Bit One is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordTwoBitOne;
    /**
     * Word Two Bit Two is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordTwoBitTwo;
    /**
     * Word Two Bit Three is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordTwoBitThree;
    /**
     * Word Three Bit Zero is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordThreeBitZero;
    /**
     * Word Three Bit One is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordThreeBitOne;
    /**
     * Word Three Bit Two is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordThreeBitTwo;
    /**
     * Word Three Bit Three is one of the D Flip-Flops, which make up the four-by-four RAM.
     */
    D_FlipFlop* wordThreeBitThree;


    /**
     * Word Zero Bit Zero AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordZeroBitZeroAnd;
    /**
     * Word Zero Bit One AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordZeroBitOneAnd;
    /**
     * Word Zero Bit Two AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordZeroBitTwoAnd;
    /**
     * Word Zero Bit Three AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordZeroBitThreeAnd;
    /**
     * Word One Bit Zero AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordOneBitZeroAnd;
    /**
     * Word One Bit One AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordOneBitOneAnd;
    /**
     * Word One Bit Two AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordOneBitTwoAnd;
    /**
     * Word One Bit Three AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordOneBitThreeAnd;
    /**
     * Word Two Bit Zero AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordTwoBitZeroAnd;
    /**
     * Word Two Bit One AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordTwoBitOneAnd;
    /**
     * Word Two Bit Two AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordTwoBitTwoAnd;
    /**
     * Word Two Bit Three AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordTwoBitThreeAnd;
    /**
     * Word Three Bit Zero AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordThreeBitZeroAnd;
    /**
     * Word Three Bit One AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordThreeBitOneAnd;
    /**
     * Word Three Bit Two AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordThreeBitTwoAnd;
    /**
     * Word Three Bit Three AND Gate - Each D Flip_Flop has an AND Gate which goes into its enable pin.
     */
    AndGate* wordThreeBitThreeAnd;


    /**
     * Read Decoder Output One AND Gate #1 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputOneAndOne;
    /**
     * Read Decoder Output One AND Gate #2 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputOneAndTwo;
    /**
     * Read Decoder Output One AND Gate #3 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputOneAndThree;
    /**
     * Read Decoder Output One AND Gate #3 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputOneAndFour;
    /**
     * Read Decoder Output Two AND Gate #1 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputTwoAndOne;
    /**
     * Read Decoder Output Two AND Gate #2 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputTwoAndTwo;
    /**
     * Read Decoder Output Two AND Gate #3 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputTwoAndThree;
    /**
     * Read Decoder Output Two AND Gate #4 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputTwoAndFour;
    /**
     * Read Decoder Output Three AND Gate #1 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputThreeAndOne;
    /**
     * Read Decoder Output Three AND Gate #2 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputThreeAndTwo;
    /**
     * Read Decoder Output Three AND Gate #3 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputThreeAndThree;
    /**
     * Read Decoder Output Three AND Gate #4 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputThreeAndFour;
    /**
     * Read Decoder Output Four AND Gate #1 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputFourAndOne;
    /**
     * Read Decoder Output Four AND Gate #2 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputFourAndTwo;
    /**
     * Read Decoder Output Four AND Gate #3 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputFourAndThree;
    /**
     * Read Decoder Output Four AND Gate #4 - See datasheet, three input AND Gates.
     */
    TriInputAndGate* readDecoderOutputFourAndFour;


    /**
     * Data Zero Quad NOR Gate - Each NOR Gate is populated by the four Tri-Input AND Gates from the datasheet.
     */
    QuadInputNorGate* dataZeroQuadNor;
    /**
     * Data One Quad NOR Gate - Each NOR Gate is populated by the four Tri-Input AND Gates from the datasheet.
     */
    QuadInputNorGate* dataOneQuadNor;
    /**
     * Data Two Quad NOR Gate - Each NOR Gate is populated by the four Tri-Input AND Gates from the datasheet.
     */
    QuadInputNorGate* dataTwoQuadNor;
    /**
     * Data Three Quad NOR Gate - Each NOR Gate is populated by the four Tri-Input AND Gates from the datasheet.
     */
    QuadInputNorGate* dataThreeQuadNor;


    // NAND GATES

    /**
     * Output NAND Gate #1 - Populated by each QuadInputNOR Gate and the READ-Enable / Flip Switch.
     * See datasheet.
     */
    NandGate* outputNandOne;
    /**
     * Output NAND Gate #2 - Populated by each QuadInputNOR Gate and the READ-Enable / Flip Switch.
     * See datasheet.
     */
    NandGate* outputNandTwo;
    /**
     * Output NAND Gate #3 - Populated by each QuadInputNOR Gate and the READ-Enable / Flip Switch.
     * See datasheet.
     */
    NandGate* outputNandThree;
    /**
     * Output NAND Gate #4 - Populated by each QuadInputNOR Gate and the READ-Enable / Flip Switch.
     * See datasheet.
     */
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
