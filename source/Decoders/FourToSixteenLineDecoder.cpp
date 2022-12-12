//
// Created by snake on 12/11/2022.
//

#include <iostream>
#include "Decoders/FourToSixteenLineDecoder.h"

FourToSixteenLineDecoder::FourToSixteenLineDecoder() {

    writeEnable = false;

    selectInputNotA = new NotGate();
    selectInputNotB = new NotGate();
    selectInputNotC = new NotGate();
    selectInputNotD = new NotGate();

    selectInputIBA = new InvertedBufferGate();
    selectInputIBB = new InvertedBufferGate();
    selectInputIBC = new InvertedBufferGate();
    selectInputIBD = new InvertedBufferGate();


    outNand0 = new FiveInputNandGate();
    outNand1 = new FiveInputNandGate();
    outNand2 = new FiveInputNandGate();
    outNand3 = new FiveInputNandGate();
    outNand4 = new FiveInputNandGate();
    outNand5 = new FiveInputNandGate();
    outNand6 = new FiveInputNandGate();
    outNand7 = new FiveInputNandGate();
    outNand8 = new FiveInputNandGate();
    outNand9 = new FiveInputNandGate();
    outNand10 = new FiveInputNandGate();
    outNand11 = new FiveInputNandGate();
    outNand12 = new FiveInputNandGate();
    outNand13 = new FiveInputNandGate();
    outNand14 = new FiveInputNandGate();
    outNand15 = new FiveInputNandGate();

}

FourToSixteenLineDecoder::FourToSixteenLineDecoder(std::vector<bool> dataInputVector, bool wEnable) {
    writeEnable = false;

    if (dataInputVector.size() == 4)
    {
        writeEnable = wEnable;

        selectInputNotA = new NotGate();
        selectInputNotB = new NotGate();
        selectInputNotC = new NotGate();
        selectInputNotD = new NotGate();

        selectInputIBA = new InvertedBufferGate();
        selectInputIBB = new InvertedBufferGate();
        selectInputIBC = new InvertedBufferGate();
        selectInputIBD = new InvertedBufferGate();


        outNand0 = new FiveInputNandGate();
        outNand1 = new FiveInputNandGate();
        outNand2 = new FiveInputNandGate();
        outNand3 = new FiveInputNandGate();
        outNand4 = new FiveInputNandGate();
        outNand5 = new FiveInputNandGate();
        outNand6 = new FiveInputNandGate();
        outNand7 = new FiveInputNandGate();
        outNand8 = new FiveInputNandGate();
        outNand9 = new FiveInputNandGate();
        outNand10 = new FiveInputNandGate();
        outNand11 = new FiveInputNandGate();
        outNand12 = new FiveInputNandGate();
        outNand13 = new FiveInputNandGate();
        outNand14 = new FiveInputNandGate();
        outNand15 = new FiveInputNandGate();

        setWriteEnable(wEnable);
        setInputA(dataInputVector.at(3)); // Least Significant Bit is last in the array.
        setInputB(dataInputVector.at(2));
        setInputC(dataInputVector.at(1));
        setInputD(dataInputVector.at(0)); // MSB

        currentState();
        out0 = outNand0->getOutput();
        out1 = outNand1->getOutput();
        out2 = outNand2->getOutput();
        out3 = outNand3->getOutput();
        out4 = outNand4->getOutput();
        out5 = outNand5->getOutput();
        out6 = outNand6->getOutput();
        out7 = outNand7->getOutput();
        out8 = outNand8->getOutput();
        out9 = outNand9->getOutput();
        out10 = outNand10->getOutput();
        out11 = outNand11->getOutput();
        out12 = outNand12->getOutput();
        out13 = outNand13->getOutput();
        out14 = outNand14->getOutput();
        out15 = outNand15->getOutput();
    }
}

bool FourToSixteenLineDecoder::getWriteEnable() const {
    return writeEnable;
}

void FourToSixteenLineDecoder::setWriteEnable(bool writeEnable) {
    FourToSixteenLineDecoder::writeEnable = writeEnable;
}

bool FourToSixteenLineDecoder::getInputA() const {
    return inputA;
}

