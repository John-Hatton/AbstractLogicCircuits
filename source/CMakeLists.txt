
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


        Decoders/ThreeToEightLineDecoder.cpp ../include/Decoders/ThreeToEightLineDecoder.h LogicGates/QuadInputNandGate.cpp ../include/LogicGates/QuadInputNandGate.h LogicGates/TriInvertedAndGate.cpp ../include/LogicGates/TriInvertedAndGate.h Decoders/TwoToFourLineDecoder.cpp ../include/Decoders/TwoToFourLineDecoder.h Decoders/FourToSixteenLineDecoder.cpp ../include/Decoders/FourToSixteenLineDecoder.h Decoders/TwoToFourDecoder_without_Enable.cpp ../include/Decoders/TwoToFourDecoder_without_Enable.h)