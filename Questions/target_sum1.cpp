// count the number of triplets whose sum is equal to the given value x.

#include <iostream>
using namespace std;
int main(){
    int array[6];
    for(int i=0;i<6;i++){
        cin>>array[i];
    }
    int target_sum;
    cout<<"target_sum =";
    cin>>target_sum;
    int size =6;
    int triplets=0;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                if(array[i]+array[j]+array[k]==target_sum){
                    triplets++;
                }
            }
        }
    }
    cout<<triplets<<endl;

    return 0;
}
