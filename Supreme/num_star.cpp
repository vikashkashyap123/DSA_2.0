// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for (int row = 0; row <n; row++)
//     {
//         //inner loop
//         for(int col=0;col<2*row+1;col++){
//             //odd number
//             if(col%2==1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<row+1;
//             }
            
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

                     //OR
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for (int row = 0; row <n; row++)
    {
        for(int col=0;col<row+1;col++){
            if(col==(row+1)-1){
                cout<<row+1;
            }
            else{
                cout<<row+1<<"* ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}