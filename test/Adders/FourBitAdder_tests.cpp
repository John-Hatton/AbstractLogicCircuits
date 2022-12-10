//
// Created by physiker on 12/10/2022.
//

#include <gtest/gtest.h>

#include "../../source/Adders/FourBitAdder.cpp"


TEST(Two_Bit_Adder, TwoBitAdder_0000__0000_Test)
{

    // 1. Setup

    auto myFourBitAdder = new FourBitAdder();

    // 2. Code

    myFourBitAdder->setInputX1(false);
    myFourBitAdder->setInputY1(false);
    myFourBitAdder->setInputX2(false);
    myFourBitAdder->setInputY2(false);

    std::vector<bool> actual = myFourBitAdder->answer();

    // Four bit Sum + Carry so 0 0000
    std::vector<bool> expected = {false, false, false, false, false};
    // 3. Test

    EXPECT_EQ(actual, expected);

}