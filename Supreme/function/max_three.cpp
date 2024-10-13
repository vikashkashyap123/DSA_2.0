#include<iostream>
using namespace std;

// void printMaximum(int num1,int num2,int num3){
//     if(num1 >= num2 && num1 >= num3){
//         cout<<"maximum no. is : "<<num1<<endl;
//     }
//     else if(num2 >=num1 && num2>=num3){
//         cout<<"maximum no. is : "<<num2<<endl;
//     }
//     else{
//         cout<<"maximum no. is : "<<num3<<endl;
//     }
// }

void printMaximum(int num1,int num2,int num3){
    int ans =max(num1,num2);
    int finalAns=max(ans,num3);
    cout<<"final ans : "<<finalAns;
}
int main(){
    printMaximum(1 ,5 ,4);
    return 0;
}