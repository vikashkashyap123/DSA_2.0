// find the difference between the sum of elements
//  at even indices to the sum of elements at odd indices.
#include <iostream>
using namespace std;
int main(){
    int array[6];
    for(int i=0;i<6;i ++){
        cin>>array[i];
    }
    
    int ans_sum=0;
    for(int idx=0;idx<6;idx++){
        if(idx%2==0){
            ans_sum+=array[idx];
        }
        else{
            ans_sum-=array[idx];
        }
    }
    cout<<ans_sum<<endl;

  return 0;
}