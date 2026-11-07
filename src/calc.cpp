#include <iostream>
#include "matrix.hpp"
#include <array>
double perceptron()
{
    Matrix Dataset = data();
    double bias;
    double sum = 0;

    array<double, 5> weights{1.0, 1.0, 1.0, 1.0, 1.0};
    for (int i = 0; i < 5; i++)
    {
        sum=0;

        bias = 5;
        for (int j = 0; j < 5; j++)
        {
            sum += Dataset[i][j] * weights[j];
        }
        sum += bias;
        cout << "Result is" << sum;
    }
    return sum;
}