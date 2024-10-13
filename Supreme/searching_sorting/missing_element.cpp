#include <iostream>
using namespace std;
int missingElement(int arr[],int size){
    int start=0;
    int end=size;
    int mid=start + (end-start)/2;
    int ans=-1;
    while(start <=end){
        int diff=arr[mid]-mid;
        if(diff == 1){
            //right me jao
            start= mid + 1;
        }
        else{
            //ans store
            ans=mid;
            //left me jao
            end=mid-1;
        }
        //mid update
        mid=start + (end-start)/2;
    }
    // if(ans + 1==0){
    //     return size + 1;
    // }
    return ans + 1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;

    cout<<"missing element : "<<missingElement(arr,size);
    return 0;
}