// Given an integers array 'a', return the prefix sum/running sum in the same array
//  without creating a new array.
// n=5    input=1 2 3 4 5    output=1 3 6 10 15
#include <iostream>
#include <vector>
using namespace std;

void runningSum(vector<int> &v){
    for(int i=1;i<v.size();i++){
        v[i]=v[i-1]+v[i];
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    runningSum(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}