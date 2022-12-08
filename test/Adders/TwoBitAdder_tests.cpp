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

    std::string answer = myTwoBitAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0 0000");

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

    std::string answer = myTwoBitAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0 0001");

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

    std::string answer = myTwoBitAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0 0001");

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

    std::string answer = myTwoBitAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0 0010");

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

    std::string answer = myTwoBitAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0 0010");

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

    std::string answer = myTwoBitAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0 0010");

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

    std::string answer = myTwoBitAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0 0100");

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

    std::string answer = myTwoBitAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0 0101");

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

    std::string answer = myTwoBitAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0 0101");

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

    std::string answer = myTwoBitAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0 0110");

}