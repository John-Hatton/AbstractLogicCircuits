//
// Created by physiker on 11/20/2022.
//


#include <gtest/gtest.h>

#include "../../source/Adders/TwoBitAdder.cpp"


TEST(Two_Bit_Adder, TwoBitAdder_00__00_Test)
{

    // 1. Setup

    auto myTwoBitAdder = new TwoBitAdder();

    // 2. Code

    myTwoBitAdder->setInputX1(false);
    myTwoBitAdder->setInputY1(false);
    myTwoBitAdder->setInputX2(false);
    myTwoBitAdder->setInputY2(false);

    std::vector<bool> actual = myTwoBitAdder->answer();

    std::vector<bool> expected = {false, false, false};
    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(Two_Bit_Adder, TwoBitAdder_00__01_Test)
{

    // 1. Setup

    auto myTwoBitAdder = new TwoBitAdder();

    // 2. Code

    myTwoBitAdder->setInputX1(false);
    myTwoBitAdder->setInputY1(true);
    myTwoBitAdder->setInputX2(false);
    myTwoBitAdder->setInputY2(false);

    std::vector<bool> actual = myTwoBitAdder->answer();

    std::vector<bool> expected = {false, false, true};
    // 3. Test

    EXPECT_EQ(actual, expected);

}
TEST(Two_Bit_Adder, TwoBitAdder_01__00_Test)
{

    // 1. Setup

    auto myTwoBitAdder = new TwoBitAdder();

    // 2. Code

    myTwoBitAdder->setInputX1(true);
    myTwoBitAdder->setInputY1(false);
    myTwoBitAdder->setInputX2(false);
    myTwoBitAdder->setInputY2(false);

    std::vector<bool> actual = myTwoBitAdder->answer();

    std::vector<bool> expected = {false, false, true};
    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(Two_Bit_Adder, TwoBitAdder_01__01_Test)
{

    // 1. Setup

    auto myTwoBitAdder = new TwoBitAdder();

    // 2. Code

    myTwoBitAdder->setInputX1(true);
    myTwoBitAdder->setInputY1(true);
    myTwoBitAdder->setInputX2(false);
    myTwoBitAdder->setInputY2(false);

    std::vector<bool> actual = myTwoBitAdder->answer();

    std::vector<bool> expected = {false, true, false};
    // 3. Test

    EXPECT_EQ(actual, expected);

}
TEST(Two_Bit_Adder, TwoBitAdder_00__10_Test)
{

    // 1. Setup

    auto myTwoBitAdder = new TwoBitAdder();

    // 2. Code

    myTwoBitAdder->setInputX1(false);
    myTwoBitAdder->setInputY1(false);
    myTwoBitAdder->setInputX2(false);
    myTwoBitAdder->setInputY2(true);

    std::vector<bool> actual = myTwoBitAdder->answer();

    std::vector<bool> expected = {false, true, false};
    // 3. Test

    EXPECT_EQ(actual, expected);

}
TEST(Two_Bit_Adder, TwoBitAdder_10__00_Test)
{

    // 1. Setup

    auto myTwoBitAdder = new TwoBitAdder();

    // 2. Code

    myTwoBitAdder->setInputX1(false);
    myTwoBitAdder->setInputY1(false);
    myTwoBitAdder->setInputX2(true);
    myTwoBitAdder->setInputY2(false);

    std::vector<bool> actual = myTwoBitAdder->answer();

    std::vector<bool> expected = {false, true, false};
    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(Two_Bit_Adder, TwoBitAdder_10__10_Test)
{

    // 1. Setup

    auto myTwoBitAdder = new TwoBitAdder();

    // 2. Code

    myTwoBitAdder->setInputX1(false);
    myTwoBitAdder->setInputY1(false);
    myTwoBitAdder->setInputX2(true);
    myTwoBitAdder->setInputY2(true);

    std::vector<bool> actual = myTwoBitAdder->answer();

    std::vector<bool> expected = {true, false, false};
    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(Two_Bit_Adder, TwoBitAdder_11__10_Test)
{

    // 1. Setup

    auto myTwoBitAdder = new TwoBitAdder();

    // 2. Code

    myTwoBitAdder->setInputX1(true);
    myTwoBitAdder->setInputY1(false);
    myTwoBitAdder->setInputX2(true);
    myTwoBitAdder->setInputY2(true);

    std::vector<bool> actual = myTwoBitAdder->answer();

    std::vector<bool> expected = {true, false, true};
    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(Two_Bit_Adder, TwoBitAdder_10__11_Test)
{

    // 1. Setup

    auto myTwoBitAdder = new TwoBitAdder();

    // 2. Code

    myTwoBitAdder->setInputX1(true);
    myTwoBitAdder->setInputY1(false);
    myTwoBitAdder->setInputX2(true);
    myTwoBitAdder->setInputY2(true);

    std::vector<bool> actual = myTwoBitAdder->answer();

    std::vector<bool> expected = {true, false, true};
    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(Two_Bit_Adder, TwoBitAdder_11__11_Test)
{

    // 1. Setup

    auto myTwoBitAdder = new TwoBitAdder();

    // 2. Code

    myTwoBitAdder->setInputX1(true);
    myTwoBitAdder->setInputY1(true);
    myTwoBitAdder->setInputX2(true);
    myTwoBitAdder->setInputY2(true);

    std::vector<bool> actual = myTwoBitAdder->answer();

    std::vector<bool> expected = {true, true, false};
    // 3. Test

    EXPECT_EQ(actual, expected);

}