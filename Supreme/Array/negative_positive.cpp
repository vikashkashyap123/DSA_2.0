#include <iostream>
using namespace std;

void shiftNegativeOneSide(int arr[],int size){
    int j=0;
    //j -> memory block -> jaha par negative number store kar sakte hai
    for(int index=0;index<size;index++){
        if(arr[index]< 0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
}
int main(){
    int arr[]={23,-10,12,-7,-11,40,60};
    int size=7;
    
    cout<<"printing array before operation"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    shiftNegativeOneSide(arr,size);

    cout<<endl<<"printing array after operation"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}