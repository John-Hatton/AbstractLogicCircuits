//
// Created by physiker on 12/7/2022.
//
#include <gtest/gtest.h>

#include "../../source/LogicGates/NotGate.cpp"


TEST(NOT_Gate, notGate_0_Test)
{

    // 1. Setup

    auto myNotGate = new NotGate();

    // 2. Code

    myNotGate->setInput(false);

    bool answer = myNotGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(NOT_Gate, notGate_1_Test)
{

    // 1. Setup

    auto myNotGate = new NotGate();

    // 2. Code

    myNotGate->setInput(true);

    bool answer = myNotGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}