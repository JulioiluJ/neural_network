//
// Created by USER on 24/06/2025.
//

#include "../include/TANHLayer.h"

TANHLayer::TANHLayer(int _size) : Layer(_size){}

std::vector<double> TANHLayer::activation_function (std::vector<double> input) {
    std::vector<double> output;
    for (double val : input)
        output.push_back(tanh_function(val));

    return output;
}

double TANHLayer::tanh_function(double x) {
    return std::tanh(x);
}