#include<iostream>
#include<cmath>

using namespace std;

int binaryToDecimal(int n){
    int decimal=0;
    int i=0;
    while(n){
       int bit=n%10;
       decimal= bit*pow(2,i++) + decimal;
       n=n/10; 
    }
    return decimal;
}

// int binaryToDecimal(int n){
//     // bitwise method
//     int decimal=0;
//     int i=0;
//     while(n){
//         int bit=(n || 1);
//         decimal=bit*pow(2,i++)+ decimal;
//         n=n >> 1;
//     }
//     return decimal;
// }

int main(){
   int n;
   cout<<"Enter binary number ";
   cin>>n;
   int decimal=binaryToDecimal(n);
   cout<<"Decimal number is "<<decimal<<endl;
    return 0;
}