#include "integration.h"
#include <iostream>
#include <cmath>
namespace numerical_calculus{
    //  Constructor: create the instance of our class.
    Integration::Integration(std::vector<float> coeficients, float degree){
        degree_ = degree;
        coeficients_ = coeficients;
    }

    //  Get f(x) values
    float Integration::function(float x){
        float y = 0;
        for (int i = 0; i <= degree_; i++)
        {
            y = y + coeficients_[i]*std::pow(x, degree_ - i);
        }
        return y;
    }

    // Trapezoidal rule for integration
    float Integration::trapezoidal(float x_min_, float x_max_, int n_){
        float h = 0.0;
        h = (x_max_ - x_min_)/(n_);
        
        float x = x_min_;
        float sum = 0;
        for (int i = 0; i <= n_; i++)
        {
            if (i==0 || i==n_)
            {
                sum = sum + function(x);
            }else{
                sum = sum + 2*function(x);
            }
            x = x+h;
        }
        
        float integral = h/2*sum;
        return integral;
    }
}