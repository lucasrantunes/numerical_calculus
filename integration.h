#include <iostream>
#include <vector>
#pragma once
namespace numerical_calculus{
    class Integration{
        public:
            Integration(std::vector<float> coeficients, float degree);
            float trapezoidal(float x_min_, float x_max_, int n_);
        private:
            float degree_ = 0;
            std::vector<float> coeficients_;
            std::vector<float> exponents_;
            float function(float x);
    };
}