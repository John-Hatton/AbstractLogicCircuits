//
// Created by physiker on 12/08/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/TriInvertedAndGate.cpp"


TEST(TRI_INVERTED_AND_Gate, TriInvertedAndGate_0_and_0_and_0_Test)
{

    // 1. Setup

    auto myTriInvertedAndGate= new TriInvertedAndGate();

    // 2. Code

    myTriInvertedAndGate->setInputX(false);
    myTriInvertedAndGate->setInputY(false);
    myTriInvertedAndGate->setInputZ(false);

    bool answer = myTriInvertedAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(TRI_INVERTED_AND_Gate, TriInvertedAndGate_0_and_1_and_0_Test)
{

    // 1. Setup

    auto myTriInvertedAndGate= new TriInvertedAndGate();

    // 2. Code

    myTriInvertedAndGate->setInputX(false);
    myTriInvertedAndGate->setInputY(true);
    myTriInvertedAndGate->setInputZ(false);

    bool answer = myTriInvertedAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(TRI_INVERTED_AND_Gate, TriInvertedAndGate_1_and_1_and_1_Test)
{

    // 1. Setup

    auto myTriInvertedAndGate= new TriInvertedAndGate();

    // 2. Code

    myTriInvertedAndGate->setInputX(true);
    myTriInvertedAndGate->setInputY(true);
    myTriInvertedAndGate->setInputZ(true);

    bool answer = myTriInvertedAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}