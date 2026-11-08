#include <iostream>
#include "src/pt.hpp"
#include "src/interface.hpp"
#include <array>
using matrix = array<double,6>;
using namespace std;

matrix perceptron(int x, matrix trained_weights){
    Array sum=summation(trained_weights);
    array<double,6> output;
    for(int i=0;i<6;i++){
        output[i]= Active(x,sum[i]);
        // cout<<"\nResult of Forward pass "<<i<<" "<<output<<"\nSummation "<<sum[i];
    }
    return output;
}


int main(){
int x=0;
cout<<"Chose your activation function:\n0:Relu \n1:Sigmoid \n2:Step \n3:Tanh\n";
cin>>x;
wmat trained_w=perceptrontrick(x);
wmat output=perceptron(x,trained_w);

for(int i=0;i<6;i++){
 cout<<output[i];
}

}