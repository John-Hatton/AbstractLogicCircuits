//
// Created by physiker on 11/19/2022.
//


#include <gtest/gtest.h>

#include "../../source/Adders/HalfAdder.cpp"


TEST(Half_Adder, HalfAdder_0__0_Test)
{

    // 1. Setup

    auto myHalfAdder = new HalfAdder();

    // 2. Code

    myHalfAdder->setInputX(false);
    myHalfAdder->setInputY(false);

    std::string answer = myHalfAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"00");

}

TEST(Half_Adder, HalfAdder_0__1_Test)
{

    // 1. Setup

    auto myHalfAdder = new HalfAdder();

    // 2. Code

    myHalfAdder->setInputX(false);
    myHalfAdder->setInputY(true);

    std::string answer = myHalfAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"01");

}

TEST(Half_Adder, HalfAdder_1__0_Test)
{

    // 1. Setup

    auto myHalfAdder = new HalfAdder();

    // 2. Code

    myHalfAdder->setInputX(true);
    myHalfAdder->setInputY(false);

    std::string answer = myHalfAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"01");

}

TEST(Half_Adder, HalfAdder_1__1_Test)
{

    // 1. Setup

    auto myHalfAdder = new HalfAdder();

    // 2. Code

    myHalfAdder->setInputX(true);
    myHalfAdder->setInputY(true);

    std::string answer = myHalfAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"10");

}