//
// Created by USER on 24/06/2025.
//

#ifndef TANHLAYER_H
#define TANHLAYER_H

#include "Layer.h"

class TANHLayer : public Layer {
private:
    double tanh_function(double x);
public:
    TANHLayer(int _size);
    std::vector<double> activation_function (std::vector<double> input) override;
};



#endif //TANHLAYER_H
