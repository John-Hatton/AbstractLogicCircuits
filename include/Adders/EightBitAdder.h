//
// Created by physiker on 12/10/2022.
//
#pragma once

#include <vector>
#include "FullAdder.h"

/**
 * The Eight Bit Adder class represents eight Full Adders, chained to get to add two eight-bit binary numbers.
 */
class EightBitAdder {

private:
    /**
     * Represents the Carry In of the Eight Bit Adder.
     */
    bool carryIn;
    /**
     * Represents the X1 input of the Eight Bit Adder.
     */
    bool inputX1;

    /**
     * Represents the Y1 input of the Eight Bit Adder.
     */
    bool inputY1;

    /**
     * Represents the X2 input of the Eight Bit Adder.
     */
    bool inputX2;

    /**
     * Represents the Y2 input of the Eight Bit Adder.
     */
    bool inputY2;

    /**
     * Represents the X3 input of the Eight Bit Adder.
     */
    bool inputX3;

    /**
     * Represents the Y3 input of the Eight Bit Adder.
     */
    bool inputY3;

    /**
     * Represents the X4 input of the Eight Bit Adder.
     */
    bool inputX4;

    /**
     * Represents the Y4 input of the Eight Bit Adder.
     */
    bool inputY4;

    /**
 * Represents the X5 input of the Eight Bit Adder.
 */
    bool inputX5;

    /**
     * Represents the Y5 input of the Eight Bit Adder.
     */
    bool inputY5;

    /**
     * Represents the X6 input of the Eight Bit Adder.
     */
    bool inputX6;

    /**
     * Represents the Y6 input of the Eight Bit Adder.
     */
    bool inputY6;

    /**
     * Represents the X7 input of the Eight Bit Adder.
     */
    bool inputX7;

    /**
     * Represents the Y7 input of the Eight Bit Adder.
     */
    bool inputY7;

    /**
     * Represents the X8 input of the Eight Bit Adder.
     */
    bool inputX8;

    /**
     * Represents the Y8 input of the Eight Bit Adder.
     */
    bool inputY8;


    /**
     * Represents the First of Eight Full Adders, used to make an Eight Bit adder.
     */
    FullAdder* bitOneFullAdder;

    /**
     * Represents the Second of Eight Full Adders, used to make an Eight Bit adder.
     */
    FullAdder* bitTwoFullAdder;

    /**
     * Represents the Third of Eight Full Adders, used to make an Eight Bit adder.
     */
    FullAdder* bitThreeFullAdder;

    /**
     * Represents the Fourth of Eight Full Adders, used to make an Eight Bit adder.
     */
    FullAdder* bitFourFullAdder;

    /**
     * Represents the Fifth of Eight Full Adders, used to make an Eight Bit adder.
     */
    FullAdder* bitFiveFullAdder;

    /**
     * Represents the Sixth of Eight Full Adders, used to make an Eight Bit adder.
     */
    FullAdder* bitSixFullAdder;

    /**
     * Represents the Seventh of Eight Full Adders, used to make an Eight Bit adder.
     */
    FullAdder* bitSevenFullAdder;

    /**
     * Represents the Eighth of Eight Full Adders, used to make an Eight Bit adder.
     */
    FullAdder* bitEightFullAdder;


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
     * Represents Sum Five Output
     */
    bool sumFiveOut;
    /**
     * Represents Sum Six Output
     */
    bool sumSixOut;
    /**
     * Represents Sum Seven Output
     */
    bool sumSevenOut;
    /**
     * Represents Sum Eight Output
     */
    bool sumEightOut;

    /**
     * Represents the boolean value carried out of the Eight Bit Adder (the ninth bit).
     */
    bool carryOut;

public:

    /**
     * Default Constructor
     */
    EightBitAdder();

    /**
     * The Get Carry In function is a getter for the internal carryIn boolean.
     * @return Returns the encapsulated value of carryOut.
     */
    bool getCarryIn() const;
    /**
   * The Set carryIn function is a setter for the internal carryIn boolean.
   * @param myCarryIn Corresponds with the boolean value that's going out of carryIn.
   */
    void setCarryIn(bool myCarryIn);

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
     * The Get Input X5 function is a getter for the internal inputX5 boolean.
     * @return Returns the encapsulated value of inputX5.
     */
    bool getInputX5() const;

    /**
     * The Set Input X1 function is a setter for the internal inputX1 boolean.
     * @param inX5 Corresponds with the boolean value that's going into inputX5.
     */
    void setInputX5(bool inX5);

    /**
     * The Get Input Y5 function is a getter for the internal inputY5 boolean.
     * @return Returns the encapsulated value of inputY5.
     */
    bool getInputY5() const;

