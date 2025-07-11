//
// Created by USER on 24/06/2025.
//

#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

#include "Layer.h"

class NeuralNetwork {
private:
    int input_size;
    int output_size;
    std::vector<Layer*> layers;
    std::vector<double> NNinput;
    std::vector<double> NNoutput;
    std::string output_function_type;
    void add_output_layer();

public:
    NeuralNetwork(int in_size, int out_size, std::string output_function_type);
    ~NeuralNetwork();
    void add_layer(Layer* layer);
    void predict(std::vector<double> input);

    int get_i_size() const {return input_size;}
    int get_o_size() const {return output_size;}

    void printPredict() const;
};



#endif //NEURALNETWORK_H
