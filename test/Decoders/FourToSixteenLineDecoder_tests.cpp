//
// Created by physiker on 12/11/2022.
//

#include <gtest/gtest.h>

#include "../../source/Decoders/FourToSixteenLineDecoder.cpp"


TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder__D1_C1_B1_A1__WriteEnable0___Test)
{

    // 1. Setup

    auto myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false,false,false,false,false,
                                  false,false,false,false,false,false,false,false};

    // 2. Code

    myFourToSixteenLineDecoder->setWriteEnable(false);

    myFourToSixteenLineDecoder->setInputA(true);
    myFourToSixteenLineDecoder->setInputB(true);
    myFourToSixteenLineDecoder->setInputC(true);
    myFourToSixteenLineDecoder->setInputD(true);

    actual = myFourToSixteenLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder__D0_C0_B0_A0__WriteEnable1___Test)
{

    // 1. Setup

    auto myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

    std::vector<bool> actual = {};
    std::vector<bool> expected = {true,false,false,false,false,false,false,false,
                                  false,false,false,false,false,false,false,false};

    myFourToSixteenLineDecoder->setWriteEnable(true);
    myFourToSixteenLineDecoder->setInputD(false);
    myFourToSixteenLineDecoder->setInputC(false);
    myFourToSixteenLineDecoder->setInputB(false);
    myFourToSixteenLineDecoder->setInputA(false);


    // 2. Code

    actual = myFourToSixteenLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder_wConstructor_D0_C0_B0_A0__WriteEnable1___Test)
{

    // 1. Setup

    auto myFourToSixteenLineDecoder = new FourToSixteenLineDecoder({false,false,false,false},true);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {true,false,false,false,false,false,false,false,
                                  false,false,false,false,false,false,false,false};


    // 2. Code

    actual = myFourToSixteenLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder__D0_C0_B0_A1__WriteEnable1___Test)
{

    // 1. Setup

    auto myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,true,false,false,false,false,false,false,
                                  false,false,false,false,false,false,false,false};

    myFourToSixteenLineDecoder->setWriteEnable(true);
    myFourToSixteenLineDecoder->setInputD(false);
    myFourToSixteenLineDecoder->setInputC(false);
    myFourToSixteenLineDecoder->setInputB(false);
    myFourToSixteenLineDecoder->setInputA(true);

    // 2. Code

    actual = myFourToSixteenLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder_wConstructor_D0_C0_B0_A1__WriteEnable1___Test)
{

    // 1. Setup

    auto myFourToSixteenLineDecoder = new FourToSixteenLineDecoder({false,false,false,true}, true); // 0x1;

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,true,false,false,false,false,false,false,
                                  false,false,false,false,false,false,false,false};


    // 2. Code

    actual = myFourToSixteenLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder_wConstructor_D0_C0_B1_A0__WriteEnable1___Test)
{

    // 1. Setup

    auto myFourToSixteenLineDecoder = new FourToSixteenLineDecoder({false,false,true,false}, true); // 0x2;

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,true,false,false,false,false,false,
                                  false,false,false,false,false,false,false,false};


    // 2. Code

    actual = myFourToSixteenLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder_wConstructor_D0_C0_B1_A1__WriteEnable1___Test)
{

    // 1. Setup

    auto myFourToSixteenLineDecoder = new FourToSixteenLineDecoder({false,false,true,true}, true); // 0x3;

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,true,false,false,false,false,
                                  false,false,false,false,false,false,false,false};


    // 2. Code

    actual = myFourToSixteenLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Four_to_Sixteen_Line_Decoder, Four_to_Sixteen_Line_Decoder__D0_C1_B1_A1_WriteEnable1____Test) {

    // 1. Setup

    auto myFourToSixteenLineDecoder = new FourToSixteenLineDecoder({false, true, true, true}, true);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false, false, false, false, false, false, false, true,
                                  false, false, false, false, false, false, false, false};

    // 2. Code

    actual = myFourToSixteenLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual, expected);

}
