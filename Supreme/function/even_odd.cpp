// #include <iostream>
// using namespace std;
// void checkEvenOdd(int n){
//     if(n%2==0){
//         cout<<"even"<<endl;
//     }
//     else{
//         cout<<"odd"<<endl;
//     }
// }
// int main(){
//     checkEvenOdd(11);
//     return 0;
// }

//********************bit wise
//even number =0101010  end with 0
//odd number =0101011 end with 1
// if(n&1==0) then even else odd
#include <iostream>
using namespace std;
bool checkEven(int n){
    if(n&1==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    bool iseven =checkEven(n);

    if(iseven){
        cout<<n<<" is even number"<<endl;
    }
    else{
        cout<<n<<" is odd number"<<endl;
    }

    
    return 0;
}