//
// Created by physiker on 11/19/2022.
//
#pragma once

#include "LogicGates/XorGate.h"
#include "LogicGates/AndGate.h"

/**
 * The Half Adder class is an abstraction for a half adder circuit. The internal design uses one XOR gate, and one
 * AND gate.
 */
class HalfAdder {

private:

    /**
     * Represents the X input of the Half Adder. (One Bit)
     */
    bool inputX{};

    /**
     * Represents the Y input of the Half Adder. (One Bit)
     */
    bool inputY{};

    /**
     * Corresponds with the sum of the two inputs given.
     */
    bool sum{};

    /**
     * Represents the boolean value carried out of the Half Adder.
     */
    bool carryOut{};

public:

    /**
     * Default Constructor
     */
    HalfAdder();

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
    int getCarryOut() const;

    /**
     * The Set Carry Out function is a setter for the internal sum boolean.
     * @param mySum Corresponds with the boolean value that represents the sum of the inputs given.
     */
    void setCarryOut(int myCarryOut);

    /**
     * The answer function is to be interpreted as the result of the inputs given.
     * @return Returns a string representing the output of the inputs given.
     * For example with the inputs 0 and 1, the generated result would be "01".
     */
    std::string answer();
};

