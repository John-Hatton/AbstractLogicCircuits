#include <gtest/gtest.h>

#include "../../source/LogicGates/AndGate.cpp"


TEST(AND_Gate, andGate_0_and_0_Test)
{

    // 1. Setup

    auto myAndGate= new AndGate();

    // 2. Code

    myAndGate->setInputX(false);
    myAndGate->setInputY(false);

    bool answer = myAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(AND_Gate, andGate_0_and_1_Test)
{

    // 1. Setup

    auto myAndGate= new AndGate();

    // 2. Code

    myAndGate->setInputX(true);
    myAndGate->setInputY(false);

    bool answer = myAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(AND_Gate, andGate_1_and_0_Test)
{

    // 1. Setup

    auto myAndGate= new AndGate();

    // 2. Code

    myAndGate->setInputX(false);
    myAndGate->setInputY(true);

    bool answer = myAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}


TEST(AND_Gate, andGate_1_and_1_Test)
{

    // 1. Setup

    auto myAndGate= new AndGate();

    // 2. Code

    myAndGate->setInputX(true);
    myAndGate->setInputY(true);

    bool answer = myAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}