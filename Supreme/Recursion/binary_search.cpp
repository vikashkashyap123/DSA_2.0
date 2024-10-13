#include <iostream>
using namespace std;
int binarySearch(int arr[],int s,int e,int target){
    //base case
    if(s>e){
        //element not found
        return -1;
    }
    //processing
    int mid=s+(e-s)/2;
    if(arr[mid]==target){
        return mid;
    }
    //baki recursion dekh lega
    if(arr[mid]<target){
        //right me jao
        s = mid + 1;
        bool aagekaAns=binarySearch(arr,s,e,target);
        return aagekaAns;
    }
    else{
        //left me jao
        e = mid -1;
        bool aagekaAns=binarySearch(arr,s,e,target);
        return aagekaAns;
    }
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int start=0;
    int end=size-1;
    int target=50;

    bool found=binarySearch(arr,start,end,target);
    if(found){
        cout<<"target found "<<endl;
    }
    else{
        cout<<"target not found "<<endl;
    }
    
    return 0;
}