// #include <iostream>
// using namespace std;
// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     printArray(arr,size);
//     return 0;
// }

//present =true
//absent =false

#include <iostream>
using namespace std;
bool linearSerch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            //found
            return true;
        }
    }
    //not found
    return false;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int target=4;
    int size=5;

    bool ans=linearSerch(arr,size,target);

    if(ans==1){
        cout<<"target found"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }
    return 0;
}