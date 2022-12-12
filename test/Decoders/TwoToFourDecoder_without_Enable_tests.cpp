//
// Created by physiker on 12/11/2022.
//


#include <gtest/gtest.h>

#include "../../source/Decoders/TwoToFourDecoder_without_Enable.cpp"

TEST(Two_To_Four_Decoder_without_enable_Decoder, Two_To_Four_Decoder_X0_Y0___Test)
{

    // 1. Setup

    auto myTwoToFourDecoder_without_Enable = new TwoToFourDecoder_without_Enable({false, false});

    std::vector<bool> actual = {};
    std::vector<bool> expected = {true,false,false,false}; // We represent Binary numbers in Binary, so 0-3 not 1-4

    // 2. Code

    actual = myTwoToFourDecoder_without_Enable->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Two_To_Four_Decoder_without_enable_Decoder, Two_To_Four_Decoder_X0_Y1___Test)
{

    // 1. Setup

    auto myTwoToFourDecoder_without_Enable = new TwoToFourDecoder_without_Enable({false, true});

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,true,false,false}; // We represent Binary numbers in Binary, so 0-3 not 1-4

    // 2. Code

    actual = myTwoToFourDecoder_without_Enable->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Two_To_Four_Decoder_without_enable_Decoder, Two_To_Four_Decoder_X1_Y0___Test)
{

    // 1. Setup

    auto myTwoToFourDecoder_without_Enable = new TwoToFourDecoder_without_Enable({true, false});

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,true,false}; // We represent Binary numbers in Binary, so 0-3 not 1-4

    // 2. Code

    actual = myTwoToFourDecoder_without_Enable->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}

TEST(Two_To_Four_Decoder_without_enable_Decoder, Two_To_Four_Decoder_X1_Y1___Test)
{

    // 1. Setup

    auto myTwoToFourDecoder_without_Enable = new TwoToFourDecoder_without_Enable({true, true});

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,true}; // We represent Binary numbers in Binary, so 0-3 not 1-4

    // 2. Code

    actual = myTwoToFourDecoder_without_Enable->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}