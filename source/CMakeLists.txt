
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

        Adders/FourBitAdder.cpp ../include/Adders/FourBitAdder.h Adders/EightBitAdder.cpp ../include/Adders/EightBitAdder.h Adders/SixteenBitAdder.cpp ../include/Adders/SixteenBitAdder.h)