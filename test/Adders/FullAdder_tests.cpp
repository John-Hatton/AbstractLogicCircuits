//
// Created by physiker on 11/20/2022.
//


#include <gtest/gtest.h>

#include "../../source/Adders/FullAdder.cpp"


TEST(Full_Adder, FullAdder_0__0_Test)
{

    // 1. Setup

    auto myFullAdder = new FullAdder();

    // 2. Code

    myFullAdder->setInputX(false);
    myFullAdder->setInputY(false);

    std::string answer = myFullAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0000");
    EXPECT_EQ(myFullAdder->getCarryIn(), false);
    EXPECT_EQ(myFullAdder->getSum(), false);
    EXPECT_EQ(myFullAdder->getCarryOut(), false);
}

TEST(Full_Adder, FullAdder_0__1_Test)
{

    // 1. Setup

    auto myFullAdder = new FullAdder();

    // 2. Code

    myFullAdder->setInputX(false);
    myFullAdder->setInputY(true);

    std::string answer = myFullAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0001");
    EXPECT_EQ(myFullAdder->getCarryIn(), false);
    EXPECT_EQ(myFullAdder->getCarryOut(), false);

}

TEST(Full_Adder, FullAdder_1__0_Test)
{

    // 1. Setup

    auto myFullAdder = new FullAdder();

    // 2. Code

    myFullAdder->setInputX(true);
    myFullAdder->setInputY(false);

    std::string answer = myFullAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0001");
    EXPECT_EQ(myFullAdder->getCarryIn(), false);
    EXPECT_EQ(myFullAdder->getCarryOut(), false);

}

TEST(Full_Adder, FullAdder_1__1_Test)
{

    // 1. Setup

    auto myFullAdder = new FullAdder();

    // 2. Code

    myFullAdder->setInputX(true);
    myFullAdder->setInputY(true);

    std::string answer = myFullAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0010");
    EXPECT_EQ(myFullAdder->getCarryIn(), false);
    EXPECT_EQ(myFullAdder->getCarryOut(), true);

}


/*
 *
 * BEGINNING OF CARRY IN TESTS
 *
 */

TEST(Full_Adder, FullAdder_0__0_CarryIn_Test)
{

    // 1. Setup

    auto myFullAdder = new FullAdder();

    // 2. Code

    myFullAdder->setInputX(false);
    myFullAdder->setInputY(false);
    myFullAdder->setCarryIn(true);

    std::string answer = myFullAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0001");
    EXPECT_EQ(myFullAdder->getCarryIn(), true);
    EXPECT_EQ(myFullAdder->getSum(), true);
    EXPECT_EQ(myFullAdder->getCarryOut(), false);

}

TEST(Full_Adder, FullAdder_0__1_CarryIn_Test)
{

    // 1. Setup

    auto myFullAdder = new FullAdder();

    // 2. Code

    myFullAdder->setInputX(false);
    myFullAdder->setInputY(true);
    myFullAdder->setCarryIn(true);

    std::string answer = myFullAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0010");
    EXPECT_EQ(myFullAdder->getCarryIn(), true);
    EXPECT_EQ(myFullAdder->getSum(), false);
    EXPECT_EQ(myFullAdder->getCarryOut(), true);

}

TEST(Full_Adder, FullAdder_1__0_CarryIn_Test)
{

    // 1. Setup

    auto myFullAdder = new FullAdder();

    // 2. Code

    myFullAdder->setInputX(false);
    myFullAdder->setInputY(true);
    myFullAdder->setCarryIn(true);

    std::string answer = myFullAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0010");
    EXPECT_EQ(myFullAdder->getCarryIn(), true);
    EXPECT_EQ(myFullAdder->getSum(), false);
    EXPECT_EQ(myFullAdder->getCarryOut(), true);

}

TEST(Full_Adder, FullAdder_1__1_CarryIn_Test)
{

    // 1. Setup

    auto myFullAdder = new FullAdder();

    // 2. Code

    myFullAdder->setInputX(true);
    myFullAdder->setInputY(true);
    myFullAdder->setCarryIn(true);

    std::string answer = myFullAdder->answer();

    // 3. Test

    EXPECT_EQ(answer,"0011");
    EXPECT_EQ(myFullAdder->getCarryIn(), true);
    EXPECT_EQ(myFullAdder->getSum(), true);
    EXPECT_EQ(myFullAdder->getCarryOut(), true);

}