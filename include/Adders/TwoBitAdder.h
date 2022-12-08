//
// Created by physiker on 11/20/2022.
//
#pragma once

#include "FullAdder.h"

/**
 * The Two Bit Adder class represents two Full Adders, chained to get to add two two-bit binary numbers.
 */
class TwoBitAdder {

private:
    /**
     * Represents the X1 input of the Two Bit Adder. (One Bit)
     */
    bool inputX1;

    /**
     * Represents the Y1 input of the Two Bit Adder. (One Bit)
     */
    bool inputY1;

    /**
     * Represents the X2 input of the Two Bit Adder. (One Bit)
     */
    bool inputX2;

    /**
     * Represents the Y2 input of the Two Bit Adder. (One Bit)
     */
    bool inputY2;

    /**
     * Represents the boolean value carried out of the Two Bit Adder (the third bit).
     */
    bool carryOut;

    /**
     * Represents the First of Two Full Adders, used to make a two bit adder.
     */
    FullAdder* bitOneFullAdder;

    /**
     * Represents the Second of Two Full Adders, used to make a two bit adder.
     */
    FullAdder* bitTwoFullAdder;

public:

    /**
     * Default Constructor
     */
    TwoBitAdder();

    /**
     * The Get Input X1 function is a getter for the internal inputX1 boolean.
     * @return Returns the encapsulated value of inputX1.
     */
    bool getInputX1() const;

    /**
     * The Set Input X1 function is a setter for the internal inputX1 boolean.
     * @param inX1 Corresponds with the boolean value that's going into inputX1.
     */
    void setInputX1(bool inX1);

    /**
     * The Get Input Y1 function is a getter for the internal inputY1 boolean.
     * @return Returns the encapsulated value of inputY1.
     */
    bool getInputY1() const;

    /**
     * The Set Input Y1 function is a setter for the internal inputY1 boolean.
     * @param inY1 Corresponds with the boolean value that's going into inputY1.
     */
    void setInputY1(bool inY1);

    /**
     * The Get Input X2 function is a getter for the internal inputX2 boolean.
     * @return Returns the encapsulated value of inputX2.
     */
    bool getInputX2() const;

    /**
     * The Set Input X2 function is a setter for the internal inputX2 boolean.
     * @param inX2 Corresponds with the boolean value that's going into inputX2.
     */
    void setInputX2(bool inX2);

    /**
     * The Get Input Y2 function is a getter for the internal inputY2 boolean.
     * @return Returns the encapsulated value of inputY2.
     */
    bool getInputY2() const;

    /**
     * The Set Input Y2 function is a setter for the internal inputY2 boolean.
     * @param inY2 Corresponds with the boolean value that's going into inputY2.
     */
    void setInputY2(bool inY2);

    /**
     * The Get Bit One Full Adder is a getter for the internal Full Adder pointer variable
     * called bitOneFullAdder. This represents the first bit of the two bits being added.
     * @return Returns a pointer to the internal first FullAdder of this class.
     */
    FullAdder* getBitOneFullAdder() const;

    /**
     * The Set Bit One Full Adder is a setter for the internal Full Adder pointer variable
     * called bitOneFullAdder. This represents the first bit of the two bits being added.
     * @param fA1 Corresponds with the incoming full adder for bit one.
     */
    void setBitOneFullAdder(FullAdder* fA1);

    /**
     * The Get Bit Two Full Adder is a getter for the internal Full Adder pointer variable
     * called bitTwoFullAdder. This represents the second bit of the two bits being added.
     * @return Returns a pointer to the internal second FullAdder of this class.
     */
    FullAdder* getBitTwoFullAdder() const;

    /**
     * The Set Bit Two Full Adder is a setter for the internal Full Adder pointer variable
     * called bitTwoFullAdder. This represents the first bit of the two bits being added.
     * @param fA2 Corresponds with the incoming full adder for bit two.
     */
    void setBitTwoFullAdder(FullAdder* fA2);

    /**
     * The answer function is to be interpreted as the result of the inputs given.
     * @return Returns a string representing the output of the inputs given.
     * For example with the inputs 01 and 11, the generated result would be "0 0100".
     * See the test cases in the test folder for more examples of this.
     */
    std::string answer();

};