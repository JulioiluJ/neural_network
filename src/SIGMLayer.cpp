//
// Created by USER on 24/06/2025.
//

#include "../include/SIGMLayer.h"

SIGMLayer::SIGMLayer(int _size) : Layer(_size){}

std::vector<double> SIGMLayer::activation_function (std::vector<double> input) {
    std::vector<double> output;
    for (double val : input)
        output.push_back(sigmoid_function(val));

    return output;
}

double SIGMLayer::sigmoid_function(double x) {
    return 1 / (1 + std::exp(-x));
}