void FourToSixteenLineDecoder::setInputA(bool inputA) {
    FourToSixteenLineDecoder::inputA = inputA;
}

bool FourToSixteenLineDecoder::getInputB() const {
    return inputB;
}

void FourToSixteenLineDecoder::setInputB(bool inputB) {
    FourToSixteenLineDecoder::inputB = inputB;
}

bool FourToSixteenLineDecoder::getInputC() const {
    return inputC;
}

void FourToSixteenLineDecoder::setInputC(bool inputC) {
    FourToSixteenLineDecoder::inputC = inputC;
}

bool FourToSixteenLineDecoder::getInputD() const {
    return inputD;
}

void FourToSixteenLineDecoder::setInputD(bool inputD) {
    FourToSixteenLineDecoder::inputD = inputD;
}

NotGate *FourToSixteenLineDecoder::getSelectInputNotA() const {
    return selectInputNotA;
}

void FourToSixteenLineDecoder::setSelectInputNotA(NotGate *selectInputNotA) {
    FourToSixteenLineDecoder::selectInputNotA = selectInputNotA;
}

NotGate *FourToSixteenLineDecoder::getSelectInputNotB() const {
    return selectInputNotB;
}

void FourToSixteenLineDecoder::setSelectInputNotB(NotGate *selectInputNotB) {
    FourToSixteenLineDecoder::selectInputNotB = selectInputNotB;
}

NotGate *FourToSixteenLineDecoder::getSelectInputNotC() const {
    return selectInputNotC;
}

void FourToSixteenLineDecoder::setSelectInputNotC(NotGate *selectInputNotC) {
    FourToSixteenLineDecoder::selectInputNotC = selectInputNotC;
}

NotGate *FourToSixteenLineDecoder::getSelectInputNotD() const {
    return selectInputNotD;
}

void FourToSixteenLineDecoder::setSelectInputNotD(NotGate *selectInputNotD) {
    FourToSixteenLineDecoder::selectInputNotD = selectInputNotD;
}

InvertedBufferGate *FourToSixteenLineDecoder::getSelectInputIba() const {
    return selectInputIBA;
}

void FourToSixteenLineDecoder::setSelectInputIba(InvertedBufferGate *selectInputIba) {
    selectInputIBA = selectInputIba;
}

InvertedBufferGate *FourToSixteenLineDecoder::getSelectInputIbb() const {
    return selectInputIBB;
}

void FourToSixteenLineDecoder::setSelectInputIbb(InvertedBufferGate *selectInputIbb) {
    selectInputIBB = selectInputIbb;
}

InvertedBufferGate *FourToSixteenLineDecoder::getSelectInputIbc() const {
    return selectInputIBC;
}

void FourToSixteenLineDecoder::setSelectInputIbc(InvertedBufferGate *selectInputIbc) {
    selectInputIBC = selectInputIbc;
}

InvertedBufferGate *FourToSixteenLineDecoder::getSelectInputIbd() const {
    return selectInputIBD;
}

