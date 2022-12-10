//
// Created by physiker on 12/08/2022.
//
#pragma once
#include <iostream>

/**
 * The Quad Input Nor Gate class is an abstraction for all things NOR Gate.
 */
class QuadInputNorGate {

private:

    /**
     * Represents the A input of the Quad Input NOR Gate.
     */
    bool inputA;

    /**
     * Represents the B input of the Quad Input NOR Gate.
     */
    bool inputB;

    /**
     * Represents the C input of the Quad Input NOR Gate.
     */
    bool inputC;

    /**
     * Represents the D input of the Quad Input NOR Gate.
     */
    bool inputD;

    bool output;

public:

    /**
     * Default Constructor
     */
    QuadInputNorGate();

    /**
     * The Get Input A function is a getter for the internal inputA boolean.
     * @return Returns the encapsulated value of inputA.
     */
    bool getInputA() const;

    /**
     * The Set Input A function is a setter for the internal inputA boolean.
     * @param inA Corresponds with the boolean value that's going into inputA.
     */
    void setInputA(bool inA);

    /**
     * The Get Input B function is a getter for the internal inputB boolean.
     * @return Returns the encapsulated value of inputY.
     */
    bool getInputB() const;

    /**
     * The Set Input B function is a setter for the internal inputB boolean.
     * @param inB Corresponds with the boolean value that's going into inputB.
     */
    void setInputB(bool inB);

    /**
     * The Get Input C function is a getter for the internal inputC boolean.
     * @return Returns the encapsulated value of inputC.
     */
    bool getInputC() const;

    /**
     * The Set Input C function is a setter for the internal inputC boolean.
     * @param inC Corresponds with the boolean value that's going into inputC.
     */
    void setInputC(bool inC);


    /**
     * The Get Input D function is a getter for the internal inputD boolean.
     * @return Returns the encapsulated value of inputC.
     */
    bool getInputD() const;

    /**
     * The Set Input D function is a setter for the internal inputD boolean.
     * @param inD Corresponds with the boolean value that's going into inputD.
     */
    void setInputD(bool inD);

    /**
     * The answer function is to be interpreted as the result of the inputs given.
     * @return Returns a boolean representing the output of inputA NOR inputB NOR inputC NOR inputD.
     */
    bool answer();
};
