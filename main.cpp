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
    numerical_calculus::Integration I(coeficients, degree);
    std::cout << "Put the interval x_min and x_max: " << std::endl;
    int x_min; std::cin >> x_min;
    int x_max; std::cin >> x_max;

    std::cout << "Put the number of partitions: " << std::endl;
    int n; std::cin >> n;

    float integral = 0;
    integral = I.trapezoidal(x_min,x_max,n);
    std::cout << "Result: "<< integral << std::endl;
}