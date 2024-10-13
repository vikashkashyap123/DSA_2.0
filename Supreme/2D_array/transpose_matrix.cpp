#include <iostream>
using namespace std;
void printArray(int arr[][4], int row, int col) {
  for(int i=0; i<row; i++ ) {
    for(int j=0; j<col; j++) {

      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
void transpose(int arr[4][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
        
    }
}
int main(){
    int arr[4][4]={
        {2,4,6,8},
        {1,3,5,7},
        {9,1,4,6},
        {10,20,30,40}
    };
    int row=4;
    int col=4;
    cout<< endl << "Printing before transpose" << endl;
    printArray(arr, row, col);

    cout<< endl  << "Doing transpose" << endl;
    transpose(arr, row,  col);

    cout<< endl  << "Printing after transpose" << endl;
    printArray(arr, row, col);
    
    return 0;
}