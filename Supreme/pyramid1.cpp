// #include<iostream>
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
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//inverted pyramid
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
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}