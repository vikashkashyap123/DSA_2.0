#include <iostream>
#include <stack>
using namespace std;

bool checkRedudant(string &str){
    stack <char> st;

    for(int i=0;i<str.length();i++){
        char ch=str[i];

       if(ch=='(' || ch=='+' || ch=='-' || ch=='*'||ch=='/'){
        st.push(ch);
       }

       else if(ch==')'){

        int operatorCount = 0;
        while(!st.empty() && st.top()!='('){
            char temp = st.top();
            if(temp=='+' || temp=='-'||temp=='*' ||temp=='/'){
                operatorCount++;
            }
            st.pop();
        }
        //yha tak tab pahunchoge 
        //jab stack ke top par ek opening bracket hoga
        st.pop();

        if(operatorCount==0){
            return true;
        }
       }
    }
    //agr yha tak aaye ho to
    //iska matlab k har ek bracket k pair k beech me
    //ek operator pakka mila hoga
    return false;
}
int main(){
    string str = "((a+b)*(c+d))";
    bool ans=checkRedudant(str);


    if(ans ==true){
        cout<<"Redundant bracket are present";
    }
    else{
        cout<<"Redundant bracket are not present";
    }
    return 0;
}