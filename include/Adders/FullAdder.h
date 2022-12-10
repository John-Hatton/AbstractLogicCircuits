//
// Created by physiker on 11/20/2022.
//
#pragma once

#include <vector>
#include "LogicGates/XorGate.h"
#include "LogicGates/AndGate.h"

/**
 * The Full Adder class is an abstraction for a full adder. The internal design uses two XOR gates, two AND gates, and
 * one OR gate to accomplish this. I might experiment later, and create a NAND gate, to try to make some of these same
 * circuits with just NAND logic, to see how effective that might be.
 */
class FullAdder {

private:

    /**
     * Represents the X input of the Full Adder. (One Bit)
     */
    bool inputX;

    /**
     * Represents the Y input of the Full Adder. (One Bit)
     */
    bool inputY;

    /**
     * Represents the boolean value carried into the Full Adder.
     */
    bool carryIn = false;

    /**
     * Corresponds with the sum of the two inputs given.
     */
    bool sum = false;

    /**
     * Represents the boolean value carried out of the Full Adder.
     */
    bool carryOut = false;

public:

    /**
     * Default Constructor
     */
    FullAdder();

    /**
     * The Get Input X function is a getter for the internal inputX boolean.
     * @return Returns the encapsulated value of inputX.
     */
    bool getInputX() const;

    /**
     * The Set Input X function is a setter for the internal inputX boolean.
     * @param inX Corresponds with the boolean value that's going into inputX.
     */
    void setInputX(bool inX);

    /**
     * The Get Input Y function is a getter for the internal inputY boolean.
     * @return Returns the encapsulated value of inputY.
     */
    bool getInputY() const;

    /**
     * The Set Input Y function is a setter for the internal inputY boolean.
     * @param inY Corresponds with the boolean value that's going into inputY.
     */
    void setInputY(bool inY);

    /**
     * The Get Carry In function is a getter for the internal carryIn boolean.
     * @return Returns the encapsulated value of carryIn.
     */
    bool getCarryIn() const;

    /**
     * The Set Carry In function is a setter for the internal carryIn boolean.
     * @param cIn Corresponds with the boolean value that will become the carried in bit.
     */
    void setCarryIn(bool cIn);

    /**
     * The Get Sum function is a getter for the internal sum boolean.
     * @return Returns the encapsulated value of sum.
     */
    int getSum() const;

    /**
     * The Set Sum function is a setter for the internal sum boolean.
     * @param mySum Corresponds with the boolean value that represents the sum of the inputs given.
     */
    void setSum(int mySum);

    /**
     * The Get Carry Out function is a getter for the internal carryOut boolean.
     * @return Returns the encapsulated value of carryOut.
     */
    int getCarryOut();

    /**
     * The Set Carry Out function is a setter for the internal sum boolean.
     * @param mySum Corresponds with the boolean value that represents the sum of the inputs given.
     */
    void setCarryOut(int myCarryOut);

    /**
     * The answer function is to be interpreted as the result of the inputs given.
     * @return Returns a string representing the output of the inputs given.
     * For example with the inputs 0 and 1, the generated result would be "0001".
     */
    std::vector<bool> answer();
};

