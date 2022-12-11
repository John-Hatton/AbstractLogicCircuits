//
// Created by physiker on 12/10/2022.
//

#include <gtest/gtest.h>

#include "../../source/Adders/EightBitAdder.cpp"


TEST(Eight_Bit_Adder, EightBitAdder_0000_0000__plus__0000_0000_Test)
{

    // 1. Setup

    auto myEightBitAdder = new EightBitAdder();

    // 2. Code

    myEightBitAdder->setInputX1(false);
    myEightBitAdder->setInputX2(false);
    myEightBitAdder->setInputX3(false);
    myEightBitAdder->setInputX4(false);

    myEightBitAdder->setInputX5(false);
    myEightBitAdder->setInputX6(false);
    myEightBitAdder->setInputX7(false);
    myEightBitAdder->setInputX8(false);



    myEightBitAdder->setInputY1(false);
    myEightBitAdder->setInputY2(false);
    myEightBitAdder->setInputY3(false);
    myEightBitAdder->setInputY4(false);

    myEightBitAdder->setInputY5(false);
    myEightBitAdder->setInputY6(false);
    myEightBitAdder->setInputY7(false);
    myEightBitAdder->setInputY8(false);

    std::vector<bool> actual = myEightBitAdder->answer();

    // Four bit Sum + Carry so 0 0000 0000
    std::vector<bool> expected = {false, false, false, false, false, false, false, false, false};
    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(Eight_Bit_Adder, EightBitAdder_0000_0000__plus__0000_0001_Test)
{

    // 1. Setup

    auto myEightBitAdder = new EightBitAdder();

    // 2. Code

    myEightBitAdder->setInputX1(false);
    myEightBitAdder->setInputX2(false);
    myEightBitAdder->setInputX3(false);
    myEightBitAdder->setInputX4(false);

    myEightBitAdder->setInputX5(false);
    myEightBitAdder->setInputX6(false);
    myEightBitAdder->setInputX7(false);
    myEightBitAdder->setInputX8(false);



    myEightBitAdder->setInputY1(true);
    myEightBitAdder->setInputY2(false);
    myEightBitAdder->setInputY3(false);
    myEightBitAdder->setInputY4(false);

    myEightBitAdder->setInputY5(false);
    myEightBitAdder->setInputY6(false);
    myEightBitAdder->setInputY7(false);
    myEightBitAdder->setInputY8(false);

    std::vector<bool> actual = myEightBitAdder->answer();

    // Four bit Sum + Carry so 0 0000 0001
    std::vector<bool> expected = {false, false, false, false, false, false, false, false, true};
    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(Eight_Bit_Adder, EightBitAdder_0110_0000__plus__0101_0011_Test)
{

    // 1. Setup

    auto myEightBitAdder = new EightBitAdder();

    // 2. Code

    myEightBitAdder->setInputX1(false);
    myEightBitAdder->setInputX2(false);
    myEightBitAdder->setInputX3(false);
    myEightBitAdder->setInputX4(false);

    myEightBitAdder->setInputX5(false);
    myEightBitAdder->setInputX6(true);
    myEightBitAdder->setInputX7(true);
    myEightBitAdder->setInputX8(false);



    myEightBitAdder->setInputY1(true);
    myEightBitAdder->setInputY2(true);
    myEightBitAdder->setInputY3(false);
    myEightBitAdder->setInputY4(false);

    myEightBitAdder->setInputY5(true);
    myEightBitAdder->setInputY6(false);
    myEightBitAdder->setInputY7(true);
    myEightBitAdder->setInputY8(false);

    std::vector<bool> actual = myEightBitAdder->answer();

    // Four bit Sum + Carry so 0 1011 0011
    std::vector<bool> expected = {false, true, false, true, true, false, false, true, true};
    // 3. Test

    EXPECT_EQ(actual, expected);

}