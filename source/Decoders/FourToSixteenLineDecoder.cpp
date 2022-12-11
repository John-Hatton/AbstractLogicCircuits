//
// Created by snake on 12/11/2022.
//

#include "Decoders/FourToSixteenLineDecoder.h"

FourToSixteenLineDecoder::FourToSixteenLineDecoder() {

    writeEnable = false;

    decoder2x4One = new TwoToFourDecoder_without_Enable();
    decoder2x4Two = new TwoToFourDecoder_without_Enable();

    andGate0 = new TriInputAndGate();
    andGate1 = new TriInputAndGate();
    andGate2 = new TriInputAndGate();
    andGate3 = new TriInputAndGate();
    andGate4 = new TriInputAndGate();
    andGate5 = new TriInputAndGate();
    andGate6 = new TriInputAndGate();
    andGate7 = new TriInputAndGate();
    andGate8 = new TriInputAndGate();
    andGate9 = new TriInputAndGate();
    andGateA = new TriInputAndGate();
    andGateB = new TriInputAndGate();
    andGateC = new TriInputAndGate();
    andGateD = new TriInputAndGate();
    andGateE = new TriInputAndGate();
    andGateF = new TriInputAndGate();
}

FourToSixteenLineDecoder::FourToSixteenLineDecoder(std::vector<bool> dataInputVector, bool wEnable) {

    if (dataInputVector.size() == 4)
    {

        decoder2x4One = new TwoToFourDecoder_without_Enable();
        decoder2x4Two = new TwoToFourDecoder_without_Enable();

        writeEnable = wEnable;
        inputA = dataInputVector.at(3);
        inputB = dataInputVector.at(2);
        inputC = dataInputVector.at(1);
        inputD = dataInputVector.at(0);

        andGate0 = new TriInputAndGate();
        andGate1 = new TriInputAndGate();
        andGate2 = new TriInputAndGate();
        andGate3 = new TriInputAndGate();
        andGate4 = new TriInputAndGate();
        andGate5 = new TriInputAndGate();
        andGate6 = new TriInputAndGate();
        andGate7 = new TriInputAndGate();
        andGate8 = new TriInputAndGate();
        andGate9 = new TriInputAndGate();
        andGateA = new TriInputAndGate();
        andGateB = new TriInputAndGate();
        andGateC = new TriInputAndGate();
        andGateD = new TriInputAndGate();
        andGateE = new TriInputAndGate();
        andGateF = new TriInputAndGate();

        currentState();
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

TwoToFourDecoder_without_Enable *FourToSixteenLineDecoder::getDecoder2X4One() const {
    return decoder2x4One;
}

void FourToSixteenLineDecoder::setDecoder2X4One(TwoToFourDecoder_without_Enable *decoder2X4One) {
    decoder2x4One = decoder2X4One;
}

TwoToFourDecoder_without_Enable *FourToSixteenLineDecoder::getDecoder2X4Two() const {
    return decoder2x4Two;
}

void FourToSixteenLineDecoder::setDecoder2X4Two(TwoToFourDecoder_without_Enable *decoder2X4Two) {
    decoder2x4Two = decoder2X4Two;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGate0() const {
    return andGate0;
}

void FourToSixteenLineDecoder::setAndGate0(TriInputAndGate *andGate0) {
    FourToSixteenLineDecoder::andGate0 = andGate0;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGate1() const {
    return andGate1;
}

void FourToSixteenLineDecoder::setAndGate1(TriInputAndGate *andGate1) {
    FourToSixteenLineDecoder::andGate1 = andGate1;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGate2() const {
    return andGate2;
}

void FourToSixteenLineDecoder::setAndGate2(TriInputAndGate *andGate2) {
    FourToSixteenLineDecoder::andGate2 = andGate2;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGate3() const {
    return andGate3;
}

void FourToSixteenLineDecoder::setAndGate3(TriInputAndGate *andGate3) {
    FourToSixteenLineDecoder::andGate3 = andGate3;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGate4() const {
    return andGate4;
}

void FourToSixteenLineDecoder::setAndGate4(TriInputAndGate *andGate4) {
    FourToSixteenLineDecoder::andGate4 = andGate4;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGate5() const {
    return andGate5;
}

void FourToSixteenLineDecoder::setAndGate5(TriInputAndGate *andGate5) {
    FourToSixteenLineDecoder::andGate5 = andGate5;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGate6() const {
    return andGate6;
}

void FourToSixteenLineDecoder::setAndGate6(TriInputAndGate *andGate6) {
    FourToSixteenLineDecoder::andGate6 = andGate6;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGate7() const {
    return andGate7;
}

void FourToSixteenLineDecoder::setAndGate7(TriInputAndGate *andGate7) {
    FourToSixteenLineDecoder::andGate7 = andGate7;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGate8() const {
    return andGate8;
}

void FourToSixteenLineDecoder::setAndGate8(TriInputAndGate *andGate8) {
    FourToSixteenLineDecoder::andGate8 = andGate8;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGate9() const {
    return andGate9;
}

void FourToSixteenLineDecoder::setAndGate9(TriInputAndGate *andGate9) {
    FourToSixteenLineDecoder::andGate9 = andGate9;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGateA() const {
    return andGateA;
}

void FourToSixteenLineDecoder::setAndGateA(TriInputAndGate *andGateA) {
    FourToSixteenLineDecoder::andGateA = andGateA;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGateB() const {
    return andGateB;
}

void FourToSixteenLineDecoder::setAndGateB(TriInputAndGate *andGateB) {
    FourToSixteenLineDecoder::andGateB = andGateB;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGateC() const {
    return andGateC;
}

void FourToSixteenLineDecoder::setAndGateC(TriInputAndGate *andGateC) {
    FourToSixteenLineDecoder::andGateC = andGateC;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGateD() const {
    return andGateD;
}

void FourToSixteenLineDecoder::setAndGateD(TriInputAndGate *andGateD) {
    FourToSixteenLineDecoder::andGateD = andGateD;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGateE() const {
    return andGateE;
}

void FourToSixteenLineDecoder::setAndGateE(TriInputAndGate *andGateE) {
    FourToSixteenLineDecoder::andGateE = andGateE;
}

TriInputAndGate *FourToSixteenLineDecoder::getAndGateF() const {
    return andGateF;
}

void FourToSixteenLineDecoder::setAndGateF(TriInputAndGate *andGateF) {
    FourToSixteenLineDecoder::andGateF = andGateF;
}

bool FourToSixteenLineDecoder::getLineOut0() const {
    return lineOut0;
}

void FourToSixteenLineDecoder::setLineOut0(bool lineOut0) {
    FourToSixteenLineDecoder::lineOut0 = lineOut0;
}

bool FourToSixteenLineDecoder::getLineOut1() const {
    return lineOut1;
}

void FourToSixteenLineDecoder::setLineOut1(bool lineOut1) {
    FourToSixteenLineDecoder::lineOut1 = lineOut1;
}

bool FourToSixteenLineDecoder::getLineOut2() const {
    return lineOut2;
}

void FourToSixteenLineDecoder::setLineOut2(bool lineOut2) {
    FourToSixteenLineDecoder::lineOut2 = lineOut2;
}

bool FourToSixteenLineDecoder::getLineOut3() const {
    return lineOut3;
}

void FourToSixteenLineDecoder::setLineOut3(bool lineOut3) {
    FourToSixteenLineDecoder::lineOut3 = lineOut3;
}

bool FourToSixteenLineDecoder::getLineOut4() const {
    return lineOut4;
}

void FourToSixteenLineDecoder::setLineOut4(bool lineOut4) {
    FourToSixteenLineDecoder::lineOut4 = lineOut4;
}

bool FourToSixteenLineDecoder::getLineOut5() const {
    return lineOut5;
}

void FourToSixteenLineDecoder::setLineOut5(bool lineOut5) {
    FourToSixteenLineDecoder::lineOut5 = lineOut5;
}

bool FourToSixteenLineDecoder::getLineOut6() const {
    return lineOut6;
}

void FourToSixteenLineDecoder::setLineOut6(bool lineOut6) {
    FourToSixteenLineDecoder::lineOut6 = lineOut6;
}

bool FourToSixteenLineDecoder::getLineOut7() const {
    return lineOut7;
}

void FourToSixteenLineDecoder::setLineOut7(bool lineOut7) {
    FourToSixteenLineDecoder::lineOut7 = lineOut7;
}

bool FourToSixteenLineDecoder::getLineOut8() const {
    return lineOut8;
}

void FourToSixteenLineDecoder::setLineOut8(bool lineOut8) {
    FourToSixteenLineDecoder::lineOut8 = lineOut8;
}

bool FourToSixteenLineDecoder::getLineOut9() const {
    return lineOut9;
}

void FourToSixteenLineDecoder::setLineOut9(bool lineOut9) {
    FourToSixteenLineDecoder::lineOut9 = lineOut9;
}

bool FourToSixteenLineDecoder::getLineOutA() const {
    return lineOutA;
}

void FourToSixteenLineDecoder::setLineOutA(bool lineOutA) {
    FourToSixteenLineDecoder::lineOutA = lineOutA;
}

bool FourToSixteenLineDecoder::getLineOutB() const {
    return lineOutB;
}

void FourToSixteenLineDecoder::setLineOutB(bool lineOutB) {
    FourToSixteenLineDecoder::lineOutB = lineOutB;
}

bool FourToSixteenLineDecoder::getLineOutC() const {
    return lineOutC;
}

void FourToSixteenLineDecoder::setLineOutC(bool lineOutC) {
    FourToSixteenLineDecoder::lineOutC = lineOutC;
}

bool FourToSixteenLineDecoder::getLineOutD() const {
    return lineOutD;
}

void FourToSixteenLineDecoder::setLineOutD(bool lineOutD) {
    FourToSixteenLineDecoder::lineOutD = lineOutD;
}

bool FourToSixteenLineDecoder::getLineOutE() const {
    return lineOutE;
}

void FourToSixteenLineDecoder::setLineOutE(bool lineOutE) {
    FourToSixteenLineDecoder::lineOutE = lineOutE;
}

bool FourToSixteenLineDecoder::getLineOutF() const {
    return lineOutF;
}

void FourToSixteenLineDecoder::setLineOutF(bool lineOutF) {
    FourToSixteenLineDecoder::lineOutF = lineOutF;
}

std::vector<bool> FourToSixteenLineDecoder::currentState() {

    decoder2x4One->setA0(inputA);
    decoder2x4One->setA1(inputB);
    decoder2x4Two->setA0(inputC);
    decoder2x4Two->setA1(inputD);

    auto decOne = decoder2x4One->currentState();
    auto decTwo = decoder2x4Two->currentState();

    bool decOne00 = decOne.at(0);
    bool decOne01 = decOne.at(1);
    bool decOne10 = decOne.at(2);
    bool decOne11 = decOne.at(3);

    bool decTwo00 = decTwo.at(0);
    bool decTwo01 = decTwo.at(1);
    bool decTwo10 = decTwo.at(2);
    bool decTwo11 = decTwo.at(3);


    andGate0->setInputX(decOne00);
    andGate0->setInputY(decTwo00);
    andGate0->setInputZ(writeEnable);
    lineOut0 = andGate0->answer();

    andGate1->setInputX(decOne00);
    andGate1->setInputY(decTwo01);
    andGate1->setInputZ(writeEnable);
    lineOut1 = andGate1->answer();

    andGate2->setInputX(decOne00);
    andGate2->setInputY(decTwo10);
    andGate2->setInputZ(writeEnable);
    lineOut2 = andGate2->answer();

    andGate3->setInputX(decOne00);
    andGate3->setInputY(decTwo11);
    andGate3->setInputZ(writeEnable);
    lineOut3 = andGate3->answer();

    andGate4->setInputX(decOne01);
    andGate4->setInputY(decTwo00);
    andGate4->setInputZ(writeEnable);
    lineOut4 = andGate4->answer();

    andGate5->setInputX(decOne01);
    andGate5->setInputY(decTwo01);
    andGate5->setInputZ(writeEnable);
    lineOut5 = andGate5->answer();

    andGate6->setInputX(decOne01);
    andGate6->setInputY(decTwo10);
    andGate6->setInputZ(writeEnable);
    lineOut6 = andGate6->answer();

    andGate7->setInputX(decOne01);
    andGate7->setInputY(decTwo11);
    andGate7->setInputZ(writeEnable);
    lineOut7 = andGate7->answer();

    andGate8->setInputX(decOne10);
    andGate8->setInputY(decTwo00);
    andGate8->setInputZ(writeEnable);
    lineOut8 = andGate8->answer();

    andGate9->setInputX(decOne10);
    andGate9->setInputY(decTwo01);
    andGate9->setInputZ(writeEnable);
    lineOut9 = andGate9->answer();

    andGateA->setInputX(decOne10);
    andGateA->setInputY(decTwo10);
    andGateA->setInputZ(writeEnable);
    lineOutA = andGateA->answer();

    andGateB->setInputX(decOne10);
    andGateB->setInputY(decTwo11);
    andGateB->setInputZ(writeEnable);
    lineOutB = andGateB->answer();

    andGateC->setInputX(decOne11);
    andGateC->setInputY(decTwo00);
    andGateC->setInputZ(writeEnable);
    lineOutC = andGateC->answer();

    andGateD->setInputX(decOne11);
    andGateD->setInputY(decTwo01);
    andGateD->setInputZ(writeEnable);
    lineOutD = andGateD->answer();

    andGateE->setInputX(decOne11);
    andGateE->setInputY(decTwo10);
    andGateE->setInputZ(writeEnable);
    lineOutE = andGateE->answer();

    andGateF->setInputX(decOne11);
    andGateF->setInputY(decTwo11);
    andGateF->setInputZ(writeEnable);
    lineOutF = andGateF->answer();




    return {
        lineOutF,lineOutE,lineOutD,lineOutC,lineOutB,lineOutA,lineOut9,lineOut8,lineOut7,lineOut6,lineOut5,lineOut4,lineOut3,lineOut2,lineOut1,lineOut0,
    };
}
