#include<iostream>
using namespace std;
void PrintPermutation(string str,int index){
    //base case
    if(index >=str.length()){
        cout<<str<<" ";
        return;
    }

    for(int j=index;j<str.length();j++){
        swap(str[index],str[j]);

        //recursion
        PrintPermutation(str,index+1);
        //backtracking
        // swap(str[index],str[j]);    //use by reference & in string
    }
}
int main(){
    string str = "abc";
    int index = 0;
    PrintPermutation(str,index);
    return 0;
}