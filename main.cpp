#include <iostream>
#include "src/interface.hpp"
using namespace std;
int main(){
    int x=0;
    cout<<"Chose your activation function:\n0:Relu \n1:Sigmoid \n2:Step \n3:Tanh\n";
    cin>>x;
    Array sum=summation();
    double output;
    for(int i=0;i<6;i++){
        output= Active(x,sum[i]);
        cout<<"\nResult of Forward pass "<<i<<" "<<output<<"\nSummation "<<sum[i];
    }
    
    return 0;
}