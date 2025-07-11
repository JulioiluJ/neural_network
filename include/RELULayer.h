//
// Created by USER on 24/06/2025.
//

#ifndef RELULAYER_H
#define RELULAYER_H

#include "Layer.h"

class RELULayer : public Layer {
private:
    double relu_function(double x);
public:
    RELULayer(int _size);
    std::vector<double> activation_function (std::vector<double> input) override;
};



#endif //RELULAYER_H
