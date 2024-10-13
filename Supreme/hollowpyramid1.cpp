// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int row=0;row<n;row++){
//         //space
//         for(int col=0;col<n-row-1;col++){
//             cout<<" ";
//         }
//         //star
//         for(int col=0;col<row+1;col++){
//             //print star for 1st and last col
//             if(col==0 || col==row+1-1){
//                 cout<<"* ";
//             }
//             else{
//                 //for every col between first and last col,print space
//                 cout<<"  ";
//             }
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//inverted

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        //space
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        //star
        for(int col=0;col<n-row;col++){
            if(col==0 || col==(n-row)-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}