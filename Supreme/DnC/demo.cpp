#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid = s+(e-s)/2;
    int leftLength = mid-s+1;
    int rightLength = e-mid;

    int *left = new int[leftLength];
    int *right = new int[rightLength];

    int k=s;
    for(int i=0;i<leftLength;i++){
        left[i]=arr[k];
        k++;
    }

    k=mid+1;
    for(int i=0;i<rightLength;i++){
        right[i]=arr[k];
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainarray = s;

    while(leftIndex<leftLength && rightIndex<rightLength){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainarray] = left[leftIndex];
            mainarray++;
            leftIndex++;
        }
        else{
            arr[mainarray]=right[rightIndex];
            mainarray++;
            rightIndex++;
        }
    }

    while(rightIndex < rightLength){
        arr[mainarray] = right[rightIndex];
        mainarray++;
        rightIndex++;
    }
    while(leftIndex<leftLength){
        arr[mainarray] = left[leftIndex];
        mainarray++;
        leftIndex++;
    }

    delete[] left;
    delete[] right;
}
void mergeSort(int arr[],int s,int e){
    if(s>e){
        return;
    }
    if(s == e){
        return;
    }
    int mid = s+(e-s)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}
int main(){
    int arr[]={1,4,5,6,3,2};
    int size = 6;
    int s=0;
    int e=size-1;

    mergeSort(arr,s,e);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}