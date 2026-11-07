#include <iostream>
#include <cmath>
using namespace std;
double sigm(double sum){
    double output=1/(1+std::exp(-sum));
    return output;
}