#include <iostream>
#include <array>
#include "../include/cpptron/pt.hpp"
#include "../include/cpptron/matrix.hpp"
using namespace std;
using wmat = array<double,6>;
wmat perceptrontrick(int x){
    double learn=0.01;
    array<array<double, 6>,6> actual_data=data();
    wmat w_old {1,1,1,1,1,1};
    wmat w_new {1,1,1,1,1,1};
    for(int i=0;i<1000;i++){
        wmat output=perceptron(x,w_old);
        for(int j=0;j<6;j++){
        for(int k=0;k<5;k++){
        w_new[k]=w_old[k]+learn*(actual_data[j][5]-output[j])*(actual_data[j][k]);
        w_old=w_new;
        } 
    }
}
return w_old;

}