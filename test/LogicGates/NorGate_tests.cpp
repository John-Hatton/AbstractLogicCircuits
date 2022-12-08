//
// Created by physiker on 12/7/2022.
//
#include <gtest/gtest.h>

#include "../../source/LogicGates/NorGate.cpp"


TEST(NOR_Gate, norGate_0_nor_0_Test)
{

    // 1. Setup

    auto myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(false);
    myNorGate->setInputY(false);

    bool answer = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true);

}

TEST(NOR_Gate, norGate_0_nor_1_Test)
{

    // 1. Setup

    auto myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(false);
    myNorGate->setInputY(true);

    bool answer = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(NOR_Gate, norGate_1_nor_0_Test)
{

    // 1. Setup

    auto myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(true);
    myNorGate->setInputY(false);

    bool answer = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(NOR_Gate, norGate_1_nor_1_Test)
{

    // 1. Setup

    auto myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(true);
    myNorGate->setInputY(true);

    bool answer = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,false);

}

TEST(NOR_Gate, norGate_special_Test)
{

    // 1. Setup

    auto myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(false);

    // NOTE: I am not populating the second input.

    // This simulates what happens in the D-Latch, when I am using two
    //  NOR gates, and potentially only know the values of one of the
    //  inputs, because the other one comes from an output of a NOR gate.

    // I'd imagine, C++ does some magic here for me, to handle
    //  the implicit default value of booleans. It automatically is
    //  assigned NULL by the compiler, when it's false, but if it never
    //  receives a valid value, it still reads NULL, it just doesn't have
    //  that memory address zeroed out, so the memory looks like garbage.


    // NULL is still NULL though, so it works!

    bool answer = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(answer,true); // ??? IT Works!!!

}