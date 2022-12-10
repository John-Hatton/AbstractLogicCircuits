//
// Created by physiker on 12/08/2022.
//

#pragma once

#include <iostream>

/**
 * The Right Inverted And Gate class is Basically an XOR Gate, so we'll treat it as such.
 */
class RightInvertedAndGate {

private:

    /**
     * Represents the X input of the AND Gate
     */
    bool inputX{};

    /**
     * Represents the Y input of the AND Gate
     */
    bool inputY{};


    bool output{};

public:

    /**
     * Default Constructor
     */
    RightInvertedAndGate();

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
     * @return Returns a boolean representing the output of inputX AND inputY.
     */
    bool answer();
};
