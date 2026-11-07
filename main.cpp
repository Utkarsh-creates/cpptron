#include <iostream>
#include "src/interface.hpp"
using namespace std;
int main(){
    int x=0;
    cout<<"Chose your activation function:\n0:Relu \n1:Sigmoid \n2:Step \n3:Tanh\n";
    cin>>x;
    double sum=summation();
    double value = Active (x, sum);
    cout<<"\nResult of Forward pass "<<value<<"\nSummation "<<sum;
    return 0;
}