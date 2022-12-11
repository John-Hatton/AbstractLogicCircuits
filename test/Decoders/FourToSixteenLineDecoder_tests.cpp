//
// Created by physiker on 12/11/2022.
//

#include <gtest/gtest.h>

#include "../../source/Decoders/FourToSixteenLineDecoder.cpp"


TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder_WriteEnable0_A1_B1_C1_D1___Test)
{

    // 1. Setup

    auto myfourToSixteenLineDecoder = new FourToSixteenLineDecoder();

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false,false,false,false,false,
                                  false,false,false,false,false,false,false,false};

    // 2. Code

    myfourToSixteenLineDecoder->setWriteEnable(false); // Should always give all zeros!

    myfourToSixteenLineDecoder->setInputA(true);
    myfourToSixteenLineDecoder->setInputB(true);
    myfourToSixteenLineDecoder->setInputC(true);
    myfourToSixteenLineDecoder->setInputD(true);

    actual = myfourToSixteenLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}


TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder_WriteEnable1_A0_B0_C0_D0___Test)
{

    // 1. Setup

    auto myfourToSixteenLineDecoder = new FourToSixteenLineDecoder();

    std::vector<bool> actual = {};
    std::vector<bool> expected = {true,false,false,false,
                                  false,false,false,false,
                                  false,false,false,false,
                                  false,false,false,false};

    // 2. Code

    myfourToSixteenLineDecoder->setWriteEnable(true); // Should always give all zeros!

    myfourToSixteenLineDecoder->setInputA(false);
    myfourToSixteenLineDecoder->setInputB(false);
    myfourToSixteenLineDecoder->setInputC(false);
    myfourToSixteenLineDecoder->setInputD(false);

    actual = myfourToSixteenLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}


TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder_WriteEnable1_A1_B1_C0_D0___Test)
{

    // 1. Setup

    auto myfourToSixteenLineDecoder = new FourToSixteenLineDecoder({true,true,false,false}, true);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false,
                                  false,false,false,false,
                                  false,false,false,false,
                                  true,false,false,false};

    // 2. Code

    actual = myfourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder_WriteEnable1_A0_B1_C1_D0___Test)
{

    // 1. Setup

    auto myfourToSixteenLineDecoder = new FourToSixteenLineDecoder({false,true,true,false}, true);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false,
                                  false,false,true,false,
                                  false,false,false,false,
                                  false,false,false,false};

    // 2. Code

    actual = myfourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder_WriteEnable1_A0_B1_C1_D1___Test)
{

    // 1. Setup

    auto myfourToSixteenLineDecoder = new FourToSixteenLineDecoder({false,true,true,true}, true);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false,
                                  false,false,false, true,
                                  false,false,false,false,
                                  false,false,false,false};

    // Currently outputting:
    //{ false, false, true, false,
    // false, false, false, false,
    // false, false, false, false,
    // false, false, false, false }

    // Whats going on here???

    // 2. Code

    actual = myfourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual,expected);

}


TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder_WriteEnable1_A1_B0_C1_D0___Test)
{

    // 1. Setup

    auto myfourToSixteenLineDecoder = new FourToSixteenLineDecoder({true,false,true,false}, true);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false,
                                  false,false,false,false,
                                  false,true,false,false,
                                  false,false,false,false};

    // Currently outputting:
    // { false, false, false, false,
    // false, true, false, false,
    // false, false, false, false,
    // false, false, false, false }

    // 2. Code

    actual = myfourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual,expected);

}