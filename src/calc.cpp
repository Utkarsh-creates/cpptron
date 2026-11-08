#include <iostream>
#include "matrix.hpp"
#include "active.hpp"
#include "interface.hpp"
#include "pt.hpp"
#include <array>
using namespace std;
using Array = array<double,6>;
Array summation(wmat weights)
{
    Matrix Dataset = data();
    double bias;
    array<double,6> sum{};
    for (int i = 0; i < 6; i++)
    {
        bias = 1;
        sum[i]+=bias*weights[5];
        for (int j = 0; j < 5; j++)
        {
            sum[i]+= Dataset[i][j] * weights[j];
        }
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