//
// Created by physiker on 12/10/2022.
//

#include <gtest/gtest.h>

#include "../../source/Adders/SixteenBitAdder.cpp"


TEST(Sixteen_Bit_Adder, SixteenBitAdder_0000_0000__0000_0000__plus__0000_0000__0000_0000_Test)
{

    // 1. Setup

    auto mySixteenBitAdder = new SixteenBitAdder();

    // 2. Code

    mySixteenBitAdder->setInputX1(false);
    mySixteenBitAdder->setInputX2(false);
    mySixteenBitAdder->setInputX3(false);
    mySixteenBitAdder->setInputX4(false);

    mySixteenBitAdder->setInputX5(false);
    mySixteenBitAdder->setInputX6(false);
    mySixteenBitAdder->setInputX7(false);
    mySixteenBitAdder->setInputX8(false);


    mySixteenBitAdder->setInputX9(false);
    mySixteenBitAdder->setInputX10(false);
    mySixteenBitAdder->setInputX11(false);
    mySixteenBitAdder->setInputX12(false);

    mySixteenBitAdder->setInputX13(false);
    mySixteenBitAdder->setInputX14(false);
    mySixteenBitAdder->setInputX15(false);
    mySixteenBitAdder->setInputX16(false);



    mySixteenBitAdder->setInputY1(false);
    mySixteenBitAdder->setInputY2(false);
    mySixteenBitAdder->setInputY3(false);
    mySixteenBitAdder->setInputY4(false);

    mySixteenBitAdder->setInputY5(false);
    mySixteenBitAdder->setInputY6(false);
    mySixteenBitAdder->setInputY7(false);
    mySixteenBitAdder->setInputY8(false);


    mySixteenBitAdder->setInputY9(false);
    mySixteenBitAdder->setInputY10(false);
    mySixteenBitAdder->setInputY11(false);
    mySixteenBitAdder->setInputY12(false);

    mySixteenBitAdder->setInputY13(false);
    mySixteenBitAdder->setInputY14(false);
    mySixteenBitAdder->setInputY15(false);
    mySixteenBitAdder->setInputY16(false);

    std::vector<bool> actual = mySixteenBitAdder->answer();

    // Four bit Sum + Carry so 0 0000 0000 0000 0000
    std::vector<bool> expected = {false, false, false, false, false, false, false, false, false,
                                  false, false, false, false, false, false, false, false};
    // 3. Test

    EXPECT_EQ(actual, expected);

}


TEST(Sixteen_Bit_Adder, SixteenBitAdder_0010_1100__0010_0111__plus__0110_1000__1010_0100_Test)
{

    // 1. Setup

    auto mySixteenBitAdder = new SixteenBitAdder();

    // 2. Code

    mySixteenBitAdder->setInputX1(true);
    mySixteenBitAdder->setInputX2(true);
    mySixteenBitAdder->setInputX3(true);
    mySixteenBitAdder->setInputX4(false);

    mySixteenBitAdder->setInputX5(false);
    mySixteenBitAdder->setInputX6(true);
    mySixteenBitAdder->setInputX7(false);
    mySixteenBitAdder->setInputX8(false);


    mySixteenBitAdder->setInputX9(false);
    mySixteenBitAdder->setInputX10(false);
    mySixteenBitAdder->setInputX11(true);
    mySixteenBitAdder->setInputX12(true);

    mySixteenBitAdder->setInputX13(false);
    mySixteenBitAdder->setInputX14(true);
    mySixteenBitAdder->setInputX15(false);
    mySixteenBitAdder->setInputX16(false);


    // 0110_1000__1010_0100
    mySixteenBitAdder->setInputY1(false);
    mySixteenBitAdder->setInputY2(false);
    mySixteenBitAdder->setInputY3(true);
    mySixteenBitAdder->setInputY4(false);

    mySixteenBitAdder->setInputY5(false);
    mySixteenBitAdder->setInputY6(true);
    mySixteenBitAdder->setInputY7(false);
    mySixteenBitAdder->setInputY8(true);


    mySixteenBitAdder->setInputY9(false);
    mySixteenBitAdder->setInputY10(false);
    mySixteenBitAdder->setInputY11(false);
    mySixteenBitAdder->setInputY12(true);

    mySixteenBitAdder->setInputY13(false);
    mySixteenBitAdder->setInputY14(true);
    mySixteenBitAdder->setInputY15(true);
    mySixteenBitAdder->setInputY16(false);

    std::vector<bool> actual = mySixteenBitAdder->answer();

    // Four bit Sum + Carry so 0 1001 0100  1100 1011
    std::vector<bool> expected = {false, true, false, false, true, false, true, false, false,
                                  true, true, false, false, true, false, true, true};
    // 3. Test

    EXPECT_EQ(actual, expected);

}