#include <iostream>
#include <vector>
#pragma once
namespace numerical_calculus{
    class Integration{
        public:
            void setFunction(std::vector<float> coeficients, float degree);
            float trapezoidal(float x_min, float x_max, int n);
        private:
            float degree_ = 0;
            std::vector<float> coeficients_;
            std::vector<float> exponents_;
    };
}