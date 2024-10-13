  //          *******leap year******
//   #include <iostream>
//   using namespace std;
//   int main(){
//     int year;
//     cout<<"Enter year"<<endl;
//     cin>>year;

//     if(year%4==0){
//         if(year%100==0){
//             if(year%400==0)
//             cout<<year<<" is leap year"<<endl;
//             else
//             cout<<year<<" is not leap year";
//         }
//         else
//          cout<<year<<" is not leap year";

//     }
//     else 
//     cout<<year<<" is  leap year";
//     return 0;
//   }

// #include <iostream>
// using namespace std;
// int main() {
// char c;
// int isLowercaseVowel, isUppercaseVowel;
// cout << "Enter an alphabet: ";
// cin >> c;
// // evaluates to 1 (true) if c is a lowercase vowel
// isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
// // evaluates to 1 (true) if c is an uppercase vowel
// isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
// // show error message if c is not an alphabet
// if (!isalpha (c))
// printf("Error! Non-alphabetic character.");
// else if (isLowercaseVowel || isUppercaseVowel)
// cout << c << " is a vowel.";
// else
// cout << c << " is a consonant.";
// return 0;
// }

