#include <iostream>
using namespace std;
void sumEven(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
        sum=sum+i;
        }
        
    }
    cout<<"sum is : "<<sum<<endl;
}
int main(){
    sumEven(5);
    return 0;
}