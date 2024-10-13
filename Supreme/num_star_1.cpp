#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //upper part
    for (int row = 0; row <n; row++)
    {
        for(int col=0;col<row+1;col++){
            if(col==(row+1)-1){
                cout<<row+1;
            }
            else{
                cout<<row+1<<"*";
            }
        }
        cout<<endl;
    }

    //lower part
    int y=n-1;
    for (int row = 0; row <y; row++){
        for(int col=0;col<y-row;col++){
            if(col==(y-row)-1){
                cout<<y-row;
            }
            else{
                cout<<y-row<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}