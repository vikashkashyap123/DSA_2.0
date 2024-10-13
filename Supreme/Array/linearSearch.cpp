#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int target=4;
    int n=5;

    bool flag=0;
    //0 -> not found
    //1 -> found 
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            //found
            flag=1;
            break;
        }
    }

    if(flag==1){
        cout<<"target found"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }
    return 0;
}