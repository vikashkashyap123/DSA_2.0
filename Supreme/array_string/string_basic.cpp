#include <iostream>
using namespace std;
int main(){
    string str ="This is an example sentence.";
    cout << str <<endl;
    // str.erase(str.begin()+9);   //erase 10th char
    // str.erase(str.begin()+5, str.end()-9);  //erase 6th to last 10th
    // cout<<str<<endl;
    cout<<str.substr(11,7)<<endl; //example
    return 0;
}