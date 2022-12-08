//
// Created by physiker on 12/7/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/NandGate.cpp"


TEST(NAND_Gate, nandGate_0_and_0_Test)
{

    // 1. Setup

    auto myNandGate= new NandGate();

    // 2. Code

    myNandGate->setInputX(false);
    myNandGate->setInputY(false);

    bool answer = myNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(NAND_Gate, nandGate_0_and_1_Test)
{

    // 1. Setup

    auto myNandGate= new NandGate();

    // 2. Code

    myNandGate->setInputX(false);
    myNandGate->setInputY(true);

    bool answer = myNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(NAND_Gate, nandGate_1_and_0_Test)
{

    // 1. Setup

    auto myNandGate= new NandGate();

    // 2. Code

    myNandGate->setInputX(true);
    myNandGate->setInputY(false);

    bool answer = myNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(NAND_Gate, nandGate_1_and_1_Test)
{

    // 1. Setup

    auto myNandGate= new NandGate();

    // 2. Code

    myNandGate->setInputX(true);
    myNandGate->setInputY(true);

    bool answer = myNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}