#include <iostream>
#include<vector>
using namespace std;

//solve -> store even number in vector
void solve(int arr[],int size,int index,vector<int > &ans){
    //base case
    if(index>=size){
        return;
    }
    //processing
    if(arr[index]%2==0){
        //even
        ans.push_back(arr[index]);
    }
    //R.R
    solve(arr,size,index+1,ans);
}
int main(){
    int arr[]={10,11,12,13,14};
    int index=0;
    int size=5;
    vector<int>ans;
    solve(arr,size,index,ans);
    //printing vector
    for(int num:ans){
        cout<<num<<endl;
    }
    return 0;
}