    /**
     * The Set Input Y5 function is a setter for the internal inputY5 boolean.
     * @param inY5 Corresponds with the boolean value that's going into inputY5.
     */
    void setInputY5(bool inY5);

    /**
     * The Get Input X6 function is a getter for the internal inputX6 boolean.
     * @return Returns the encapsulated value of inputX6.
     */
    bool getInputX6() const;

    /**
     * The Set Input X6 function is a setter for the internal inputX6 boolean.
     * @param inX6 Corresponds with the boolean value that's going into inputX6.
     */
    void setInputX6(bool inX6);

    /**
     * The Get Input Y6 function is a getter for the internal inputY6 boolean.
     * @return Returns the encapsulated value of inputY6.
     */
    bool getInputY6() const;

    /**
     * The Set Input Y6 function is a setter for the internal inputY6 boolean.
     * @param inY6 Corresponds with the boolean value that's going into inputY6.
     */
    void setInputY6(bool inY6);
    /**
     * The Get Input X7 function is a getter for the internal inputX7 boolean.
     * @return Returns the encapsulated value of inputX7.
     */
    bool getInputX7() const;
    /**
     * The Set Input X7 function is a setter for the internal inputX7 boolean.
     * @param inX7 Corresponds with the boolean value that's going into inputX7.
     */
    void setInputX7(bool inX7);
    /**
     * The Get Input Y7 function is a getter for the internal inputY7 boolean.
     * @return Returns the encapsulated value of inputY7.
     */
    bool getInputY7() const;
    /**
     * The Set Input Y7 function is a setter for the internal inputY7 boolean.
     * @param inY7 Corresponds with the boolean value that's going into inputY7.
     */
    void setInputY7(bool inY7);
    /**
     * The Get Input X8 function is a getter for the internal inputX8 boolean.
     * @return Returns the encapsulated value of inputX8.
     */
    bool getInputX8() const;
    /**
     * The Set Input X8 function is a setter for the internal inputX8 boolean.
     * @param inX8 Corresponds with the boolean value that's going into inputX8.
     */
    void setInputX8(bool inX8);
    /**
     * The Get Input Y8 function is a getter for the internal inputY8 boolean.
     * @return Returns the encapsulated value of inputY8.
     */
    bool getInputY8() const;
    /**
     * The Set Input Y8 function is a setter for the internal inputY8 boolean.
     * @param inY8 Corresponds with the boolean value that's going into inputY8.
     */
    void setInputY8(bool inY8);

    /**
     * The Get Bit One Full Adder is a getter for the internal Full Adder pointer variable
     * called bitOneFullAdder. This represents the first bit of the Eight Bits being added.
     * @return Returns a pointer to the internal first FullAdder of this class.
     */
    FullAdder* getBitOneFullAdder() const;

    /**
     * The Set Bit One Full Adder is a setter for the internal Full Adder pointer variable
     * called bitOneFullAdder. This represents the first bit of the Eight Bits being added.
     * @param fA1 Corresponds with the incoming full adder for bit one.
     */
    void setBitOneFullAdder(FullAdder* fA1);

    /**
     * The Get Bit Two Full Adder is a getter for the internal Full Adder pointer variable
     * called bitTwoFullAdder. This represents the second bit of the Eight Bits being added.
     * @return Returns a pointer to the internal second FullAdder of this class.
     */
    FullAdder* getBitTwoFullAdder() const;

    /**
     * The Set Bit Two Full Adder is a setter for the internal Full Adder pointer variable
     * called bitTwoFullAdder. This represents the second bit of the Eight Bits being added.
     * @param fA2 Corresponds with the incoming full adder for bit two.
     */
    void setBitTwoFullAdder(FullAdder* fA2);
    /**
     * The Get Bit Three Full Adder is a getter for the internal Full Adder pointer variable
     * called bitThreeFullAdder. This represents the third bit of the Eight Bits being added.
     * @return Returns a pointer to the internal third FullAdder of this class.
     */
    FullAdder *getBitThreeFullAdder() const;
    /**
     * The Set Bit Three Full Adder is a setter for the internal Full Adder pointer variable
     * called bitTwoFullAdder. This represents the third bit of the Eight Bits being added.
     * @param fA3 Corresponds with the incoming full adder for bit three.
     */
    void setBitThreeFullAdder(FullAdder* fA3);
    /**
     * The Get Bit Four Full Adder is a getter for the internal Full Adder pointer variable
     * called bitTwoFullAdder. This represents the fourth bit of the Eight Bits being added.
     * @return Returns a pointer to the internal fourth FullAdder of this class.
     */
    FullAdder *getBitFourFullAdder() const;
    /**
     * The Set Bit Four Full Adder is a setter for the internal Full Adder pointer variable
     * called bitFourFullAdder. This represents the fourth bit of the Eight Bits being added.
     * @param fA4 Corresponds with the incoming full adder for bit four.
     */
    void setBitFourFullAdder(FullAdder* fA4);

