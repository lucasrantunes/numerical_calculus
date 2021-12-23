#include <iostream>
#include <vector>
#pragma once
namespace numerical_calculus{
    class Integration{
        public:
            void setFunction(std::string function);
            float trapezoidal(float x_min, float x_max, int n);
        private:
            std::vector<float> coeficients_;
            std::vector<float> exponents_;
    };
}