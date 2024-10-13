#include <iostream>
using namespace std;

int lastOccurence(int arr[],int size,int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            //right me jao
            start=mid+1;
        }
        else if(target > arr[mid]){
            //right me jao
            start=mid+1;
        }
        else if(target < arr[mid]){
            //left me jao
            end=mid-1;
        }
        //update mid
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    int arr[]={9,10,20,30,30,30,70,80,90};
    int target=30;
    int size=9;
    int ansIndex=lastOccurence(arr,size,target);

    if(ansIndex ==-1){
        cout<<"target not found "<<endl;
    }
    else{
        cout<<"target found :"<<ansIndex<<endl;
    }
    return 0;
}