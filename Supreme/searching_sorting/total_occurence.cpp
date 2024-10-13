#include <iostream>
using namespace std;

int firstOccurence(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            //left me jao
            end=mid-1;
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
        mid=start + (end-start)/2;
    }
    return ans;
    
}

int lastOccurence(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;
    int ans=-1;
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
        //mid update
        mid = start + (end-start)/2;
    }
    return ans;
}

int totalOccurence(int arr[],int size,int target){
    int firstOccu=firstOccurence(arr,size,target);
    int lastOccu=lastOccurence(arr,size,target);
    int totalOccurence = lastOccu - firstOccu + 1;
    return totalOccurence;
}
int main(){
    int arr[]={10,20,30,30,30,30,70,80,90};
    int target=30;
    int size=9;
    int ans = totalOccurence(arr,size,target);
    cout<<"total occurence :"<<ans<<endl;

    return 0;
}