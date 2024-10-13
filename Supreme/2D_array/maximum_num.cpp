// #include <iostream>
// #include<limits.h>
// using namespace std;

// int findMax(int arr[3][4],int row,int col){
//     int maxAns=INT_MIN;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j] > maxAns){
//                 maxAns=arr[i][j];
//             }
//         }
        
//     }
//     return maxAns;
// }

// int main(){
//     int arr[3][4]={
//                 {1,2,3,4},
//                 {5,6,7,8},
//                 {9,100,11,12}
//                 };
//     int row=3;
//     int col=4;
//     cout<<"maximum number is : "<<findMax(arr,row,col)<<endl;
//     return 0;
// }

//minimum number
#include <iostream>
#include<limits.h>
using namespace std;

int findMin(int arr[3][4],int row,int col){
    int minAns=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] < minAns){
                minAns=arr[i][j];
            }
        }
        
    }
    return minAns;
}

int main(){
    int arr[3][4]={
                {1,2,3,4},
                {5,6,0,8},
                {9,100,11,12}
                };
    int row=3;
    int col=4;
    cout<<"maximum number is : "<<findMin(arr,row,col)<<endl;
    return 0;
}