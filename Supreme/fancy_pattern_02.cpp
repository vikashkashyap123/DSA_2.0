#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<2*n-row-2;col++){
            cout<<"*";
        }
        for(int col=0;col<2*row+1;col++){
            if(col%2==1){
                cout<<"*";
            }
            else{
                cout<<row+1;
            }
        }
        for(int col=0;col<2*n-row-2;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}