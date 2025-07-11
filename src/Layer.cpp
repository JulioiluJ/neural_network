//
// Created by USER on 24/06/2025.
//

#include "../include/Layer.h"

Layer::Layer(int _size) : size(_size),
                          biases(_size, 0.0) {}

std::vector<double> Layer::weighted_sum (std::vector<double> input) {
    std::vector<double> output(size, 0.0);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < input.size(); j++) {
            output[i] += weights[i][j] * input[j];
        }
        output[i] += biases[i];
    }

    return output;
}

std::vector<double> Layer::forward_propagation(std::vector<double> input) {
    this->generate_weightsandbiases(input);
    std::vector<double> output = this->weighted_sum(input);
    output = this->activation_function(output);

    return output;
}

void Layer::generate_weightsandbiases (std::vector<double> input) {
    srand(time(0));
    weights.resize(size, std::vector<double>(input.size(), 0.0));
    for (int i = 0; i < size; i++){
        double rbiases = static_cast<double>(rand()) / RAND_MAX;
        biases[i] = rbiases;
        for (int j = 0; j < input.size(); j++) {
            double rweights = static_cast<double>(rand()) / RAND_MAX * 2 - 1;
            weights[i][j] = rweights;
        }
    }
}

Layer::~Layer() {}