#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;

                               // *********************for loop
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }                             
    cout<<endl;
                                //****add element

     v.insert(v.begin()+2,6);

                                // **********************for each loop
    // for(int i=0;i<5;i++){
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    // }                            
    for(int element:v){
        cout<<element<<" ";
    }
    cout<<endl;

                               // ******delete element

    v.erase(v.end()-2);

                               //**************************while loop
     // for(int i=0;i<5;i++){
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    // }  
    int idx=0;
    while(idx<v.size()){
        cout<<v[idx]<<" ";
        idx++;
    }
    return 0;
}