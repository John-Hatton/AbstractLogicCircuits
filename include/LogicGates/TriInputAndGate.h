//
// Created by physiker on 12/08/2022.
//

#pragma once

#include <iostream>

/**
 * The And Gate class is an abstraction for all things AND Gate.
 */
class TriInputAndGate {

private:

    /**
     * Represents the X input of the AND Gate
     */
    bool inputX;

    /**
     * Represents the Y input of the AND Gate
     */
    bool inputY;

    /**
     * Represents the Z input of the AND Gate
     */
    bool inputZ;


    bool output;

public:

    /**
     * Default Constructor
     */
    TriInputAndGate();

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
     * The Get Input Z function is a getter for the internal inputZ boolean.
     * @return Returns the encapsulated value of inputZ.
     */
    bool getInputZ() const;

    /**
     * The Set Input Z function is a setter for the internal inputZ boolean.
     * @param inZ Corresponds with the boolean value that's going into inputZ.
     */
    void setInputZ(bool inZ);

    /**
     * The answer function is to be interpreted as the result of the inputs given.
     * @return Returns a boolean representing the output of inputX AND inputY AND inputZ.
     */
    bool answer();
};
