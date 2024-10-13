#include <iostream>
#include<stack>
using namespace std;

bool checkRedundant(string &str){
    stack<char> st;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/' ){
            st.push(ch);
        }
        else if(ch==')'){
            int operatorCount = 0;
            while(!st.empty() && st.top()!='('){
                char temp = st.top();
                if(temp == '+' || temp =='-'||temp=='*'||temp=='/'){
                    operatorCount++;
                }
                st.pop();
            }
            //yha tak aaye ho to top par opening bracket hoga usko hta do
            st.pop();
            if(operatorCount==0){
                return true;
            }
            
        }
    }
    return false;
}
int main(){
    string str="(((a+b)*(c+d)))";
    bool ans=checkRedundant(str);
    if(ans==true){
        cout<<"redundant brackets are present"<<endl;
    }
    else{
        cout<<"no redundant brackets";
    }
    return 0;
}