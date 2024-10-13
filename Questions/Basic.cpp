#include <iostream>
using namespace std;
int main(){
    int a=2,b=4;
    cout<<"Before swapping"<<endl;
    cout<<"a="<<a<<" b="<<b<<endl;
        int temp=a;
     a=b;
     b=temp;

    // a=a+b;       ..... a=6
    // b=a-b;       ......b=2
    // a=a-b;       ......a=4

    //a=a*b;         // ......a=8
    //b=a/b;         // ......b=2
    //a=a/b;         //.......a=4

    // a=a^b;          
    // b=a^b;               
    // a=a^b;       

//     a=b-a+ (b=a);
    cout<<"After swapping\n"<<"a="<<a<<" b="<<b;
    return 0;
}

// #include <iostream>
// using namespace std;
// int main(){
//     char c;
//     cout<<"Enter a character: "<<endl;
//     cin>>c;
//     cout<<"ASCII value of "<<c<<" is "<<int(c);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     float a,b;
//     cout<<"Enter two decimal numbers "<<endl;
//     cin>>a>>b;
//     cout<<"multiple is "<<a*b;
// }