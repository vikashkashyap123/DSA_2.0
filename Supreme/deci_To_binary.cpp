#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinaryMethod1(int n){
    //division method
    int binaryno=0;
    int i=0;
    while(n>0){
        int bit=n%2;
        binaryno=bit*pow(10,i++)+ binaryno;
        n=n/2;
    }
    return binaryno;
}

// int decimalToBinaryMethod2(int n){
    //bitwise method
//     int binaryno=0;
//     int i=0;
//     while(n>0){
//         int bit=(n & 1);
//         binaryno=bit*pow(10,i++)+ binaryno;
//         n=n >> 1;
//     }
//     return binaryno;
// }

int main(){

    int n;
    cout<<"Enter a number ";
    cin>>n;
    int binary=decimalToBinaryMethod1(n);
    cout<<"Binary number is "<<binary<<endl;
    return 0;
}