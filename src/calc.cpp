#include <iostream>
#include "matrix.hpp"
#include "active.hpp"
#include "interface.hpp"
#include <array>
using namespace std;
using Array = array<double,6>;
Array summation()
{
    Matrix Dataset = data();
    double bias;
    array<double,6> sum{};

    array<double, 5> weights{1.0, 1.0, 1.0, 1.0, 1.0};
    for (int i = 0; i < 6; i++)
    {


        bias = 5;
        for (int j = 0; j < 5; j++)
        {
            sum[i]+= Dataset[i][j] * weights[j];
        }
        sum[i] += bias;
    }
    return sum;
}

double Active(int choice, double value){
double out=0;
switch (choice){
    case 0:
    out=ReLu(value);
    break;

    case 1:
    out=sigm(value);
    break;

    case 2:
    out=step(value);
    break;

    case 3:
    out=tanh_active(value);
    break;
}
return out;
}