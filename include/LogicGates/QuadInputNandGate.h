//
// Created by snake on 12/11/2022.
//
#pragma once
class QuadInputNandGate {

private:

    bool inputA;

    bool inputB;

    bool inputC;

    bool inputD;

    bool output;


public:

    QuadInputNandGate();

    bool getInputA() const;

    void setInputA(bool inputA);

    bool getInputB() const;

    void setInputB(bool inputB);

    bool getInputC() const;

    void setInputC(bool inputC);

    bool getInputD() const;

    void setInputD(bool inputD);

    bool getOutput() const;

    void setOutput(bool output);

    bool answer();
};
