//
// Created by physiker on 12/7/2022.
//
#include <gtest/gtest.h>

#include "../../source/LogicGates/BufferGate.cpp"


TEST(BUFFER_Gate, bufferGate_0_Test)
{

    // 1. Setup

    auto myBufferGate = new BufferGate();

    // 2. Code

    myBufferGate->setInput(false);

    bool answer = myBufferGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);
}
TEST(BUFFER_Gate, bufferGate_1_Test)
{

    // 1. Setup

    auto myBufferGate = new BufferGate();

    // 2. Code

    myBufferGate->setInput(true);

    bool answer = myBufferGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);
}