    /**
     * The Get Bit Five Full Adder is a getter for the internal Full Adder pointer variable
     * called bitFiveFullAdder. This represents the fifth bit of the Eight Bits being added.
     * @return Returns a pointer to the internal fifth FullAdder of this class.
     */
    FullAdder* getBitFiveFullAdder() const;

    /**
     * The Set Bit Five Full Adder is a setter for the internal Full Adder pointer variable
     * called bitFiveFullAdder. This represents the fifth bit of the Eight Bits being added.
     * @param fA5 Corresponds with the incoming full adder for bit five.
     */
    void setBitFiveFullAdder(FullAdder* fA5);

    /**
     * The Get Bit Six Full Adder is a getter for the internal Full Adder pointer variable
     * called bitSixFullAdder. This represents the sixth bit of the Eight Bits being added.
     * @return Returns a pointer to the internal sixth FullAdder of this class.
     */
    FullAdder* getBitSixFullAdder() const;

    /**
     * The Set Bit Six Full Adder is a setter for the internal Full Adder pointer variable
     * called bitSixFullAdder. This represents the sixth bit of the Eight Bits being added.
     * @param fA6 Corresponds with the incoming full adder for bit six.
     */
    void setBitSixFullAdder(FullAdder* fA6);
    /**
     * The Get Bit Seven Full Adder is a getter for the internal Full Adder pointer variable
     * called bitSevenFullAdder. This represents the seventh bit of the Eight Bits being added.
     * @return Returns a pointer to the internal seventh FullAdder of this class.
     */
    FullAdder *getBitSevenFullAdder() const;
    /**
     * The Set Bit Seven Full Adder is a setter for the internal Full Adder pointer variable
     * called bitSevenFullAdder. This represents the seventh bit of the Eight Bits being added.
     * @param fA7 Corresponds with the incoming full adder for bit seven.
     */
    void setBitSevenFullAdder(FullAdder* fA7);
    /**
     * The Get Bit Eight Full Adder is a getter for the internal Full Adder pointer variable
     * called bitEightFullAdder. This represents the eighth bit of the Eight Bits being added.
     * @return Returns a pointer to the internal eighth FullAdder of this class.
     */
    FullAdder *getBitEightFullAdder() const;
    /**
     * The Set Bit Eight Full Adder is a setter for the internal Full Adder pointer variable
     * called bitEightFullAdder. This represents the eighth bit of the Eight Bits being added.
     * @param fA8 Corresponds with the incoming full adder for bit eight.
     */
    void setBitEightFullAdder(FullAdder* fA8);

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
     * The Get Sum Five Out function is a getter for the internal SumFiveOut boolean.
     * @return Returns the encapsulated value of sumFiveOut.
     */
    bool getSumFiveOut() const;
    /**
     * The Set sumOneOut function is a setter for the internal sumFiveOut boolean.
     * @param sum5Out Corresponds with the boolean value that's going into sumFiveOut.
     */
    void setSumFiveOut(bool sum5Out);
    /**
     * The Get Sum Six Out function is a getter for the internal SumSixOut boolean.
     * @return Returns the encapsulated value of sumSixOut.
     */
    bool getSumSixOut() const;
    /**
     * The Set sumSixOut function is a setter for the internal sumSixOut boolean.
     * @param sum6Out Corresponds with the boolean value that's going into sumSixOut.
     */
    void setSumSixOut(bool sum6Out);
    /**
     * The Get Sum Seven Out function is a getter for the internal SumSevenOut boolean.
     * @return Returns the encapsulated value of sumSevenOut.
     */
    bool getSumSevenOut() const;
    /**
     * The Set sumSevenOut function is a setter for the internal sumSevenOut boolean.
     * @param sum7Out Corresponds with the boolean value that's going into sumSevenOut.
     */
    void setSumSevenOut(bool sum7Out);
    /**
     * The Get Sum Eight Out function is a getter for the internal SumEightOut boolean.
     * @return Returns the encapsulated value of sumEightOut.
     */
    bool getSumEightOut() const;
    /**
    * The Set sumEightOut function is a setter for the internal sumEightOut boolean.
    * @param sum8Out Corresponds with the boolean value that's going into sumEightOut.
    */
    void setSumEightOut(bool sum8Out);


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