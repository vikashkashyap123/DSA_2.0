#include <iostream>
using namespace std;
int Findlength(char ch[],int n){
    int length=0;
    for(int i=0;i<n;i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length; 
}
bool checkPalindrome(char ch[],int n){
    int i=0;
    int j=n-1;

    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=Findlength(ch,100);
    bool ispalindrome=checkPalindrome(ch,len);
    if(ispalindrome){
        cout<<"valid palindrome"<<endl;
    }
    else{
        cout<<"invalid palindrome"<<endl;
    }

    return 0;
}