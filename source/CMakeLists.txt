
add_library(AbstractCircuits

        LogicGates/AndGate.cpp
        LogicGates/OrGate.cpp
        LogicGates/XorGate.cpp
        LogicGates/NotGate.cpp
        LogicGates/NorGate.cpp
        LogicGates/BufferGate.cpp
        LogicGates/NandGate.cpp
        LogicGates/TriInputAndGate.cpp
        LogicGates/QuadInputNorGate.cpp
        LogicGates/InvertedBufferGate.cpp
        LogicGates/RightInvertedAndGate.cpp

        Adders/HalfAdder.cpp
        Adders/FullAdder.cpp
        Adders/TwoBitAdder.cpp

        Memory/D_FlipFlop.cpp
        Memory/FourBitRAM.cpp

        )