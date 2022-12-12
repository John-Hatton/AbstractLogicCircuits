//
// Created by physiker on 12/11/2022.
//
#include <gtest/gtest.h>

#include "../../source/LogicGates/QuadInputNandGate.cpp"


TEST(QUAD_INPUT_NAND_Gate, quadInputNandGate_0_0_0_0_Test)
{

    // 1. Setup

    auto myQuadInputNandGate = new QuadInputNandGate();

    // 2. Code

    myQuadInputNandGate->setInputA(false);
    myQuadInputNandGate->setInputB(false);
    myQuadInputNandGate->setInputC(false);
    myQuadInputNandGate->setInputD(false);

    bool answer = myQuadInputNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(QUAD_INPUT_NAND_Gate, quadInputNandGate_0_1_0_0_Test)
{

    // 1. Setup

    auto myQuadInputNandGate = new QuadInputNandGate();

    // 2. Code

    myQuadInputNandGate->setInputA(false);
    myQuadInputNandGate->setInputB(true);
    myQuadInputNandGate->setInputC(false);
    myQuadInputNandGate->setInputD(false);

    bool answer = myQuadInputNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(QUAD_INPUT_NAND_Gate, quadInputNandGate_0_0_0_1_Test)
{

    // 1. Setup

    auto myQuadInputNandGate = new QuadInputNandGate();

    // 2. Code

    myQuadInputNandGate->setInputA(false);
    myQuadInputNandGate->setInputB(false);
    myQuadInputNandGate->setInputC(false);
    myQuadInputNandGate->setInputD(true);

    bool answer = myQuadInputNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(QUAD_INPUT_NAND_Gate, quadInputNandGate_0_1_1_0_Test)
{

    // 1. Setup

    auto myQuadInputNandGate = new QuadInputNandGate();

    // 2. Code

    myQuadInputNandGate->setInputA(false);
    myQuadInputNandGate->setInputB(true);
    myQuadInputNandGate->setInputC(true);
    myQuadInputNandGate->setInputD(false);

    bool answer = myQuadInputNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(QUAD_INPUT_NAND_Gate, quadInputNandGate_1_1_1_1_Test)
{

    // 1. Setup

    auto myQuadInputNandGate = new QuadInputNandGate();

    // 2. Code

    myQuadInputNandGate->setInputA(true);
    myQuadInputNandGate->setInputB(true);
    myQuadInputNandGate->setInputC(true);
    myQuadInputNandGate->setInputD(true);

    bool answer = myQuadInputNandGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}