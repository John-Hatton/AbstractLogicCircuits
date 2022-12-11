//
// Created by physiker on 12/10/2022.
//

#include <gtest/gtest.h>

#include "../../source/Adders/ThirtyTwoBitAdder.cpp"


TEST(Sixteen_Bit_Adder, SixteenBitAdder_0000_0000_0000_0000__0000_0000_0000_0000____plus__0000_0000_0000_0000__0000_0000_0000_0000_Test)
{

    // 1. Setup

    auto myThirtyTwoBitAdder = new ThirtyTwoBitAdder();

    // 2. Code

    myThirtyTwoBitAdder->setInputX1(false);
    myThirtyTwoBitAdder->setInputX2(false);
    myThirtyTwoBitAdder->setInputX3(false);
    myThirtyTwoBitAdder->setInputX4(false);

    myThirtyTwoBitAdder->setInputX5(false);
    myThirtyTwoBitAdder->setInputX6(false);
    myThirtyTwoBitAdder->setInputX7(false);
    myThirtyTwoBitAdder->setInputX8(false);


    myThirtyTwoBitAdder->setInputX9(false);
    myThirtyTwoBitAdder->setInputX10(false);
    myThirtyTwoBitAdder->setInputX11(false);
    myThirtyTwoBitAdder->setInputX12(false);

    myThirtyTwoBitAdder->setInputX13(false);
    myThirtyTwoBitAdder->setInputX14(false);
    myThirtyTwoBitAdder->setInputX15(false);
    myThirtyTwoBitAdder->setInputX16(false);

    myThirtyTwoBitAdder->setInputX17(false);
    myThirtyTwoBitAdder->setInputX18(false);
    myThirtyTwoBitAdder->setInputX19(false);
    myThirtyTwoBitAdder->setInputX20(false);

    myThirtyTwoBitAdder->setInputX21(false);
    myThirtyTwoBitAdder->setInputX22(false);
    myThirtyTwoBitAdder->setInputX23(false);
    myThirtyTwoBitAdder->setInputX24(false);


    myThirtyTwoBitAdder->setInputX25(false);
    myThirtyTwoBitAdder->setInputX26(false);
    myThirtyTwoBitAdder->setInputX27(false);
    myThirtyTwoBitAdder->setInputX28(false);

    myThirtyTwoBitAdder->setInputX29(false);
    myThirtyTwoBitAdder->setInputX30(false);
    myThirtyTwoBitAdder->setInputX31(false);
    myThirtyTwoBitAdder->setInputX32(false);



    myThirtyTwoBitAdder->setInputY1(false);
    myThirtyTwoBitAdder->setInputY2(false);
    myThirtyTwoBitAdder->setInputY3(false);
    myThirtyTwoBitAdder->setInputY4(false);

    myThirtyTwoBitAdder->setInputY5(false);
    myThirtyTwoBitAdder->setInputY6(false);
    myThirtyTwoBitAdder->setInputY7(false);
    myThirtyTwoBitAdder->setInputY8(false);


    myThirtyTwoBitAdder->setInputY9(false);
    myThirtyTwoBitAdder->setInputY10(false);
    myThirtyTwoBitAdder->setInputY11(false);
    myThirtyTwoBitAdder->setInputY12(false);

    myThirtyTwoBitAdder->setInputY13(false);
    myThirtyTwoBitAdder->setInputY14(false);
    myThirtyTwoBitAdder->setInputY15(false);
    myThirtyTwoBitAdder->setInputY16(false);

    myThirtyTwoBitAdder->setInputY17(false);
    myThirtyTwoBitAdder->setInputY18(false);
    myThirtyTwoBitAdder->setInputY19(false);
    myThirtyTwoBitAdder->setInputY20(false);

    myThirtyTwoBitAdder->setInputY21(false);
    myThirtyTwoBitAdder->setInputY22(false);
    myThirtyTwoBitAdder->setInputY23(false);
    myThirtyTwoBitAdder->setInputY24(false);


    myThirtyTwoBitAdder->setInputY25(false);
    myThirtyTwoBitAdder->setInputY26(false);
    myThirtyTwoBitAdder->setInputY27(false);
    myThirtyTwoBitAdder->setInputY28(false);

    myThirtyTwoBitAdder->setInputY29(false);
    myThirtyTwoBitAdder->setInputY30(false);
    myThirtyTwoBitAdder->setInputY31(false);
    myThirtyTwoBitAdder->setInputY32(false);

    std::vector<bool> actual = myThirtyTwoBitAdder->answer();

    // Four bit Sum + Carry so 0 0000 0000  0000 0000   0000 0000  0000 0000
    std::vector<bool> expected = {false,
                                  false, false, false, false,
                                  false, false, false, false,
                                  false, false, false, false,
                                  false, false, false, false,
                                  false, false, false, false,
                                  false, false, false, false,
                                  false, false, false, false,
                                  false, false, false, false}; // 33 Falses for 32 bits and 1 CarryOut
    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(Sixteen_Bit_Adder, SixteenBitAdder_0110_0101_0110_1000__0110_0100_0001_1010____plus__0110_0100_0011_0100__0010_1100_1010_0100_Test)
{

    // 1. Setup

    auto myThirtyTwoBitAdder = new ThirtyTwoBitAdder();

    // 2. Code

    myThirtyTwoBitAdder->setInputX1(false);
    myThirtyTwoBitAdder->setInputX2(true);
    myThirtyTwoBitAdder->setInputX3(false);
    myThirtyTwoBitAdder->setInputX4(true);

    myThirtyTwoBitAdder->setInputX5(true);
    myThirtyTwoBitAdder->setInputX6(false);
    myThirtyTwoBitAdder->setInputX7(false);
    myThirtyTwoBitAdder->setInputX8(false);


    myThirtyTwoBitAdder->setInputX9(false);
    myThirtyTwoBitAdder->setInputX10(false);
    myThirtyTwoBitAdder->setInputX11(true);
    myThirtyTwoBitAdder->setInputX12(false);

    myThirtyTwoBitAdder->setInputX13(false);
    myThirtyTwoBitAdder->setInputX14(true);
    myThirtyTwoBitAdder->setInputX15(true);
    myThirtyTwoBitAdder->setInputX16(false);

    myThirtyTwoBitAdder->setInputX17(false);
    myThirtyTwoBitAdder->setInputX18(false);
    myThirtyTwoBitAdder->setInputX19(false);
    myThirtyTwoBitAdder->setInputX20(true);

    myThirtyTwoBitAdder->setInputX21(false);
    myThirtyTwoBitAdder->setInputX22(true);
    myThirtyTwoBitAdder->setInputX23(true);
    myThirtyTwoBitAdder->setInputX24(false);


    myThirtyTwoBitAdder->setInputX25(true);
    myThirtyTwoBitAdder->setInputX26(false);
    myThirtyTwoBitAdder->setInputX27(true);
    myThirtyTwoBitAdder->setInputX28(false);

    myThirtyTwoBitAdder->setInputX29(false);
    myThirtyTwoBitAdder->setInputX30(true);
    myThirtyTwoBitAdder->setInputX31(true);
    myThirtyTwoBitAdder->setInputX32(false);

    // Y Inputs Begin:
    // 0110_0100_0011_0100__0010_1100_1010_0100

    myThirtyTwoBitAdder->setInputY1(false);
    myThirtyTwoBitAdder->setInputY2(false);
    myThirtyTwoBitAdder->setInputY3(true);
    myThirtyTwoBitAdder->setInputY4(false);

    myThirtyTwoBitAdder->setInputY5(false);
    myThirtyTwoBitAdder->setInputY6(true);
    myThirtyTwoBitAdder->setInputY7(false);
    myThirtyTwoBitAdder->setInputY8(true);


    myThirtyTwoBitAdder->setInputY9(false);
    myThirtyTwoBitAdder->setInputY10(false);
    myThirtyTwoBitAdder->setInputY11(true);
    myThirtyTwoBitAdder->setInputY12(true);

    myThirtyTwoBitAdder->setInputY13(false);
    myThirtyTwoBitAdder->setInputY14(true);
    myThirtyTwoBitAdder->setInputY15(false);
    myThirtyTwoBitAdder->setInputY16(false);

    myThirtyTwoBitAdder->setInputY17(false);
    myThirtyTwoBitAdder->setInputY18(false);
    myThirtyTwoBitAdder->setInputY19(true);
    myThirtyTwoBitAdder->setInputY20(false);

    myThirtyTwoBitAdder->setInputY21(true);
    myThirtyTwoBitAdder->setInputY22(true);
    myThirtyTwoBitAdder->setInputY23(false);
    myThirtyTwoBitAdder->setInputY24(false);


    myThirtyTwoBitAdder->setInputY25(false);
    myThirtyTwoBitAdder->setInputY26(false);
    myThirtyTwoBitAdder->setInputY27(true);
    myThirtyTwoBitAdder->setInputY28(false);

    myThirtyTwoBitAdder->setInputY29(false);
    myThirtyTwoBitAdder->setInputY30(true);
    myThirtyTwoBitAdder->setInputY31(true);
    myThirtyTwoBitAdder->setInputY32(false);

    std::vector<bool> actual = myThirtyTwoBitAdder->answer();

    // Four bit Sum + Carry so 0 1100 1001  1001 1100   1001 0000  1011 1110
    std::vector<bool> expected = {false,
                                  true, true, false, false,
                                  true, false, false, true,
                                  true, false, false, true,
                                  true, true, false, false,
                                  true, false, false, true,
                                  false, false, false, false,
                                  true, false, true, true,
                                  true, true, true, false}; // 33 Falses for 32 bits and 1 CarryOut
    // 3. Test

    EXPECT_EQ(actual, expected);

}