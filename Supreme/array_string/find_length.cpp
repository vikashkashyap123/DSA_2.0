#include <iostream>
#include <string.h>
using namespace std;

int findlength(char ch[],int size){
    int length=0;
    for(int i=0;i<size;i++){
        if(ch[i]=='\0'){
            //ruk jao
            break;
        }
        else{
            length++;
        }
    }
    return length;

}
int main(){
    char ch[100];
    // cin>>ch;
    cin.getline(ch,100);   //for space also

    int length = findlength(ch,100);
    cout<<"length of the string : "<<length<<endl;
    cout<<"length of string by predefined function : "<<strlen(ch);
    return 0;
}