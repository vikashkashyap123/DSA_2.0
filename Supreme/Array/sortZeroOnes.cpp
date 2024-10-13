#include <iostream>
using namespace std;

void sortZeroOne(int arr[],int size){
    int zeroCount=0;
    int oneCount=0;
    //step :count 0 and 1
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }
    }
    //step B:place 0 
    // int i;
    // for(i=0;i<zeroCount;i++){
    //     arr[i]=0;
    // }
    // //step B:place 1
    // for(int j=i;j<size;j++){
    //     arr[j]=1;
    // } 

    int index=0;
    while(zeroCount--){
        arr[index]=0;
        index++;
    }
    while(oneCount--){
        arr[index]=1;
        index++;
    }
}
int main(){
    int arr[]={0,1,0,1,0,1,1,1,1,0,0,0,0,0};
    int size=14;
    sortZeroOne(arr,size);

    //printing the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}