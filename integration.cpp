#include "integration.h"
#include <iostream>
#include <cmath>
namespace numerical_calculus{
    // Constructor
    Integration::Integration(std::vector<float> coeficients, float degree){
        degree_ = degree;
        coeficients_ = coeficients;
    }

    float Integration::function(float x){
        float y = 0.0;
        for (int i = 0; i <= degree_; i++)
        {
            y = y + coeficients_[i]*std::pow(x, degree_ - i);
        }
        return y;
    }

    float Integration::trapezoidal(float x_min_, float x_max_, int n_){
        float h = 0.0;
        h = (x_max_ - x_min_)/(n_);
        
        std::vector<float> S;
        float x = x_min_;
        for (int i = 0; i <= n_; i++)
        {
            if (i==0 || i==n_)
            {
                S.push_back(function(x));
            }else{
                S.push_back(2*function(x));
            }
            x = x+h;
        }
        float sum_S = 0;
        for (int i = 0; i <= n_; i++)
        {
            sum_S = sum_S + S[i];
        }
        
        float integral = 0;
        integral = h/2*sum_S;
        return integral;
    }
}