#include <gtest/gtest.h>

#include "../../source/LogicGates/OrGate.cpp"


TEST(OR_Gate, orGate_0_or_0_Test)
{

    // 1. Setup

    auto myOrGate = new OrGate();

    // 2. Code

    myOrGate->setInputX(false);
    myOrGate->setInputY(false);

    bool answer = myOrGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(OR_Gate, orGate_0_or_1_Test)
{

    // 1. Setup

    auto myOrGate = new OrGate();

    // 2. Code

    myOrGate->setInputX(false);
    myOrGate->setInputY(true);

    bool answer = myOrGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(OR_Gate, orGate_1_or_0_Test)
{

    // 1. Setup

    auto myOrGate = new OrGate();

    // 2. Code

    myOrGate->setInputX(true);
    myOrGate->setInputY(false);

    bool answer = myOrGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(OR_Gate, orGate_1_or_1_Test)
{

    // 1. Setup

    auto myOrGate = new OrGate();

    // 2. Code

    myOrGate->setInputX(true);
    myOrGate->setInputY(false);

    bool answer = myOrGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}