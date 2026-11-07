#include <iostream>
#include <cmath>
#include "../active.hpp"
double ReLu(double sum)
{
    if (sum > 0)
    {
        return sum;
    }
    else
        return 0;
}

double sigm(double sum)
{
    double output = 1 / (1 + std::exp(-sum));
    return output;
}

int step(double sum)
{
    if (sum < 0)
    {
        return 0;
    }
    else
        return 1;
}
double tanh_active(double sum)
{
    return std::tanh(sum);
}