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

TEST(FOUR_BIT_RAM, FourBitRAM__WA0_WB0_GW0___RA0_RB0_GR0___data0T_data1T_data2T_data3T___Out1F_Out2F_Out3F_Out4F__Test)
{

    // 1. Setup

    auto myFourBitRAM = new FourBitRAM();

    std::vector<bool> actualVector = {};
    std::vector<bool> expectedVector = {false, false, false, false};

    // 2. Code

    // Four Bit Input (1111)
    myFourBitRAM->setData0(true);
    myFourBitRAM->setData1(true);
    myFourBitRAM->setData2(true);
    myFourBitRAM->setData3(true);

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

TEST(FOUR_BIT_RAM, FourBitRAM__WA1_WB1_GW0___RA0_RB0_GR0___data0T_data1T_data2T_data3T___Out1F_Out2F_Out3F_Out4F__Test)
{

    // 1. Setup

    auto myFourBitRAM = new FourBitRAM();

    std::vector<bool> actualVector = {};
    std::vector<bool> expectedVector = {false, false, false, false};

    // 2. Code

    // Four Bit Input (1111)
    myFourBitRAM->setData0(true);
    myFourBitRAM->setData1(true);
    myFourBitRAM->setData2(true);
    myFourBitRAM->setData3(true);

    // Write Enable Inputs (WA, WB, GW)
    myFourBitRAM->setWriteInputWa(true);
    myFourBitRAM->setWriteInputWb(true);
    myFourBitRAM->setWriteInputGw(false);

    myFourBitRAM->setReadInputRa(false);
    myFourBitRAM->setReadInputRb(false);
    myFourBitRAM->setReadInputGr(false);


    actualVector = myFourBitRAM->currentState();

    // 3. Test

    EXPECT_EQ(actualVector, expectedVector);

}

TEST(FOUR_BIT_RAM, FourBitRAM__WA1_WB1_GW0___RA1_RB0_GR0___data0T_data1T_data2T_data3T___Out1F_Out2F_Out3F_Out4F__Test)
{

    // 1. Setup

    auto myFourBitRAM = new FourBitRAM();

    std::vector<bool> actualVector = {};
    std::vector<bool> expectedVector = {false, false, false, false};

    // 2. Code

    // Four Bit Input (1111)
    myFourBitRAM->setData0(true);
    myFourBitRAM->setData1(true);
    myFourBitRAM->setData2(true);
    myFourBitRAM->setData3(true);

    // Write Enable Inputs (WA, WB, GW)
    myFourBitRAM->setWriteInputWa(true);
    myFourBitRAM->setWriteInputWb(true);
    myFourBitRAM->setWriteInputGw(true);
    myFourBitRAM->setWriteInputGw(false);

    myFourBitRAM->setReadInputRa(true);
    myFourBitRAM->setReadInputRb(false);
    myFourBitRAM->setReadInputGr(false);


    actualVector = myFourBitRAM->currentState();

    // 3. Test

    EXPECT_EQ(actualVector, expectedVector);

}

TEST(FOUR_BIT_RAM, FourBitRAM__WA1_WB1_GW0___RA1_RB1_GR0___data0T_data1T_data2T_data3T___Out1F_Out2F_Out3F_Out4F__Test)
{

    // 1. Setup

    auto myFourBitRAM = new FourBitRAM();

    std::vector<bool> actualVector = {};
    std::vector<bool> expectedVector = {false, false, false, false};

    // 2. Code

    // Four Bit Input (1111)
    myFourBitRAM->setData0(true);
    myFourBitRAM->setData1(true);
    myFourBitRAM->setData2(true);
    myFourBitRAM->setData3(true);

    // Write Enable Inputs (WA, WB, GW)
    myFourBitRAM->setWriteInputWa(true);
    myFourBitRAM->setWriteInputWb(true);
    myFourBitRAM->setWriteInputGw(false);

    myFourBitRAM->setReadInputRa(true);
    myFourBitRAM->setReadInputRb(true);
    myFourBitRAM->setReadInputGr(false);


    actualVector = myFourBitRAM->currentState();

    // 3. Test

    EXPECT_EQ(actualVector, expectedVector);

}

TEST(FOUR_BIT_RAM, FourBitRAM__WA0_WB0_GW1___RA0_RB0_GR0___data0T_data1F_data2F_data3F___Out1T_Out2F_Out3F_Out4F__Test)
{

    // 1. Setup

    auto myFourBitRAM = new FourBitRAM();

    std::vector<bool> actualVector = {};
    std::vector<bool> expectedVector = {false, false, false, true};

    // 2. Code

    // Four Bit Input (0001)
    myFourBitRAM->setData0(true);
    myFourBitRAM->setData1(false);
    myFourBitRAM->setData2(false);
    myFourBitRAM->setData3(false);

    // Write Enable Inputs (WA, WB, GW)
    myFourBitRAM->setWriteInputWa(false);
    myFourBitRAM->setWriteInputWb(false);
    myFourBitRAM->setWriteInputGw(true);

    myFourBitRAM->setReadInputRa(false);
    myFourBitRAM->setReadInputRb(false);
    myFourBitRAM->setReadInputGr(false); // Read Input Read Enable switch does NOT work like I thought it did...


    actualVector = myFourBitRAM->currentState();

    // WordZero should now read 0001, but the read enable was never turned on...

    // 3. Test

    EXPECT_EQ(myFourBitRAM->getWordZeroBitZero()->currentState(), true);
    EXPECT_EQ(actualVector, expectedVector);

}

TEST(FOUR_BIT_RAM, FourBitRAM__WA0_WB0_GW1___RA1_RB0_GR0___data0T_data1F_data2F_data3F___Out1F_Out2F_Out3F_Out4F__Test)
{

    // 1. Setup

    auto myFourBitRAM = new FourBitRAM();

    std::vector<bool> actualVector = {};
    std::vector<bool> expectedVector = {false, false, false, false};

    // 2. Code

    // Four Bit Input (0001)
    myFourBitRAM->setData0(true);
    myFourBitRAM->setData1(false);
    myFourBitRAM->setData2(false);
    myFourBitRAM->setData3(false);

    // Write Enable Inputs (WA, WB, GW)
    myFourBitRAM->setWriteInputWa(false);
    myFourBitRAM->setWriteInputWb(false);
    myFourBitRAM->setWriteInputGw(true);

    myFourBitRAM->setReadInputRa(true); // Note, now we're peeking word one. Should read 0000 still...
    myFourBitRAM->setReadInputRb(false);
    myFourBitRAM->setReadInputGr(false);


    actualVector = myFourBitRAM->currentState();

    // WordZero should now read 0001, but the read enable was never turned on...

    // 3. Test

    EXPECT_EQ(myFourBitRAM->getWordZeroBitZero()->currentState(), true);
    EXPECT_EQ(actualVector, expectedVector);

}

TEST(FOUR_BIT_RAM, FourBitRAM__Multiple_R_W___Test)
{

    // 1. Setup

    auto myFourBitRAM = new FourBitRAM();

    std::vector<bool> actualVectorTest1 = {};
    std::vector<bool> actualVectorTest2 = {};
    std::vector<bool> actualVectorTest3 = {};
    std::vector<bool> actualVectorTest4 = {};

    std::vector<bool> expectedVectorTest1 = {false, true, true, true};
    std::vector<bool> expectedVectorTest2 = {true, false, true, true};
    std::vector<bool> expectedVectorTest3 = {true, true, false, true};
    std::vector<bool> expectedVectorTest4 = {true, true, true, false};

    // 2. Code

    // Four Bit Input (0001)
    myFourBitRAM->setData0(true);
    myFourBitRAM->setData1(true);
    myFourBitRAM->setData2(true);
    myFourBitRAM->setData3(false);

    // Write Enable Inputs (WA, WB, GW)
    myFourBitRAM->setWriteInputWa(false);
    myFourBitRAM->setWriteInputWb(false); // Writing to Bit Zero! (00)
    myFourBitRAM->setWriteInputGw(true);

    myFourBitRAM->setReadInputRa(false);
    myFourBitRAM->setReadInputRb(false);
    myFourBitRAM->setReadInputGr(false); // Reading from Bit Zero (00)


    actualVectorTest1 = myFourBitRAM->currentState();

    // Write 2

    myFourBitRAM->setData0(true);
    myFourBitRAM->setData1(true);
    myFourBitRAM->setData2(false);
    myFourBitRAM->setData3(true);

    // Write Enable Inputs (WA, WB, GW)
    myFourBitRAM->setWriteInputWa(true);
    myFourBitRAM->setWriteInputWb(false);
    myFourBitRAM->setWriteInputGw(true); // Writing to Bit One! (01)

    myFourBitRAM->setReadInputRa(true);
    myFourBitRAM->setReadInputRb(false);
    myFourBitRAM->setReadInputGr(false); // Reading from Bit One! (01)


    actualVectorTest2 = myFourBitRAM->currentState();


    myFourBitRAM->setData0(true);
    myFourBitRAM->setData1(false);
    myFourBitRAM->setData2(true);
    myFourBitRAM->setData3(true);

    // Write Enable Inputs (WA, WB, GW)
    myFourBitRAM->setWriteInputWa(false);
    myFourBitRAM->setWriteInputWb(true);
    myFourBitRAM->setWriteInputGw(true); // Writing to Bit Two (10)

    myFourBitRAM->setReadInputRa(false);
    myFourBitRAM->setReadInputRb(true);
    myFourBitRAM->setReadInputGr(false); // Reading from Bit Two (10)


    actualVectorTest3 = myFourBitRAM->currentState();


    myFourBitRAM->setData0(false);
    myFourBitRAM->setData1(true);
    myFourBitRAM->setData2(true);
    myFourBitRAM->setData3(true);

    // Write Enable Inputs (WA, WB, GW)
    myFourBitRAM->setWriteInputWa(true);
    myFourBitRAM->setWriteInputWb(true);
    myFourBitRAM->setWriteInputGw(true); // Writing to Bit Three (11)

    myFourBitRAM->setReadInputRa(true);
    myFourBitRAM->setReadInputRb(true);
    myFourBitRAM->setReadInputGr(false); // Reading from Bit Three (11)


    actualVectorTest4 = myFourBitRAM->currentState();

    // 3. Test

    EXPECT_EQ(actualVectorTest1, expectedVectorTest1);
    EXPECT_EQ(actualVectorTest2, expectedVectorTest2);
    EXPECT_EQ(actualVectorTest3, expectedVectorTest3);
    EXPECT_EQ(actualVectorTest4, expectedVectorTest4);

}


TEST(FOUR_BIT_RAM, FourBitRAM___data3F_data2T_data1F_data0T_wConstructor__addr10_Out4F_Out3T_Out2F_Out1T__Test)
{

    // 1. Setup

    auto myFourBitRAM = new FourBitRAM({false,true,false,true},{true,false}, true);

    std::vector<bool> actualVector = {};
    std::vector<bool> expectedVector = {false, true, false, true};

    // 2. Code


    actualVector = myFourBitRAM->currentState();

    // 3. Test

    EXPECT_EQ(actualVector, expectedVector);

}

TEST(FOUR_BIT_RAM, FourBitRAM___data3T_data2T_data1F_data0T_wConstructor_addr00__Out4F_Out3T_Out2F_Out1T__Test)
{

    // 1. Setup

    auto myFourBitRAM = new FourBitRAM({true,true,false,true},{false,false}, true);

    std::vector<bool> actualVector = {};
    std::vector<bool> expectedVector = {true, true, false, true};

    // 2. Code


    actualVector = myFourBitRAM->currentState();

    // 3. Test

    EXPECT_EQ(actualVector, expectedVector);

}