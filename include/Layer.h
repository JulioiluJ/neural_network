//
// Created by USER on 24/06/2025.
//

#ifndef LAYER_H
#define LAYER_H

#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>

class Layer {
protected:
    int size;
    std::vector<std::vector<double>> weights;
    std::vector<double> biases;
    virtual std::vector<double> activation_function (std::vector<double> input) = 0;
    std::vector<double> weighted_sum (std::vector<double> input);
    void generate_weightsandbiases (std::vector<double> input);
public:
    Layer(int _size);
    std::vector<double> forward_propagation(std::vector<double> input);
    virtual ~Layer();
};



#endif //LAYER_H
