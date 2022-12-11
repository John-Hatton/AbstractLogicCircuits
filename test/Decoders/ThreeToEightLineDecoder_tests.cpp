//
// Created by physiker on 12/11/2022.
//


#include <gtest/gtest.h>

#include "../../source/Decoders/ThreeToEightLineDecoder.cpp"


TEST(Three_to_Eight_Line_Decoder, Three_to_Eight_Line_Decoder_GOne0_G2A1_G2B1_A0_B0_C0___Test)
{

    // 1. Setup

    auto myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false,false,false,false,false};

    // 2. Code
    myThreeToEightLineDecoder->setEnableInputG1(false);
    myThreeToEightLineDecoder->setEnableInputG2A(true); // See below...
    myThreeToEightLineDecoder->setEnableInputG2B(true); //      ''

    /*
     * See Datasheet: Texas Instruments SN74LS138
     * When the device is configured with Input G2 high,
     * ie. G2A and G2B are BOTH set high, then we get all 1's (or 0's)
     */

    myThreeToEightLineDecoder->setInputA(false);
    myThreeToEightLineDecoder->setInputB(false);
    myThreeToEightLineDecoder->setInputC(false);

    actual = myThreeToEightLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Three_to_Eight_Line_Decoder, Three_to_Eight_Line_Decoder_GOne0_G2A0_G2B1_A0_B0_C0___Test)
{

    // 1. Setup

    auto myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false,false,false,false,false};

    // 2. Code
    myThreeToEightLineDecoder->setEnableInputG1(false);
    myThreeToEightLineDecoder->setEnableInputG2A(false); // See below...
    myThreeToEightLineDecoder->setEnableInputG2B(true); //      ''

    /*
     * See Datasheet: Texas Instruments SN74LS138
     * When the device is configured with Input G2 high,
     * ie. G2A and G2B are BOTH set high, then we get all 1's (or 0's)
     */

    myThreeToEightLineDecoder->setInputA(false); // 0
    myThreeToEightLineDecoder->setInputB(false); // 0
    myThreeToEightLineDecoder->setInputC(false); // 0 ... 0+0+0 = ??? (Ask Sean Connery)

    actual = myThreeToEightLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Three_to_Eight_Line_Decoder, Three_to_Eight_Line_Decoder_GOne1_G2A0_G2B0_A1_B1_C1___Test)
{

    // 1. Setup

    auto myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false,false,false,false,true};

    // 2. Code
    myThreeToEightLineDecoder->setEnableInputG1(true);
    myThreeToEightLineDecoder->setEnableInputG2A(false);
    myThreeToEightLineDecoder->setEnableInputG2B(false);

    myThreeToEightLineDecoder->setInputA(true); // 1
    myThreeToEightLineDecoder->setInputB(true); // 2
    myThreeToEightLineDecoder->setInputC(true); // 4 ... 1+2+4 = 7

    actual = myThreeToEightLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}


TEST(Three_to_Eight_Line_Decoder, Three_to_Eight_Line_Decoder_GOne1_G2A0_G2B0_A1_B1_C0___Test)
{

    // 1. Setup

    auto myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,true,false,false,false,false};

    // 2. Code
    myThreeToEightLineDecoder->setEnableInputG1(true);// 1
    myThreeToEightLineDecoder->setEnableInputG2A(false);
    myThreeToEightLineDecoder->setEnableInputG2B(false);

    myThreeToEightLineDecoder->setInputA(true);
    myThreeToEightLineDecoder->setInputB(true);
    myThreeToEightLineDecoder->setInputC(false);

    actual = myThreeToEightLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}


TEST(Three_to_Eight_Line_Decoder, Three_to_Eight_Line_Decoder_GOne1_G2A0_G2B0_A0_B1_C1___Test)
{

    // 1. Setup

    auto myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false,false,false,true,false};

    // 2. Code
    myThreeToEightLineDecoder->setEnableInputG1(true);
    myThreeToEightLineDecoder->setEnableInputG2A(false);
    myThreeToEightLineDecoder->setEnableInputG2B(false);

    myThreeToEightLineDecoder->setInputA(false);// 0
    myThreeToEightLineDecoder->setInputB(true); // 2
    myThreeToEightLineDecoder->setInputC(true); // 4 ... 0+2+4 = 6

    actual = myThreeToEightLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}
