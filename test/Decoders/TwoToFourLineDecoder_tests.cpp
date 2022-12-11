//
// Created by physiker on 12/11/2022.
//


#include <gtest/gtest.h>

#include "../../source/Decoders/TwoToFourLineDecoder.cpp"

TEST(Two_To_Four_Line_Decoder, Two_To_Four_Line_Decoder_WriteEnable0_X0_Y0___Test)
{

    // 1. Setup

    auto myTwoToFourLineDecoder = new TwoToFourLineDecoder({false, false}, false);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false}; // We represent Binary numbers in Binary, so 0-3 not 1-4

    // 2. Code

    actual = myTwoToFourLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Two_To_Four_Line_Decoder, Two_To_Four_Line_Decoder_WriteEnable0_X0_Y1___Test)
{

    // 1. Setup

    auto myTwoToFourLineDecoder = new TwoToFourLineDecoder({false, true}, false);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false}; // We represent Binary numbers in Binary, so 0-3 not 1-4

    // 2. Code

    actual = myTwoToFourLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Two_To_Four_Line_Decoder, Two_To_Four_Line_Decoder_WriteEnable0_X1_Y0___Test)
{

    // 1. Setup

    auto myTwoToFourLineDecoder = new TwoToFourLineDecoder({true, false}, false);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false}; // We represent Binary numbers in Binary, so 0-3 not 1-4

    // 2. Code

    actual = myTwoToFourLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Two_To_Four_Line_Decoder, Two_To_Four_Line_Decoder_WriteEnable0_X1_Y1___Test)
{

    // 1. Setup

    auto myTwoToFourLineDecoder = new TwoToFourLineDecoder({true, true}, false);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false}; // We represent Binary numbers in Binary, so 0-3 not 1-4

    // 2. Code

    actual = myTwoToFourLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}


TEST(Two_To_Four_Line_Decoder, Two_To_Four_Line_Decoder_WriteEnable1_X0_Y0___Test)
{

    // 1. Setup

    auto myTwoToFourLineDecoder = new TwoToFourLineDecoder({false, false}, true);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {true,false,false,false}; // We represent Binary numbers in Binary, so 0-3 not 1-4

    // 2. Code

    actual = myTwoToFourLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Two_To_Four_Line_Decoder, Two_To_Four_Line_Decoder_WriteEnable1_X0_Y1___Test)
{

    // 1. Setup

    auto myTwoToFourLineDecoder = new TwoToFourLineDecoder({false, true}, true);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,true,false,false}; // We represent Binary numbers in Binary, so 0-3 not 1-4

    // 2. Code

    actual = myTwoToFourLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Two_To_Four_Line_Decoder, Two_To_Four_Line_Decoder_WriteEnable1_X1_Y0___Test)
{

    // 1. Setup

    auto myTwoToFourLineDecoder = new TwoToFourLineDecoder({true, false}, true);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,true,false}; // We represent Binary numbers in Binary, so 0-3 not 1-4

    // 2. Code

    actual = myTwoToFourLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Two_To_Four_Line_Decoder, Two_To_Four_Line_Decoder_WriteEnable1_X1_Y1___Test)
{

    // 1. Setup

    auto myTwoToFourLineDecoder = new TwoToFourLineDecoder({true, true}, true);

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,true}; // We represent Binary numbers in Binary, so 0-3 not 1-4

    // 2. Code

    actual = myTwoToFourLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}