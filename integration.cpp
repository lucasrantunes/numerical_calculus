#include "integration.h"
#include <iostream>
namespace numerical_calculus{
    void Integration::setFunction(std::vector<float> coeficients, float degree){
        degree_ = degree;
        coeficients_ = coeficients;
    }
    float Integration::trapezoidal(float x_min, float x_max, int n){
        float section = 0.0;
        section = (x_max - x_min)/(2*n);

        for (int i = 0; i <= n; i++)
        {
            float S = 0;
        }
        
    }
}