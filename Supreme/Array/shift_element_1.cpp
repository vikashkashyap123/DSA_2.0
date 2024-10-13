 //right shift


// #include <iostream>
// using namespace std;

// void shiftArray(int arr[],int size){
//     //step A :store last array
//     int temp=arr[size-1];
//     //step B :shift arr[i]=arr[i-1]
//     for(int i=size-1;i>=1;i--){
//         arr[i]=arr[i-1];
//     }
//     //step C:store temp  in arr[0] index
//     arr[0]=temp;

// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int size=6;

//     cout<<"print array before shifting"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     shiftArray(arr,size);

//     cout<<endl<<"printing array after shifting"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//left shift

#include <iostream>
using namespace std;

void shiftArray(int arr[],int size){
    //step A :store first array
    int temp=arr[0];
    //step B :shift arr[i]=arr[i+1]
    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    //step C:store temp  in arr[0] index
    arr[size-1]=temp;

}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;

    cout<<"print array before shifting"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    shiftArray(arr,size);

    cout<<endl<<"printing array after shifting"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}