#include <iostream>
using namespace std;

void rowWiseSum(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<"row :"<<i<<" sum "<<sum<<endl;
    }
}
void colWiseSum(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum=sum+arr[j][i];
        }
        cout<<"col :"<<i<<" sum "<<sum<<endl;
    }
}
int main(){
    int arr[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int row=3;
    int col=4;
    rowWiseSum(arr,row,col);
    colWiseSum(arr,row,col);
    return 0;
}