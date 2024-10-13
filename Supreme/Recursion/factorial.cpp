#include <iostream>
using namespace std;

int factorial(int n){
    //base case

    if(n==0 )
        return 1;
    if(n==1)
        return 1;
    // recursive relation/call
    int recAns=factorial(n-1);
    // processing
    int finalAns=n * recAns;
    return finalAns;
}
int main(){
    int number;
    cin>>number;
    cout<<"factorial of: "<<number <<" is " <<factorial(number)<<endl;
    return 0;
}