//
// Created by USER on 24/06/2025.
//

#include "../include/RELULayer.h"

RELULayer::RELULayer(int _size) : Layer(_size){}

std::vector<double> RELULayer::activation_function (std::vector<double> input) {
    std::vector<double> output;
    for (double val : input)
        output.push_back(relu_function(val));

    return output;
}

double RELULayer::relu_function(double x) {
    return std::max(0.0, x);
}