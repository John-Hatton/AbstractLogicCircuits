
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

        Adders/FourBitAdder.cpp
        Adders/EightBitAdder.cpp
        Adders/SixteenBitAdder.cpp
        Adders/ThirtyTwoBitAdder.cpp
        LogicGates/TriInputNandGate.cpp


        Decoders/ThreeToEightLineDecoder.cpp
        LogicGates/QuadInputNandGate.cpp
        LogicGates/TriInvertedAndGate.cpp
        Decoders/TwoToFourLineDecoder.cpp
        Decoders/TwoToFourDecoder_without_Enable.cpp
        Decoders/FourToSixteenLineDecoder.cpp
        LogicGates/FiveInputNandGate.cpp
        )