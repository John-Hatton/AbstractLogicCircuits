//
// Created by physiker on 12/11/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/FiveInputNandGate.cpp"


TEST(Five_Input_NAND_Gate, FiveInputNndGate_0_nand_0_nand_0_nand_0_nand_0_Test)
{

    // 1. Setup

    auto myFiveInputNandGate= new FiveInputNandGate();

    // 2. Code

    myFiveInputNandGate->setInputI(false);
    myFiveInputNandGate->setInputIi(false);
    myFiveInputNandGate->setInputIii(false);
    myFiveInputNandGate->setInputIv(false);
    myFiveInputNandGate->setInputV(false);

    bool answer = myFiveInputNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}


TEST(Five_Input_NAND_Gate, FiveInputNndGate_0_nand_0_nand_1_nand_0_nand_0_Test)
{

    // 1. Setup

    auto myFiveInputNandGate= new FiveInputNandGate();

    // 2. Code

    myFiveInputNandGate->setInputI(false);
    myFiveInputNandGate->setInputIi(false);
    myFiveInputNandGate->setInputIii(true);
    myFiveInputNandGate->setInputIv(false);
    myFiveInputNandGate->setInputV(false);

    bool answer = myFiveInputNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(Five_Input_NAND_Gate, FiveInputNndGate_1_nand_1_nand_1_nand_1_nand_1_Test)
{

    // 1. Setup

    auto myFiveInputNandGate= new FiveInputNandGate();

    // 2. Code

    myFiveInputNandGate->setInputI(true);
    myFiveInputNandGate->setInputIi(true);
    myFiveInputNandGate->setInputIii(true);
    myFiveInputNandGate->setInputIv(true);
    myFiveInputNandGate->setInputV(true);

    bool answer = myFiveInputNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}


