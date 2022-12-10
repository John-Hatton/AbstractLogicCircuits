//
// Created by physiker on 12/09/2022.
//


#include <gtest/gtest.h>

#include "../../source/Memory/FourBitRAM.cpp"


TEST(FOUR_BIT_RAM, FourBitRAM__WA0_WB0_GW0___RA0_RB0_GR0___data0F_data1F_data2F_data3F___Out1F_Out2F_Out3F_Out4F__Test)
{

    // 1. Setup

    auto myFourBitRAM = new FourBitRAM();

    std::vector<bool> actualVector = {};
    std::vector<bool> expectedVector = {false, false, false, false};

    // 2. Code

    // Four Bit Input (0000)
    myFourBitRAM->setData0(false);
    myFourBitRAM->setData1(false);
    myFourBitRAM->setData2(false);
    myFourBitRAM->setData3(false);

    // Write Enable Inputs (WA, WB, GW)
    myFourBitRAM->setWriteInputWa(false);
    myFourBitRAM->setWriteInputWb(false);
    myFourBitRAM->setWriteInputGw(false);

    myFourBitRAM->setReadInputRa(false);
    myFourBitRAM->setReadInputRb(false);
    myFourBitRAM->setReadInputGr(false);


    actualVector = myFourBitRAM->currentState();

    // 3. Test

    EXPECT_EQ(actualVector, expectedVector);

}