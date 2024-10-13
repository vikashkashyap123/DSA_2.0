// #include <iostream>
// #include<limits.h>
// using namespace std;

// int FindMinimumInArray(int arr[],int size){
//     //ans store variable
//     int minAns=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<minAns){
//             minAns=arr[i];
//         }
//     }
//     return minAns;
// }
// int main(){
//     int arr[]={10,20,30,0,7,3,9,6};
//     int size=8;
//     int minimum=FindMinimumInArray(arr,size);
//     cout<<"Minimum number is :"<<minimum<<endl;
//     return 0;
// }

//                      maximum number
#include <iostream>
#include<limits.h>
using namespace std;

int FindMaximumInArray(int arr[],int size){
    //ans store variable
    int MaxAns=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>MaxAns){
            MaxAns=arr[i];
        }
    }
    return MaxAns;
}
int main(){
    int arr[]={10,20,30,0,7,3,9,6};
    int size=8;
    int Maximum=FindMaximumInArray(arr,size);
    cout<<"Maximum number is :"<<Maximum<<endl;
    return 0;
}