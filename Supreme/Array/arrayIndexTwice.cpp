#include <iostream>
using namespace std;
int main(){
    int arr[10];
    int n=10;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"printing after taking input "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n;i++){
        arr[i]=2*arr[i];
    }

    cout<<endl<<"printing after taking double "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}