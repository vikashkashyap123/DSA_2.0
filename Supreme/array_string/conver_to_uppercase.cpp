// #include <iostream>
// using namespace std;

// void convertToUpperCase(char ch[],int size){
//     int index=0;
//     while(ch[index] != '\0')
//     {
//         char currentChar=ch[index];
//         //if the lower case , convert to upper case
//         if(currentChar >= 'a' && currentChar <= 'z'){
//             ch[index]=currentChar - 'a' + 'A';
//         }
//         else{
//             index++;
//         }
//     }
    
// }
// int main(){
//     char ch[100];

//     cin.getline(ch,100);

//     cout<<"Before : "<<ch<<endl;
//     convertToUpperCase(ch,100);
//     cout<<"After : "<<ch<<endl;
//     return 0;
// }

// upper case to lower case
#include <iostream>
using namespace std;
void convertToLowerCase(char ch[],int size){
    int index=0;
    while(ch[index] != '\0'){
        char currentChar = ch[index];
        if(currentChar >= 'A' && currentChar <= 'Z'){
            ch[index]=currentChar - 'A' + 'a';
        }else{
            index++;
        }
        
    }
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"before: "<<ch<<endl;
    convertToLowerCase(ch,100);
    cout<<"after: "<<ch<<endl;
    return 0;
}