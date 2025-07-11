//
// Created by USER on 24/06/2025.
//

#ifndef SIGMLAYER_H
#define SIGMLAYER_H

#include "Layer.h"

class SIGMLayer : public Layer {
private:
    double sigmoid_function(double x);
public:
    SIGMLayer(int _size);
    std::vector<double> activation_function (std::vector<double> input) override;
};



#endif //SIGMLAYER_H