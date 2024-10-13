#include <iostream>
using namespace std;                                                                                                                                                  

void merge(int arr[],int s,int e){
    int mid = s + (e-s)/2;
    int lengthLeft=mid - s +1;
    int lenghtRight = e - mid;
    //create left and right array
    int *left = new int[lengthLeft];
    int *right = new int[lenghtRight];

    //copy value from original to left array
    int k=s;
    //k -> starting index of left array values in original array
    for(int i=0;i<lengthLeft;i++){
        left[i]=arr[k];
        k++;
    }

    //copy value from original to right array
    k=mid +1;
    //k -> starting index of left array values in original array
    for(int i=0;i<lenghtRight;i++){
        right[i]=arr[k];
        k++;
    }

    //actual merge logic is here
    //left array is already sorted
    //right array is already sorted
    int leftIndex=0;
    int rightIndex=0;
    //yhi par galti karoge
    int mainArrayIndex = s;

    while(leftIndex < lengthLeft && rightIndex < lenghtRight){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex]=left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrayIndex]=right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    // 2 more cases

    //1 case -> left array exhaust but right array me abhi element
    //abhi bache hue hai
    while(rightIndex < lenghtRight){
        arr[mainArrayIndex]=right[rightIndex];
        rightIndex++;
        mainArrayIndex++;
    }

    //2nd case -> right array exhaust but left array me element
    //abhi bhi bache hai
    while(leftIndex < lengthLeft){
        arr[mainArrayIndex]=left[leftIndex];
        leftIndex++;
        mainArrayIndex++;
    }

    //1 more case pending
    delete[] left;
    delete[] right;
}
void mergeShot(int arr[],int s,int e){
    //base case
    if(s > e){
        return ;
    }
    if(s == e){
        return;
    }
    int mid = s + (e-s)/2;
    //left part bala ka shoritng
    mergeShot(arr,s,mid);
    //right part bala ka shoritng
    mergeShot(arr,mid + 1,e);
    //merging two sorted array
    merge(arr,s,e);
}
int main(){
    int arr[]={10,30,20,50,40,9};
    int size=6;
    int s=0;
    int e=size-1;

    cout<<"Before merge sort: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    mergeShot(arr,s,e);

    cout<<"After merge sort: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}