cmake_minimum_required(VERSION 3.31)
project(NeuralNetwork)

set(CMAKE_CXX_STANDARD 20)

add_executable(NeuralNetwork src/main.cpp
        src/NeuralNetwork.cpp
        include/NeuralNetwork.h
        src/Layer.cpp
        include/Layer.h
        src/SIGMLayer.cpp
        include/SIGMLayer.h
        src/TANHLayer.cpp
        include/TANHLayer.h
        src/RELULayer.cpp
        include/RELULayer.h)
