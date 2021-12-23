#include <iostream>
#include "integration.h"
int main(){
    std::cout << "Put the function degree: " << std::endl;
    int degree; std::cin >> degree;
    std::cout << "Put the function coeficients, starting with the highest: " << std::endl;
    std::vector<float> coeficients; 
    for (int i = 0; i <= degree; i++)
    {
        float coeficient = 0;
        std::cin >> coeficient;
        coeficients.push_back(coeficient);
    }

    numerical_calculus::Integration I;
    I.setFunction(coeficients, degree);
    I.trapezoidal(1,3,5);
}