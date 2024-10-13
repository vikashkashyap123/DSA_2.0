#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //upper half
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //lower half
    int y=n-1;
    for(int row=0;row<y;row++){
        for(int col=0;col<y-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}