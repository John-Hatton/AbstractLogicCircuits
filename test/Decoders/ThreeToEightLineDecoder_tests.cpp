//
// Created by physiker on 12/11/2022.
//


#include <gtest/gtest.h>

#include "../../source/Decoders/ThreeToEightLineDecoder.cpp"


TEST(Three_to_Eight_Line_Decoder, Three_to_Eight_Line_Decoder_G1_0_G2A0_G2B0_A0_B0_C0___Test)
{

    // 1. Setup

    auto myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

    std::vector<bool> actual = {};
    std::vector<bool> expected = {false,false,false,false,false,false,false,false}; // Change in a sec.

    // 2. Code
    myThreeToEightLineDecoder->setEnableInputG1(false);
    myThreeToEightLineDecoder->setEnableInputG2A(false);
    myThreeToEightLineDecoder->setEnableInputG2B(false);

    myThreeToEightLineDecoder->setInputA(false);
    myThreeToEightLineDecoder->setInputB(false);
    myThreeToEightLineDecoder->setInputC(false);

    actual = myThreeToEightLineDecoder->currentState();


    // 3. Test

    EXPECT_EQ(actual,expected);

}