void FourToSixteenLineDecoder::setSelectInputIbd(InvertedBufferGate *selectInputIbd) {
    selectInputIBD = selectInputIbd;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand0() const {
    return outNand0;
}

void FourToSixteenLineDecoder::setOutNand0(FiveInputNandGate *outNand0) {
    FourToSixteenLineDecoder::outNand0 = outNand0;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand1() const {
    return outNand1;
}

void FourToSixteenLineDecoder::setOutNand1(FiveInputNandGate *outNand1) {
    FourToSixteenLineDecoder::outNand1 = outNand1;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand2() const {
    return outNand2;
}

void FourToSixteenLineDecoder::setOutNand2(FiveInputNandGate *outNand2) {
    FourToSixteenLineDecoder::outNand2 = outNand2;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand3() const {
    return outNand3;
}

void FourToSixteenLineDecoder::setOutNand3(FiveInputNandGate *outNand3) {
    FourToSixteenLineDecoder::outNand3 = outNand3;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand4() const {
    return outNand4;
}

void FourToSixteenLineDecoder::setOutNand4(FiveInputNandGate *outNand4) {
    FourToSixteenLineDecoder::outNand4 = outNand4;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand5() const {
    return outNand5;
}

void FourToSixteenLineDecoder::setOutNand5(FiveInputNandGate *outNand5) {
    FourToSixteenLineDecoder::outNand5 = outNand5;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand6() const {
    return outNand6;
}

void FourToSixteenLineDecoder::setOutNand6(FiveInputNandGate *outNand6) {
    FourToSixteenLineDecoder::outNand6 = outNand6;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand7() const {
    return outNand7;
}

void FourToSixteenLineDecoder::setOutNand7(FiveInputNandGate *outNand7) {
    FourToSixteenLineDecoder::outNand7 = outNand7;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand8() const {
    return outNand8;
}

void FourToSixteenLineDecoder::setOutNand8(FiveInputNandGate *outNand8) {
    FourToSixteenLineDecoder::outNand8 = outNand8;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand9() const {
    return outNand9;
}

void FourToSixteenLineDecoder::setOutNand9(FiveInputNandGate *outNand9) {
    FourToSixteenLineDecoder::outNand9 = outNand9;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand10() const {
    return outNand10;
}

void FourToSixteenLineDecoder::setOutNand10(FiveInputNandGate *outNand10) {
    FourToSixteenLineDecoder::outNand10 = outNand10;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand11() const {
    return outNand11;
}

void FourToSixteenLineDecoder::setOutNand11(FiveInputNandGate *outNand11) {
    FourToSixteenLineDecoder::outNand11 = outNand11;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand12() const {
    return outNand12;
}

void FourToSixteenLineDecoder::setOutNand12(FiveInputNandGate *outNand12) {
    FourToSixteenLineDecoder::outNand12 = outNand12;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand13() const {
    return outNand13;
}

void FourToSixteenLineDecoder::setOutNand13(FiveInputNandGate *outNand13) {
    FourToSixteenLineDecoder::outNand13 = outNand13;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand14() const {
    return outNand14;
}

void FourToSixteenLineDecoder::setOutNand14(FiveInputNandGate *outNand14) {
    FourToSixteenLineDecoder::outNand14 = outNand14;
}

FiveInputNandGate *FourToSixteenLineDecoder::getOutNand15() const {
    return outNand15;
}

void FourToSixteenLineDecoder::setOutNand15(FiveInputNandGate *outNand15) {
    FourToSixteenLineDecoder::outNand15 = outNand15;
}

bool FourToSixteenLineDecoder::getOut0() const {
    return out0;
}

void FourToSixteenLineDecoder::setOut0(bool out0) {
    FourToSixteenLineDecoder::out0 = out0;
}

bool FourToSixteenLineDecoder::getOut1() const {
    return out1;
}

void FourToSixteenLineDecoder::setOut1(bool out1) {
    FourToSixteenLineDecoder::out1 = out1;
}

bool FourToSixteenLineDecoder::getOut2() const {
    return out2;
}

void FourToSixteenLineDecoder::setOut2(bool out2) {
    FourToSixteenLineDecoder::out2 = out2;
}

bool FourToSixteenLineDecoder::getOut3() const {
    return out3;
}

void FourToSixteenLineDecoder::setOut3(bool out3) {
    FourToSixteenLineDecoder::out3 = out3;
}

bool FourToSixteenLineDecoder::getOut4() const {
    return out4;
}

void FourToSixteenLineDecoder::setOut4(bool out4) {
    FourToSixteenLineDecoder::out4 = out4;
}

bool FourToSixteenLineDecoder::getOut5() const {
    return out5;
}

void FourToSixteenLineDecoder::setOut5(bool out5) {
    FourToSixteenLineDecoder::out5 = out5;
}

bool FourToSixteenLineDecoder::getOut6() const {
    return out6;
}

void FourToSixteenLineDecoder::setOut6(bool out6) {
    FourToSixteenLineDecoder::out6 = out6;
}

bool FourToSixteenLineDecoder::getOut7() const {
    return out7;
}

void FourToSixteenLineDecoder::setOut7(bool out7) {
    FourToSixteenLineDecoder::out7 = out7;
}

bool FourToSixteenLineDecoder::getOut8() const {
    return out8;
}

void FourToSixteenLineDecoder::setOut8(bool out8) {
    FourToSixteenLineDecoder::out8 = out8;
}

bool FourToSixteenLineDecoder::getOut9() const {
    return out9;
}

void FourToSixteenLineDecoder::setOut9(bool out9) {
    FourToSixteenLineDecoder::out9 = out9;
}

bool FourToSixteenLineDecoder::getOut10() const {
    return out10;
}

void FourToSixteenLineDecoder::setOut10(bool out10) {
    FourToSixteenLineDecoder::out10 = out10;
}

bool FourToSixteenLineDecoder::getOut11() const {
    return out11;
}

void FourToSixteenLineDecoder::setOut11(bool out11) {
    FourToSixteenLineDecoder::out11 = out11;
}

bool FourToSixteenLineDecoder::getOut12() const {
    return out12;
}

void FourToSixteenLineDecoder::setOut12(bool out12) {
    FourToSixteenLineDecoder::out12 = out12;
}

bool FourToSixteenLineDecoder::getOut13() const {
    return out13;
}

void FourToSixteenLineDecoder::setOut13(bool out13) {
    FourToSixteenLineDecoder::out13 = out13;
}

bool FourToSixteenLineDecoder::getOut14() const {
    return out14;
}

void FourToSixteenLineDecoder::setOut14(bool out14) {
    FourToSixteenLineDecoder::out14 = out14;
}

bool FourToSixteenLineDecoder::getOut15() const {
    return out15;
}

void FourToSixteenLineDecoder::setOut15(bool out15) {
    FourToSixteenLineDecoder::out15 = out15;
}

std::vector<bool> FourToSixteenLineDecoder::currentState() {


    // 1. Populate NOT Gates
    selectInputNotA->setInput(inputA);
    selectInputNotB->setInput(inputB);
    selectInputNotC->setInput(inputC);
    selectInputNotD->setInput(inputD);

    // 2. Populate IB Gates

    selectInputIBA->setInput(selectInputNotA->answer());
    selectInputIBB->setInput(selectInputNotB->answer());
    selectInputIBC->setInput(selectInputNotC->answer());
    selectInputIBD->setInput(selectInputNotD->answer());

    if ((selectInputIBA->answer() != inputA) || (selectInputIBB->answer() != inputB)
    || (selectInputIBC->answer() != inputC)|| (selectInputIBD->answer() != inputD))
    {

        // Somehow the inputs were not properly updated, if this is the case, we'll exit the program...
        std::cout << "Something went wrong populating Inverted Buffer Gates or Not Gates for A,B,C, or D." << std::endl;
        abort();
    }




        // 3. Populate NAND Gates
    // Be sure to set outputs with the answer fcn of nand gates.

    outNand0->setInputI(selectInputNotA->answer());
    outNand0->setInputIi(selectInputNotB->answer());
    outNand0->setInputIii(selectInputNotC->answer());
    outNand0->setInputIv(selectInputNotD->answer());
    outNand0->setInputV(writeEnable);
    out0 = outNand0->answer();

    outNand1->setInputI(selectInputIBA->answer());
    outNand1->setInputIi(selectInputNotB->answer());
    outNand1->setInputIii(selectInputNotC->answer());
    outNand1->setInputIv(selectInputNotD->answer());
    outNand1->setInputV(writeEnable);
    out1 = outNand1->answer();

    outNand2->setInputI(selectInputNotA->answer());
    outNand2->setInputIi(selectInputIBB->answer());
    outNand2->setInputIii(selectInputNotC->answer());
    outNand2->setInputIv(selectInputNotD->answer());
    outNand2->setInputV(writeEnable);
    out2 = outNand2->answer();

    outNand3->setInputI(selectInputIBA->answer());
    outNand3->setInputIi(selectInputIBB->answer());
    outNand3->setInputIii(selectInputNotC->answer());
    outNand3->setInputIv(selectInputNotD->answer());
    outNand3->setInputV(writeEnable);
    out3 = outNand3->answer();


    outNand4->setInputI(selectInputNotA->answer());
    outNand4->setInputIi(selectInputNotB->answer());
    outNand4->setInputIii(selectInputIBC->answer());
    outNand4->setInputIv(selectInputNotD->answer());
    outNand4->setInputV(writeEnable);
    out4 = outNand4->answer();


    outNand5->setInputI(selectInputIBA->answer());
    outNand5->setInputIi(selectInputNotB->answer());
    outNand5->setInputIii(selectInputIBC->answer());
    outNand5->setInputIv(selectInputNotD->answer());
    outNand5->setInputV(writeEnable);
    out5 = outNand5->answer();

    outNand6->setInputI(selectInputNotA->answer());
    outNand6->setInputIi(selectInputIBB->answer());
    outNand6->setInputIii(selectInputIBC->answer());
    outNand6->setInputIv(selectInputNotD->answer());
    outNand6->setInputV(writeEnable);
    out6 = outNand6->answer();

    outNand7->setInputI(selectInputIBA->answer());
    outNand7->setInputIi(selectInputIBB->answer());
    outNand7->setInputIii(selectInputIBC->answer());
    outNand7->setInputIv(selectInputNotD->answer());
    outNand7->setInputV(writeEnable);
    out7 = outNand7->answer();

    outNand8->setInputI(selectInputNotA->answer());
    outNand8->setInputIi(selectInputNotB->answer());
    outNand8->setInputIii(selectInputNotC->answer());
    outNand8->setInputIv(selectInputIBD->answer());
    outNand8->setInputV(writeEnable);
    out8 = outNand8->answer();

    outNand9->setInputI(selectInputIBA->answer());
    outNand9->setInputIi(selectInputNotB->answer());
    outNand9->setInputIii(selectInputNotC->answer());
    outNand9->setInputIv(selectInputIBD->answer());
    outNand9->setInputV(writeEnable);
    out9 = outNand9->answer();

    outNand10->setInputI(selectInputNotA->answer());
    outNand10->setInputIi(selectInputIBB->answer());
    outNand10->setInputIii(selectInputNotC->answer());
    outNand10->setInputIv(selectInputIBD->answer());
    outNand10->setInputV(writeEnable);
    out10 = outNand10->answer();

    outNand11->setInputI(selectInputIBA->answer());
    outNand11->setInputIi(selectInputIBB->answer());
    outNand11->setInputIii(selectInputNotC->answer());
    outNand11->setInputIv(selectInputIBD->answer());
    outNand11->setInputV(writeEnable);
    out11 = outNand11->answer();

    outNand12->setInputI(selectInputNotA->answer());
    outNand12->setInputIi(selectInputNotB->answer());
    outNand12->setInputIii(selectInputIBC->answer());
    outNand12->setInputIv(selectInputIBD->answer());
    outNand12->setInputV(writeEnable);
    out12 = outNand12->answer();

    outNand13->setInputI(selectInputIBA->answer());
    outNand13->setInputIi(selectInputNotB->answer());
    outNand13->setInputIii(selectInputIBC->answer());
    outNand13->setInputIv(selectInputIBD->answer());
    outNand13->setInputV(writeEnable);
    out13 = outNand13->answer();

    outNand14->setInputI(selectInputNotA->answer());
    outNand14->setInputIi(selectInputIBB->answer());
    outNand14->setInputIii(selectInputIBC->answer());
    outNand14->setInputIv(selectInputIBD->answer());
    outNand14->setInputV(writeEnable);
    out14 = outNand14->answer();

    outNand15->setInputI(selectInputIBA->answer());
    outNand15->setInputIi(selectInputIBB->answer());
    outNand15->setInputIii(selectInputIBC->answer());
    outNand15->setInputIv(selectInputIBD->answer());
    outNand15->setInputV(writeEnable);
    out15 = outNand15->answer();


    // Step 4, write logic and flip bits.


    if (!writeEnable) {

        return { false, false, false, false,
                false, false, false, false,
                false, false, false, false,
                false, false, false, false };
    }
    return {!out0,!out1,!out2,!out3,!out4,!out5,!out6,!out7,!out8,!out9,!out10,!out11,!out12,!out13,!out14,!out15};
}

