//
// Created by physiker on 12/07/2022.
//


#include <gtest/gtest.h>

#include "../../source/LogicGates/XorGate.cpp"


TEST(XOR_Gate, xorGate_0_xor_0_Test)
{

    // 1. Setup

    auto myXorGate = new XorGate();

    // 2. Code

    myXorGate->setInputX(false);
    myXorGate->setInputY(false);

    bool answer = myXorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(XOR_Gate, xorGate_0_xor_1_Test)
{

    // 1. Setup

    auto myXorGate = new XorGate();

    // 2. Code

    myXorGate->setInputX(false);
    myXorGate->setInputY(true);

    bool answer = myXorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(XOR_Gate, xorGate_1_xor_0_Test)
{

    // 1. Setup

    auto myXorGate = new XorGate();

    // 2. Code

    myXorGate->setInputX(true);
    myXorGate->setInputY(false);

    bool answer = myXorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(XOR_Gate, xorGate_1_xor_1_Test)
{

    // 1. Setup

    auto myXorGate = new XorGate();

    // 2. Code

    myXorGate->setInputX(true);
    myXorGate->setInputY(true);

    bool answer = myXorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}


