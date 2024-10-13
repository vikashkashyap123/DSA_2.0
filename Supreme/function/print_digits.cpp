#include <iostream>
using namespace std;

void printAllDigits(int n){
       while(n){
        int onesplacedigit =n%10;
        cout<<"Digit" <<":"<<onesplacedigit<<endl;
        n=n/10;
       }
        
}
int main(){
    int n;
    cout<<"Enter the number to see its digit"<<endl;
    cin>>n;
    printAllDigits(n);
    return 0;
}