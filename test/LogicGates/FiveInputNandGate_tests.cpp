//
// Created by physiker on 12/11/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/FiveInputNandGate.cpp"


TEST(Fünf_Input_NAND_Gate, FünfInputNndGate_0_nand_0_nand_0_Test)
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