//
// Created by physiker on 12/7/2022.
//

#pragma once
class NotGate {

private:

    /**
     * Represents the input of the NOT Gate.
     */
    bool input;

    bool output;

public:

    /**
     * Default Constructor
     */
    NotGate();

    /**
     * The Get Input function is a getter for the internal input boolean.
     * @return Returns the encapsulated value of input.
     */
    bool getInput() const;

    /**
     * The Set Input function is a setter for the internal input boolean.
     * @param in Corresponds with the boolean value that's going into input.
     */
    void setInput(bool in);

    /**
     * The answer function is to be interpreted as the opposite of the input
     * @return Returns a boolean representing the output NOT input.
     */
    bool answer();
};
