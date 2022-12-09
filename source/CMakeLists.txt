
add_library(AbstractCircuits

        LogicGates/AndGate.cpp
        LogicGates/OrGate.cpp
        LogicGates/XorGate.cpp
        Adders/HalfAdder.cpp
        Adders/FullAdder.cpp
        Adders/TwoBitAdder.cpp LogicGates/NotGate.cpp ../include/LogicGates/NotGate.h LogicGates/BufferGate.cpp ../include/LogicGates/BufferGate.h LogicGates/NandGate.cpp ../include/LogicGates/NandGate.h Memory/D_FlipFlop.cpp ../include/Memory/D_FlipFlop.h LogicGates/NorGate.cpp ../include/LogicGates/NorGate.h Memory/FourBitRAM.cpp ../include/Memory/FourBitRAM.h ../include/LogicGates/TriInputAndGate.cpp ../include/LogicGates/TriInputAndGate.h LogicGates/QuadInputNorGate.cpp LogicGates/QuadInputNorGate.h LogicGates/InvertedBufferGate.cpp ../include/LogicGates/InvertedBufferGate.h LogicGates/RightInvertedAndGate.cpp LogicGates/RightInvertedAndGate.h)