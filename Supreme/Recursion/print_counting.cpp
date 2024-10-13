#include <iostream>
using namespace std;
void printCounting(int n){
    //base case
    if(n==1){      //n==0  return;
        cout<<1;
        return;
    }
    //processing
    cout<<n<<" ";
    //recursion call
    printCounting(n-1);
}
int main(){
    printCounting(6);
    return 0;
}