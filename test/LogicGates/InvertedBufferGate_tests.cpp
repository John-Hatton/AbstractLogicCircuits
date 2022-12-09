//
// Created by snake on 12/8/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/InvertedBufferGate.cpp"


TEST(INVERTED_BUFFER_Gate, invertedBufferGate_0_Test)
{

    // 1. Setup

    auto myInvertedBufferGate = new InvertedBufferGate();

    // 2. Code

    myInvertedBufferGate->setInput(false);

    bool answer = myInvertedBufferGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(INVERTED_BUFFER_Gate, invertedBufferGate_1_Test)
{

    // 1. Setup

    auto myInvertedBufferGate = new InvertedBufferGate();

    // 2. Code

    myInvertedBufferGate->setInput(true);

    bool answer = myInvertedBufferGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}