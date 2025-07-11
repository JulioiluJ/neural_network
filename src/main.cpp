#include <iostream>
#include "../include/NeuralNetwork.h"
#include "../include/SIGMLayer.h"
#include "../include/TANHLayer.h"
#include "../include/RELULayer.h"

using namespace std;

int main() {
    NeuralNetwork net(4, 7, "RELU");

    net.add_layer(new TANHLayer(8));
    net.add_layer(new SIGMLayer(5));
    net.add_layer(new RELULayer(2));
    net.add_layer(new TANHLayer(8));
    net.add_layer(new SIGMLayer(5));
    net.add_layer(new RELULayer(2));

    vector<double> input = {10 ,20, 38, 56};

    net.predict(input);

    net.printPredict();

    return 0;
}