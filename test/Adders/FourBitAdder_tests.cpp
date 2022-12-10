//
// Created by physiker on 12/10/2022.
//

#include <gtest/gtest.h>

#include "../../source/Adders/FourBitAdder.cpp"


TEST(Four_Bit_Adder, FourBitAdder_0000__0000_Test)
{

    // 1. Setup

    auto myFourBitAdder = new FourBitAdder();

    // 2. Code

    myFourBitAdder->setInputX1(false);
    myFourBitAdder->setInputX2(false);
    myFourBitAdder->setInputX3(false);
    myFourBitAdder->setInputX4(false);

    myFourBitAdder->setInputY1(false);
    myFourBitAdder->setInputY2(false);
    myFourBitAdder->setInputY3(false);
    myFourBitAdder->setInputY4(false);

    std::vector<bool> actual = myFourBitAdder->answer();

    // Four bit Sum + Carry so 0 0000
    std::vector<bool> expected = {false, false, false, false, false};
    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(Four_Bit_Adder, FourBitAdder_0000__0001_Test)
{

    // 1. Setup

    auto myFourBitAdder = new FourBitAdder();

    // 2. Code

    myFourBitAdder->setInputX1(false);
    myFourBitAdder->setInputX2(false);
    myFourBitAdder->setInputX3(false);
    myFourBitAdder->setInputX4(false);

    myFourBitAdder->setInputY1(true);
    myFourBitAdder->setInputY2(false);
    myFourBitAdder->setInputY3(false);
    myFourBitAdder->setInputY4(false);

    std::vector<bool> actual = myFourBitAdder->answer();

    // Four bit Sum + Carry so 0 0001
    std::vector<bool> expected = {false, false, false, false, true};
    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(Four_Bit_Adder, FourBitAdder_0000__0010_Test)
{

    // 1. Setup

    auto myFourBitAdder = new FourBitAdder();

    // 2. Code

    myFourBitAdder->setInputX1(false);
    myFourBitAdder->setInputX2(false);
    myFourBitAdder->setInputX3(false);
    myFourBitAdder->setInputX4(false);

    myFourBitAdder->setInputY1(false);
    myFourBitAdder->setInputY2(true);
    myFourBitAdder->setInputY3(false);
    myFourBitAdder->setInputY4(false);

    std::vector<bool> actual = myFourBitAdder->answer();

    // Four bit Sum + Carry so 0 0010
    std::vector<bool> expected = {false, false, false, true, false};
    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(Four_Bit_Adder, FourBitAdder_0110__0011_Test)
{

    // 1. Setup

    auto myFourBitAdder = new FourBitAdder();

    // 2. Code

    myFourBitAdder->setInputX1(false);
    myFourBitAdder->setInputX2(true);
    myFourBitAdder->setInputX3(true);
    myFourBitAdder->setInputX4(false);

    myFourBitAdder->setInputY1(true);
    myFourBitAdder->setInputY2(true);
    myFourBitAdder->setInputY3(false);
    myFourBitAdder->setInputY4(false);

    std::vector<bool> actual = myFourBitAdder->answer();

    // Four bit Sum + Carry so 0 1001
    std::vector<bool> expected = {false, true, false, false, true};
    // 3. Test

    EXPECT_EQ(actual, expected);

}