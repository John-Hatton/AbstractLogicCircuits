//
// Created by physiker on 11/20/2022.
//
#pragma once

#include <vector>
#include "FullAdder.h"

/**
 * The Four Bit Adder class represents four Full Adders, chained to get to add two four-bit binary numbers.
 */
class FourBitAdder {

private:
    /**
     * Represents the X1 input of the Four Bit Adder.
     */
    bool inputX1;

    /**
     * Represents the Y1 input of the Four Bit Adder.
     */
    bool inputY1;

    /**
     * Represents the X2 input of the Four Bit Adder.
     */
    bool inputX2;

    /**
     * Represents the Y2 input of the Four Bit Adder.
     */
    bool inputY2;

    /**
     * Represents the X3 input of the Four Bit Adder.
     */
    bool inputX3;

    /**
     * Represents the Y3 input of the Four Bit Adder.
     */
    bool inputY3;

    /**
     * Represents the X4 input of the Four Bit Adder.
     */
    bool inputX4;

    /**
     * Represents the Y4 input of the Four Bit Adder.
     */
    bool inputY4;


    /**
     * Represents the First of Four Full Adders, used to make a Four Bit adder.
     */
    FullAdder* bitOneFullAdder;

    /**
     * Represents the Second of Four Full Adders, used to make a Four Bit adder.
     */
    FullAdder* bitTwoFullAdder;

    /**
     * Represents the Third of Four Full Adders, used to make a Four Bit adder.
     */
    FullAdder* bitThreeFullAdder;

    /**
     * Represents the Fourth of Four Full Adders, used to make a Four Bit adder.
     */
    FullAdder* bitFourFullAdder;

    /**
     * Represents Sum One Output
     */
    bool sumOneOut;
    /**
     * Represents Sum Two Output
     */
    bool sumTwoOut;
    /**
     * Represents Sum Three Output
     */
    bool sumThreeOut;
    /**
     * Represents Sum Four Output
     */
    bool sumFourOut;

    /**
     * Represents the boolean value carried out of the Four Bit Adder (the fifth bit).
     */
    bool carryOut;
public:


public:

    /**
     * Default Constructor
     */
    FourBitAdder();

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
     * The Get Input X3 function is a getter for the internal inputX3 boolean.
     * @return Returns the encapsulated value of inputX3.
     */
    bool getInputX3() const;
    /**
     * The Set Input X3 function is a setter for the internal inputX3 boolean.
     * @param inX3 Corresponds with the boolean value that's going into inputX3.
     */
    void setInputX3(bool inX3);
    /**
     * The Get Input Y3 function is a getter for the internal inputY3 boolean.
     * @return Returns the encapsulated value of inputY3.
     */
    bool getInputY3() const;
    /**
     * The Set Input Y3 function is a setter for the internal inputY3 boolean.
     * @param inY3 Corresponds with the boolean value that's going into inputY3.
     */
    void setInputY3(bool inY3);
    /**
     * The Get Input X4 function is a getter for the internal inputX4 boolean.
     * @return Returns the encapsulated value of inputX4.
     */
    bool getInputX4() const;
    /**
     * The Set Input X4 function is a setter for the internal inputX4 boolean.
     * @param inX4 Corresponds with the boolean value that's going into inputX4.
     */
    void setInputX4(bool inX4);
    /**
     * The Get Input Y4 function is a getter for the internal inputY4 boolean.
     * @return Returns the encapsulated value of inputY4.
     */
    bool getInputY4() const;
    /**
     * The Set Input Y4 function is a setter for the internal inputY4 boolean.
     * @param inY4 Corresponds with the boolean value that's going into inputY4.
     */
    void setInputY4(bool inY4);

    /**
     * The Get Bit One Full Adder is a getter for the internal Full Adder pointer variable
     * called bitOneFullAdder. This represents the first bit of the Four Bits being added.
     * @return Returns a pointer to the internal first FullAdder of this class.
     */
    FullAdder* getBitOneFullAdder() const;

    /**
     * The Set Bit One Full Adder is a setter for the internal Full Adder pointer variable
     * called bitOneFullAdder. This represents the first bit of the Four Bits being added.
     * @param fA1 Corresponds with the incoming full adder for bit one.
     */
    void setBitOneFullAdder(FullAdder* fA1);

