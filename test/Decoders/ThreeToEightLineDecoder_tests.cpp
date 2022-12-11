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
    std::vector<bool> expected = {false,false,false,false,false,false,false,false}; // Change in a sec.

    // 2. Code
    myThreeToEightLineDecoder->setEnableInputG1(false);
    myThreeToEightLineDecoder->setEnableInputG2A(true);
    myThreeToEightLineDecoder->setEnableInputG2B(true);

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
