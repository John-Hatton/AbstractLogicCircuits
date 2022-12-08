//
// Created by physiker on 11/19/2022.
//
#pragma once
#include <iostream>

/**
 * The Nor Gate class is an abstraction for all things NOR Gate.
 */
class NorGate {

private:

    /**
     * Represents the X input of the NOR Gate.
     */
    bool inputX;

    /**
     * Represents the Y input of the NOR Gate.
     */
    bool inputY;

    bool output;

public:

    /**
     * Default Constructor
     */
    NorGate();

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
     * The answer function is to be interpreted as the result of the inputs given.
     * @return Returns a boolean representing the output of inputX NOR inputY.
     */
    bool answer();
};
