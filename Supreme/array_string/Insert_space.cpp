#include <iostream>
using namespace std;

void replacecharacter(char ch[],int size){
    int index=0;
    while(ch[index] !='\0'){
        char currentchar =ch[index];
        if(currentchar == '@'){
            //insert space
            ch[index]=' ';
        }
        index++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);

    cout<<"before : "<<ch<<endl;
    replacecharacter(ch,100);
    cout<<"after : "<<ch<<endl;
    return 0;
}