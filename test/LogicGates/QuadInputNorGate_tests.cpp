//
// Created by physiker on 12/08/2022.
//
#include <gtest/gtest.h>

#include "../../source/LogicGates/QuadInputNorGate.cpp"


TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_0_0_0_0_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(false);
    myQuadInputNorGate->setInputB(false);
    myQuadInputNorGate->setInputC(false);
    myQuadInputNorGate->setInputD(false);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_0_0_0_1_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(false);
    myQuadInputNorGate->setInputB(false);
    myQuadInputNorGate->setInputC(false);
    myQuadInputNorGate->setInputD(true);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_0_0_1_0_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(false);
    myQuadInputNorGate->setInputB(false);
    myQuadInputNorGate->setInputC(true);
    myQuadInputNorGate->setInputD(false);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_0_0_1_1_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(false);
    myQuadInputNorGate->setInputB(false);
    myQuadInputNorGate->setInputC(true);
    myQuadInputNorGate->setInputD(true);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_0_1_0_0_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(false);
    myQuadInputNorGate->setInputB(true);
    myQuadInputNorGate->setInputC(false);
    myQuadInputNorGate->setInputD(false);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_0_1_0_1_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(false);
    myQuadInputNorGate->setInputB(true);
    myQuadInputNorGate->setInputC(false);
    myQuadInputNorGate->setInputD(true);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_0_1_1_0_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(false);
    myQuadInputNorGate->setInputB(true);
    myQuadInputNorGate->setInputC(true);
    myQuadInputNorGate->setInputD(false);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_0_1_1_1_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(false);
    myQuadInputNorGate->setInputB(true);
    myQuadInputNorGate->setInputC(true);
    myQuadInputNorGate->setInputD(true);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_1_0_0_0_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(true);
    myQuadInputNorGate->setInputB(false);
    myQuadInputNorGate->setInputC(false);
    myQuadInputNorGate->setInputD(false);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_1_0_0_1_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(true);
    myQuadInputNorGate->setInputB(false);
    myQuadInputNorGate->setInputC(false);
    myQuadInputNorGate->setInputD(true);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_1_0_1_0_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(true);
    myQuadInputNorGate->setInputB(false);
    myQuadInputNorGate->setInputC(true);
    myQuadInputNorGate->setInputD(false);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_1_0_1_1_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(true);
    myQuadInputNorGate->setInputB(false);
    myQuadInputNorGate->setInputC(true);
    myQuadInputNorGate->setInputD(true);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_1_1_0_0_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(true);
    myQuadInputNorGate->setInputB(true);
    myQuadInputNorGate->setInputC(false);
    myQuadInputNorGate->setInputD(false);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_1_1_0_1_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(true);
    myQuadInputNorGate->setInputB(true);
    myQuadInputNorGate->setInputC(false);
    myQuadInputNorGate->setInputD(true);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_1_1_1_0_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(true);
    myQuadInputNorGate->setInputB(true);
    myQuadInputNorGate->setInputC(true);
    myQuadInputNorGate->setInputD(false);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(QUAD_INPUT_NOT_Gate, quadInputNorGate_1_1_1_1_Test)
{

    // 1. Setup

    auto myQuadInputNorGate = new QuadInputNorGate();

    // 2. Code

    myQuadInputNorGate->setInputA(true);
    myQuadInputNorGate->setInputB(true);
    myQuadInputNorGate->setInputC(true);
    myQuadInputNorGate->setInputD(true);

    bool answer = myQuadInputNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

