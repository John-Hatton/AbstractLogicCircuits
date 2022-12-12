//
// Created by snake on 12/11/2022.
//
#pragma once

class FiveInputNandGate {

private:

    bool inputI;

    bool inputII;

    bool inputIII;

    bool inputIV;

    bool inputV;


    // See NAND Truth table.
    // Only outputs a Zero if all are True.

    bool output;

public:

    FiveInputNandGate();

    bool getInputI() const;

    void setInputI(bool inputI);

    bool getInputIi() const;

    void setInputIi(bool inputIi);

    bool getInputIii() const;

    void setInputIii(bool inputIii);

    bool getInputIv() const;

    void setInputIv(bool inputIv);

    bool getInputV() const;

    void setInputV(bool inputV);

    bool getOutput() const;

    void setOutput(bool output);


    bool answer();



};

