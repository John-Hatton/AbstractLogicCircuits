//
// Created by physiker on 12/11/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/TriInputNandGate.cpp"


TEST(Tri_Input_NAND_Gate, TriInputNndGate_0_nand_0_nand_0_Test)
{

    // 1. Setup

    auto myTriInputNandGate= new TriInputNandGate();

    // 2. Code

    myTriInputNandGate->setInputX(false);
    myTriInputNandGate->setInputY(false);
    myTriInputNandGate->setInputZ(false);

    bool answer = myTriInputNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(Tri_Input_NAND_Gate, TriInputNndGate_1_nand_0_nand_0_Test)
{

    // 1. Setup

    auto myTriInputNandGate= new TriInputNandGate();

    // 2. Code

    myTriInputNandGate->setInputX(true);
    myTriInputNandGate->setInputY(false);
    myTriInputNandGate->setInputZ(false);

    bool answer = myTriInputNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(Tri_Input_NAND_Gate, TriInputNndGate_1_nand_1_nand_0_Test)
{

    // 1. Setup

    auto myTriInputNandGate= new TriInputNandGate();

    // 2. Code

    myTriInputNandGate->setInputX(true);
    myTriInputNandGate->setInputY(true);
    myTriInputNandGate->setInputZ(false);

    bool answer = myTriInputNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(Tri_Input_NAND_Gate, TriInputNndGate_1_nand_1_nand_1_Test)
{

    // 1. Setup

    auto myTriInputNandGate= new TriInputNandGate();

    // 2. Code

    myTriInputNandGate->setInputX(true);
    myTriInputNandGate->setInputY(true);
    myTriInputNandGate->setInputZ(true);

    bool answer = myTriInputNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}
