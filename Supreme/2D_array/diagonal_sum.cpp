#include <iostream>
using namespace std;
// void diagonalsum(int arr[][4],int row,int col){
//     int sum=0;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(i+j==3){
//                 sum=sum+arr[i][j];
//             }
//         }
        
//     }
//     cout<<"diagonal sum :"<<sum;
// }
void diagonalsum(int arr[][4],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        sum=sum+arr[i][i];
        }
        cout<<"diagonal sum :"<<sum;
}

int main(){
    int arr[][4]={
        {1,2,3,4},
        {5,6,70,8},
        {9,10,1,11},
        {12,24,46,89}
    };
    int row=4;
    int col=4;
    diagonalsum(arr,row,col);
    return 0;
}