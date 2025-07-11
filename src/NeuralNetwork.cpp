//
// Created by USER on 24/06/2025.
//

#include "../include/NeuralNetwork.h"
#include "../include/SIGMLayer.h"
#include "../include/RELULayer.h"
#include "../include/TANHLayer.h"

NeuralNetwork::NeuralNetwork(int in_size, int out_size, std::string _output_function_type) : input_size(in_size),
    output_size(out_size), output_function_type(_output_function_type) {}

void NeuralNetwork::add_layer(Layer* layer) { layers.push_back(layer); }

void NeuralNetwork::predict(std::vector<double> input) {
    NNinput = input;
    std::vector<double> output= input;

    add_output_layer();

    for (Layer* layer : layers)
        output = layer->forward_propagation(output);

    NNoutput = output;
}

void NeuralNetwork::add_output_layer() {
    if (output_function_type == "SIGM") {
        add_layer(new SIGMLayer(output_size));
    } else if (output_function_type == "RELU") {
        add_layer(new RELULayer(output_size));
    } else if (output_function_type == "TANH") {
        add_layer(new TANHLayer(output_size));
    }
}

void NeuralNetwork::printPredict() const {
    for (int i = 0; i < this->get_o_size(); i++) {
        std::cout << "Salida (" << i << "): " << NNoutput[i] << std::endl;
    }
}

NeuralNetwork::~NeuralNetwork() {}