    /**
     * The Get Bit Two Full Adder is a getter for the internal Full Adder pointer variable
     * called bitTwoFullAdder. This represents the second bit of the Four Bits being added.
     * @return Returns a pointer to the internal second FullAdder of this class.
     */
    FullAdder* getBitTwoFullAdder() const;

    /**
     * The Set Bit Two Full Adder is a setter for the internal Full Adder pointer variable
     * called bitTwoFullAdder. This represents the second bit of the Four Bits being added.
     * @param fA2 Corresponds with the incoming full adder for bit two.
     */
    void setBitTwoFullAdder(FullAdder* fA2);
    /**
     * The Get Bit Three Full Adder is a getter for the internal Full Adder pointer variable
     * called bitThreeFullAdder. This represents the third bit of the Four Bits being added.
     * @return Returns a pointer to the internal third FullAdder of this class.
     */
    FullAdder *getBitThreeFullAdder() const;
    /**
     * The Set Bit Three Full Adder is a setter for the internal Full Adder pointer variable
     * called bitTwoFullAdder. This represents the third bit of the Four Bits being added.
     * @param fA3 Corresponds with the incoming full adder for bit three.
     */
    void setBitThreeFullAdder(FullAdder* fA3);
    /**
     * The Get Bit Four Full Adder is a getter for the internal Full Adder pointer variable
     * called bitTwoFullAdder. This represents the fourth bit of the Four Bits being added.
     * @return Returns a pointer to the internal fourth FullAdder of this class.
     */
    FullAdder *getBitFourFullAdder() const;
    /**
     * The Set Bit Four Full Adder is a setter for the internal Full Adder pointer variable
     * called bitFourFullAdder. This represents the fourth bit of the Four Bits being added.
     * @param fA4 Corresponds with the incoming full adder for bit four.
     */
    void setBitFourFullAdder(FullAdder* fA4);
    /**
     * The Get Sum One Out function is a getter for the internal SumOneOut boolean.
     * @return Returns the encapsulated value of sumOneOut.
     */
    bool getSumOneOut() const;
    /**
     * The Set sumOneOut function is a setter for the internal sumOneOut boolean.
     * @param sum1Out Corresponds with the boolean value that's going into sumOneOut.
     */
    void setSumOneOut(bool sum1Out);
    /**
     * The Get Sum Two Out function is a getter for the internal SumTwoOut boolean.
     * @return Returns the encapsulated value of sumTwoOut.
     */
    bool getSumTwoOut() const;
    /**
     * The Set sumTwoOut function is a setter for the internal sumTwoOut boolean.
     * @param sum2Out Corresponds with the boolean value that's going into sumTwoOut.
     */
    void setSumTwoOut(bool sum2Out);
    /**
     * The Get Sum Three Out function is a getter for the internal SumThreeOut boolean.
     * @return Returns the encapsulated value of sumThreeOut.
     */
    bool getSumThreeOut() const;
    /**
     * The Set sumThreeOut function is a setter for the internal sumThreeOut boolean.
     * @param sum3Out Corresponds with the boolean value that's going into sumThreeOut.
     */
    void setSumThreeOut(bool sum3Out);
    /**
     * The Get Sum Four Out function is a getter for the internal SumFourOut boolean.
     * @return Returns the encapsulated value of sumFourOut.
     */
    bool getSumFourOut() const;
    /**
    * The Set sumFourOut function is a setter for the internal sumFourOut boolean.
    * @param sum4Out Corresponds with the boolean value that's going into sumFourOut.
    */
    void setSumFourOut(bool sum4Out);
    /**
     * The Get Carry Out function is a getter for the internal carryOut boolean.
     * @return Returns the encapsulated value of carryOut.
     */
    bool getCarryOut() const;
    /**
   * The Set carryOut function is a setter for the internal carryOut boolean.
   * @param myCarryOut Corresponds with the boolean value that's going into carryOut.
   */
    void setCarryOut(bool myCarryOut);

    /**
     * The answer function is to be interpreted as the result of the inputs given.
     * @return Returns a string representing the output of the inputs given.
     * For example with the inputs 01 and 11, the generated result would be "0 0100".
     * See the test cases in the test folder for more examples of this.
     */
    std::vector<bool> answer();

};