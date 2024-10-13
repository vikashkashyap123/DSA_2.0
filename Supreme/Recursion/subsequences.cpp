// #include <iostream>
// using namespace std;
// void FindSubsequences(string str,string output,int index){
//     //base case
//     if(index >= str.length()){
//         //ans jo hai output string pe build ho chuka hai
//         //print kardo
//         cout<<" -> "<<output<<endl;
//         return;
//     }
//     char ch=str[index];

//     // //include
//     // output.push_back(ch);
//     // FindSubsequences(str,output,index+1);
//     // //exclude
//     // output.pop_back();
//     // FindSubsequences(str,output,index+1);

//     //exclude
//     FindSubsequences(str,output,index+1);
//     //include
//     output.push_back(ch);
//     FindSubsequences(str,output,index+1);

// }
// int main(){
//     string str="abc";
//     string output=" ";
//     int index=0;
//     FindSubsequences(str,output,index);
//     return 0;
// }


                             //store in vector
#include <iostream>
#include<vector>
using namespace std;
void FindSubsequences(string str,string output,int index,vector<string> &ans){
    //base case
    if(index >= str.length()){
        //ans jo hai output string pe build ho chuka hai
        //print kardo
        // cout<<" -> "<<output<<endl;
        ans.push_back(output);
        return;
    }
    char ch=str[index];

    // //include
    output.push_back(ch);
    FindSubsequences(str,output,index+1,ans);
    // //exclude
    output.pop_back();
    FindSubsequences(str,output,index+1,ans);

    

}
int main(){
    string str="abc";
    string output=" ";
    int index=0;
    vector<string> ans;
    FindSubsequences(str,output,index,ans);
    //printing
    cout<<"printing the subsequences"<<endl;
    for(string s:ans){
        cout<<"-> "<<s<<endl;
    }
    return 0;
}