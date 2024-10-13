#include <iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;     //first element hi minimum hai
        for(int j=i+1;j<n;j++){
            if(v[j] < v[minIndex]){
                minIndex=j;
            }
        }
        //sawp ith with minindex
        swap(v[i],v[minIndex]);
    }
}
int main(){
    vector<int> v={11,33,22,55,44};
    selectionSort(v);
    print(v);
    return 0;
}