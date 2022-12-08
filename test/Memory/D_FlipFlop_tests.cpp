//
// Created by physiker on 12/07/2022.
//


#include <gtest/gtest.h>

#include "../../source/Memory/D_FlipFlop.cpp"


TEST(D_FLIP_FLOP, D_Flip_Flop_write_0__data_0__Test)
{

    // 1. Setup

    auto myD_FlipFlop = new D_FlipFlop();

    // 2. Code
    myD_FlipFlop->setEnable(false);
    myD_FlipFlop->setData(false);


    bool currentState = myD_FlipFlop->currentState();

    myD_FlipFlop->setEnable(false);

    // 3. Test

    EXPECT_EQ(currentState,false);

}

TEST(D_FLIP_FLOP, D_Flip_Flop_write_1__data_1__Test)
{

    // 1. Setup

    auto myD_FlipFlop = new D_FlipFlop();

    // 2. Code



    myD_FlipFlop->setEnable(true);
    myD_FlipFlop->setData(true);

    bool currentState = myD_FlipFlop->currentState();

    myD_FlipFlop->setEnable(false);

    // SHOULDN'T DO ANYTHING!!!
    myD_FlipFlop->setData(false);

    // 3. Test

    EXPECT_EQ(currentState,true);

}

TEST(D_FLIP_FLOP, D_Flip_Flop_write_0__data_1__Test)
{

    // 1. Setup

    auto myD_FlipFlop = new D_FlipFlop();

    // 2. Code



    myD_FlipFlop->setEnable(false);
    myD_FlipFlop->setData(true);

    bool currentState = myD_FlipFlop->currentState();

    myD_FlipFlop->setEnable(false);

    // 3. Test

    EXPECT_EQ(currentState,false);

}