#include <iostream>
#include<vector>
using namespace std;

int pivotelement(vector<int>& arr){
    int size=arr.size();
    int s=0;int e=size-1;
    
    int mid=s+(e-s)/2;
    while(s<=e){
        if(s==e){
            return s;
        }
        if(mid + 1 < size && arr[mid]>arr[mid+1])
            return mid;
        else if(mid -1 >= 0 && arr[mid]<arr[mid-1])
            return mid-1;
        
        else if(arr[s] > arr[mid])
            e=mid-1;
        else
            s=mid+1;
        // mid updte
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(1);
    // v.push_back(12);
    // v.push_back(14);
    // v.push_back(16);
    v.push_back(0);
    v.push_back(4);
    // v.push_back(6);
    // v.push_back(8);
    // v.push_back(10);
    int ansindex=pivotelement(v);
    cout<<ansindex<<endl;
    return 0;
}