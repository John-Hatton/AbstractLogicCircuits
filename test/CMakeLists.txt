project(Google_Tests)

# adding the Google_Tests_run target
add_executable(AbstractCircuits_Tests

        LogicGates/AndGate_tests.cpp
        LogicGates/OrGate_tests.cpp
        LogicGates/XorGate_tests.cpp
        LogicGates/NotGate_tests.cpp
        LogicGates/BufferGate_tests.cpp
        LogicGates/NandGate_tests.cpp
        LogicGates/NorGate_tests.cpp
        LogicGates/TriInputAndGate_tests.cpp
        LogicGates/QuadInputNorGate_tests.cpp
        LogicGates/InvertedBufferGate_tests.cpp


        Adders/HalfAdder_tests.cpp
        Adders/HalfAdder_tests.cpp
        Adders/FullAdder_tests.cpp
        Adders/TwoBitAdder_tests.cpp

        Memory/D_FlipFlop_tests.cpp
        Memory/FourBitRAM_tests.cpp

        Adders/FourBitAdder_tests.cpp Adders/EightBitAdder_tests.cpp Adders/SixteenBitAdder_tests.cpp Adders/ThirtyTwoBitAdder_tests.cpp)

target_link_libraries(AbstractCircuits_Tests AbstractCircuits gtest gtest_main)