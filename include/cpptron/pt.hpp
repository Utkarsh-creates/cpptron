#pragma once
#include <array>

using matrix = std::array<double,6>;
using wmat = std::array<double, 6>;
matrix perceptron(int x,wmat trained_weights);
wmat perceptrontrick(int x);
