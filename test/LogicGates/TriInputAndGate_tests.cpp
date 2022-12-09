//
// Created by physiker on 12/8/2022.
//

#include <gtest/gtest.h>

#include "LogicGates/TriInputAndGate.cpp"


TEST(TRI_STATE_AND_Gate, triStateAndGate_0_and_0_and_0_Test)
{

    // 1. Setup

    auto myTriStateAndGate= new TriInputAndGate();

    // 2. Code

    myTriStateAndGate->setInputX(false);
    myTriStateAndGate->setInputY(false);
    myTriStateAndGate->setInputZ(false);

    bool answer = myTriStateAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(TRI_STATE_AND_Gate, triStateAndGate_0_and_0_and_1_Test)
{

    // 1. Setup

    auto myTriStateAndGate= new TriInputAndGate();

    // 2. Code

    myTriStateAndGate->setInputX(false);
    myTriStateAndGate->setInputY(false);
    myTriStateAndGate->setInputZ(true);

    bool answer = myTriStateAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(TRI_STATE_AND_Gate, triStateAndGate_0_and_1_and_0_Test)
{

    // 1. Setup

    auto myTriStateAndGate= new TriInputAndGate();

    // 2. Code

    myTriStateAndGate->setInputX(false);
    myTriStateAndGate->setInputY(true);
    myTriStateAndGate->setInputZ(false);

    bool answer = myTriStateAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(TRI_STATE_AND_Gate, triStateAndGate_1_and_0_and_0_Test)
{

    // 1. Setup

    auto myTriStateAndGate= new TriInputAndGate();

    // 2. Code

    myTriStateAndGate->setInputX(true);
    myTriStateAndGate->setInputY(false);
    myTriStateAndGate->setInputZ(false);

    bool answer = myTriStateAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(TRI_STATE_AND_Gate, triStateAndGate_0_and_1_and_1_Test)
{

    // 1. Setup

    auto myTriStateAndGate= new TriInputAndGate();

    // 2. Code

    myTriStateAndGate->setInputX(false);
    myTriStateAndGate->setInputY(true);
    myTriStateAndGate->setInputZ(true);

    bool answer = myTriStateAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(TRI_STATE_AND_Gate, triStateAndGate_1_and_1_and_0_Test)
{

    // 1. Setup

    auto myTriStateAndGate= new TriInputAndGate();

    // 2. Code

    myTriStateAndGate->setInputX(true);
    myTriStateAndGate->setInputY(true);
    myTriStateAndGate->setInputZ(false);

    bool answer = myTriStateAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(TRI_STATE_AND_Gate, triStateAndGate_1_and_0_and_1_Test)
{

    // 1. Setup

    auto myTriStateAndGate= new TriInputAndGate();

    // 2. Code

    myTriStateAndGate->setInputX(true);
    myTriStateAndGate->setInputY(false);
    myTriStateAndGate->setInputZ(true);

    bool answer = myTriStateAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(TRI_STATE_AND_Gate, triStateAndGate_1_and_1_and_1_Test)
{

    // 1. Setup

    auto myTriStateAndGate= new TriInputAndGate();

    // 2. Code

    myTriStateAndGate->setInputX(true);
    myTriStateAndGate->setInputY(true);
    myTriStateAndGate->setInputZ(true);

    bool answer = myTriStateAndGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}
