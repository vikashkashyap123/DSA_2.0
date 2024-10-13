#include <iostream>
using namespace std;
void countZeroOne(int arr[],int size){
    int Zerocount=0;
    int Onecount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            Zerocount++;
        }
        if(arr[i]==1){
            Onecount++;
        }
    }
    cout<<"Zerocount: "<<Zerocount<<endl;
    cout<<"Onecount: "<<Onecount<<endl;
}
int main(){
    int arr[]={0,1,0,1,1,1,1,0,1,0,0,0};
    int size=12;
    //zero=6
    //one=6
    countZeroOne(arr,size);
    return 0;
}