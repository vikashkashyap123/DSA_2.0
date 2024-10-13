#include <iostream>
using namespace std;

int findlength(char ch[],int size){
    int length=0;
    while (ch[length] != '\0')
    {
    length++;
    }
    return length;
}

void reverseString(char ch[],int size){
    int i=0;
    int j=size-1;
    while(i <= j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

int main(){
    char ch[100];

    cin.getline(ch,100);
    cout<<"before : "<<ch<<endl;
    
    int length=findlength(ch,100);

    reverseString(ch,length);
    
    cout<<"after : "<<ch<<endl;
    return 0;
}