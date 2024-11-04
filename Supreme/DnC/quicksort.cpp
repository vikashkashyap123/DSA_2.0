#include <bits/stdc++.h>
using namespace std;

void quick(int arr[],int s,int e){
    if(s >= e) return;
    int pivot=e;
    int i=s-1;
    int j=s;
    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);
    quick(arr,s,i-1);
    quick(arr,i+1,e);
}
int main()
{
    int arr[]={10,30,20,50,40};
    int size=5;
    int s=0;
    int e=size-1;
    
    quick(arr,s,e);
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}