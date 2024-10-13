// #include <iostream>
// using namespace std;


// int sum(int num1,int num2){
//     int sum = num1 +num2;
//     return sum;
// }
// int sum(int num1,int num2,int num3){
//     int sum = num1 +num2+num3;
//     return sum;
// }
// float sum(float num1, float num2){
//     float sum=num1+num2;
//     return sum;
// }
// int main(){
//     int a=2;
//     int b=9;
//     cout<<sum(a,b)<<endl;

// }



// **********************************************************************************************
                                  //    function prototype
// #include <iostream>
// using namespace std;

// int sum(int num1,int num2);

// int main(){
//     int a=2;
//     int b=9;
//     cout<<sum(a,b)<<endl;

// }
// int sum(int num1,int num2){
//     int sum = num1 +num2;
//     return sum;
// }

// *****************************globle and local type**************
#include <iostream>
using namespace std;
int p=4;
void print(){
    cout<<p<<endl;
}
int main(){
    int p=5;
    cout<<p<<endl;
    print();
    return 0;
}
