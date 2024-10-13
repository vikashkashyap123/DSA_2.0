// #include <iostream>
// using namespace std;
// void printDigits(int num){
//     //base case
//     if(num == 0){
//         return;
//     }
//     //processing
//     int digits = num%10;
//     // digit update
//     num =num /10;

//     //R.R
//     printDigits(num);
//     //processing
//     cout<<digits<<" ";

// }
// int main(){
//     int num=4215;
//     printDigits(num);
//     return 0;
// }



#include <iostream>
#include <vector>
using namespace std;
void printDigits(int num, vector<int> &ans){
    //base case
    if(num == 0){
        return;
    }
    //processing
    int digits = num%10;
    // digit update
    num =num /10;

    //R.R
    printDigits(num,ans);
    //processing
    ans.push_back(digits);

}
int main(){
    int num=4215;
    vector<int> ans;
    printDigits(num,ans);
    //printing vector
    for(int num:ans){
        cout<<num<<" ";
    }
    return 0;
}