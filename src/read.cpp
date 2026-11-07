#include <iostream>
#include <fstream>
#include <array>
using namespace std;
using Matrix = array<array<double, 6>, 6>; //type alias

Matrix data(){
     static const int num_rows=6;
     static const int num_column=6;
     array<array<double, num_column>,num_rows> mat{}; //with {} array elemnts are set as zero
    ifstream file("dataset.txt");
    if (!file.is_open()){
        cout<<"Couldn't open the file";
        return mat;
    }
    for(int i=0; i<6;i++){
        for(int j=0; j<6; j++){
            file>>mat[i][j];
        }
    }
    return mat;
}