#include <iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void BubbleSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j] < v[j+1]){                   // increasing order ----(>)
                swap(v[j],v[j+1]);
            }
        }
    }
}

int main(){
    vector <int> v ={5,10,9,2,1};
    BubbleSort(v);
    print(v);
    return 0;
}