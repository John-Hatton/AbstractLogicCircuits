//
// Created by physiker on 12/11/2022.
//

#pragma once


#include <vector>
#include "LogicGates/NotGate.h"
#include "LogicGates/InvertedBufferGate.h"
#include "LogicGates/FiveInputNandGate.h"

class FourToSixteenLineDecoder {

private:

    bool writeEnable;

    bool inputA;

    bool inputB;

    bool inputC;

    bool inputD;

    NotGate* selectInputNotA;

    NotGate* selectInputNotB;

    NotGate* selectInputNotC;

    NotGate* selectInputNotD;

    InvertedBufferGate* selectInputIBA;

    InvertedBufferGate* selectInputIBB;

    InvertedBufferGate* selectInputIBC;

    InvertedBufferGate* selectInputIBD;

    FiveInputNandGate* outNand0;

    FiveInputNandGate* outNand1;

    FiveInputNandGate* outNand2;

    FiveInputNandGate* outNand3;

    FiveInputNandGate* outNand4;

    FiveInputNandGate* outNand5;

    FiveInputNandGate* outNand6;

    FiveInputNandGate* outNand7;

    FiveInputNandGate* outNand8;

    FiveInputNandGate* outNand9;

    FiveInputNandGate* outNand10;

    FiveInputNandGate* outNand11;

    FiveInputNandGate* outNand12;

    FiveInputNandGate* outNand13;

    FiveInputNandGate* outNand14;

    FiveInputNandGate* outNand15;

    bool out0;

    bool out1;

    bool out2;

    bool out3;

    bool out4;

    bool out5;

    bool out6;

    bool out7;

    bool out8;

    bool out9;

    bool out10;

    bool out11;

    bool out12;

    bool out13;

    bool out14;

    bool out15;



public:

    FourToSixteenLineDecoder();

    FourToSixteenLineDecoder(std::vector<bool> dataInputVector, bool wEnable);

    bool getWriteEnable() const;

    void setWriteEnable(bool writeEnable);

    bool getInputA() const;

    void setInputA(bool inputA);

    bool getInputB() const;

    void setInputB(bool inputB);

    bool getInputC() const;

    void setInputC(bool inputC);

    bool getInputD() const;

    void setInputD(bool inputD);

    NotGate *getSelectInputNotA() const;

    void setSelectInputNotA(NotGate *selectInputNotA);

    NotGate *getSelectInputNotB() const;

    void setSelectInputNotB(NotGate *selectInputNotB);

    NotGate *getSelectInputNotC() const;

    void setSelectInputNotC(NotGate *selectInputNotC);

    NotGate *getSelectInputNotD() const;

    void setSelectInputNotD(NotGate *selectInputNotD);

    InvertedBufferGate *getSelectInputIba() const;

    void setSelectInputIba(InvertedBufferGate *selectInputIba);

    InvertedBufferGate *getSelectInputIbb() const;

    void setSelectInputIbb(InvertedBufferGate *selectInputIbb);

    InvertedBufferGate *getSelectInputIbc() const;

    void setSelectInputIbc(InvertedBufferGate *selectInputIbc);

    InvertedBufferGate *getSelectInputIbd() const;

    void setSelectInputIbd(InvertedBufferGate *selectInputIbd);

    FiveInputNandGate *getOutNand0() const;

    void setOutNand0(FiveInputNandGate *outNand0);

    FiveInputNandGate *getOutNand1() const;

    void setOutNand1(FiveInputNandGate *outNand1);

    FiveInputNandGate *getOutNand2() const;

    void setOutNand2(FiveInputNandGate *outNand2);

    FiveInputNandGate *getOutNand3() const;

    void setOutNand3(FiveInputNandGate *outNand3);

    FiveInputNandGate *getOutNand4() const;

    void setOutNand4(FiveInputNandGate *outNand4);

    FiveInputNandGate *getOutNand5() const;

    void setOutNand5(FiveInputNandGate *outNand5);

    FiveInputNandGate *getOutNand6() const;

    void setOutNand6(FiveInputNandGate *outNand6);

    FiveInputNandGate *getOutNand7() const;

    void setOutNand7(FiveInputNandGate *outNand7);

    FiveInputNandGate *getOutNand8() const;

    void setOutNand8(FiveInputNandGate *outNand8);

    FiveInputNandGate *getOutNand9() const;

    void setOutNand9(FiveInputNandGate *outNand9);

    FiveInputNandGate *getOutNand10() const;

    void setOutNand10(FiveInputNandGate *outNand10);

    FiveInputNandGate *getOutNand11() const;

    void setOutNand11(FiveInputNandGate *outNand11);

    FiveInputNandGate *getOutNand12() const;

    void setOutNand12(FiveInputNandGate *outNand12);

    FiveInputNandGate *getOutNand13() const;

    void setOutNand13(FiveInputNandGate *outNand13);

    FiveInputNandGate *getOutNand14() const;

    void setOutNand14(FiveInputNandGate *outNand14);

    FiveInputNandGate *getOutNand15() const;

    void setOutNand15(FiveInputNandGate *outNand15);

    bool getOut0() const;

    void setOut0(bool out0);

    bool getOut1() const;

    void setOut1(bool out1);

    bool getOut2() const;

    void setOut2(bool out2);

    bool getOut3() const;

    void setOut3(bool out3);

    bool getOut4() const;

    void setOut4(bool out4);

    bool getOut5() const;

    void setOut5(bool out5);

    bool getOut6() const;

    void setOut6(bool out6);

    bool getOut7() const;

    void setOut7(bool out7);

    bool getOut8() const;

    void setOut8(bool out8);

    bool getOut9() const;

    void setOut9(bool out9);

    bool getOut10() const;

    void setOut10(bool out10);

    bool getOut11() const;

    void setOut11(bool out11);

    bool getOut12() const;

    void setOut12(bool out12);

    bool getOut13() const;

    void setOut13(bool out13);

    bool getOut14() const;

    void setOut14(bool out14);

    bool getOut15() const;

    void setOut15(bool out15);

    std::vector<bool> currentState();

};
