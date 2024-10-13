//write a function to print sum of 3 number.
// #include <iostream>
// using namespace std;

// void printSum(int a,int b,int c){
//     int ans=a+b+c;
//     cout<<"sum is : "<<ans<<endl;
// }
// int main(){
//     printSum(1,2,3);
//     return 0;
// }

//write a function to return sum of 3 number.
#include <iostream>
using namespace std;

int printSum(int a,int b,int c){
        int ans=a+b+c;
        return ans;
    }
int main(){
        int sum=printSum(4,4,4);
        cout<<"sum is :"<<sum;
    return 0;
}