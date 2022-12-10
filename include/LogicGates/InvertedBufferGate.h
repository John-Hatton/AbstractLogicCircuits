//
// Created by snake on 12/8/2022.
//

#pragma once


class InvertedBufferGate {

private:

    /**
     * Represents the input of the Buffer Gate.
     */
    bool input;

    bool output;

public:

    /**
     * Default Constructor
     */
    InvertedBufferGate();

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
     * The answer function returns the input given
     * @return Returns a boolean representing the output N input.
     */
    bool answer();

};