#include <iostream>
using namespace std;

void findSumUptoN(int n){
        int sum=0;
        for(int i=1;i<=n;i++){
                sum=sum+i;
            }
        cout<<"final sum : "<<sum<<endl;
}
int main(){
    findSumUptoN(5);
    return 0;
}