#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
           if( col==0){
            cout<< row+1;
           }
        }
        for(int col=1;col<n;col++){
            if(row==0){
                cout<<" "<<col+1;
            }
        }
        for(int col=0;col<n;col++){
            if(col==n){
                cout<<n;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}