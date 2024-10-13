#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    //best practice
    int mid=start+(end-start)/2;
    
    while(start<=end){
        //found
        if(arr[mid]==target){
            //return index of the found element
            return mid;
        }
        else if(target > mid){
            //right me jao
            start=mid + 1;
        }
        else if(target < mid){
            //left me jao
            end=mid -1;
        }
        //mid update
        mid=start +(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int target=90;
    int size=9;

    int ansIndex=binarySearch(arr,size,target);

    if(ansIndex==-1){
        cout<<"target not found "<<endl;
    }
    else{
        cout<<"target found : "<<ansIndex<<endl;
    }
    return 0;
}