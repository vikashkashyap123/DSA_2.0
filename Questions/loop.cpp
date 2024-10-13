   //                *********sum first n natural no.
// #include <iostream>
// using namespace std;
// int main(){
//     int n,sum=0;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         sum+=i;
//     }
//     cout<<"sum of number is "<<sum;
//     return 0;
// }

//                  **********factorial***********
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     long double fact=1.0;
//     cout<<"enter a positive integer ";
//     cin>>n;
//     if(n<0){
//         cout<<"factorial does not exist";
//     }
//     else{
//         for(int i=1;i<=n;i++){
//             fact=fact*i;
//         }
//         cout<<"factorial of "<< n <<" = "<<fact;
//     }
//     return 0;
// }
//             *************table*********
// #include <iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter the table"<<endl;
//       cin>>n;
//       for(int i=1;i<=10;i++){
//         cout<<n<<" * "<<i<<" = "<<n*i<<endl;
//       }
//     return 0;
// }
//         ********************fibonacci
// #include <iostream>
// using namespace std;
// int main(){
//     int n,t1=0,t2=1,next_term=0;
//     cout<<"Enter the no. of term :";
//     cin>>n;
//     cout<<"fibonacci series are :";
//     for(int i=1;i<=n;i++){
//         if(i==1){
//             cout<<t1<<",";
//             continue;
//         }
//         if(i==2){
//             cout<<t2;
//             continue;
//         }
        
//          next_term=t1+t2;
//         t1=t2;
//         t2=next_term;
//         cout<<","<<next_term;
//     }
//     return 0;
// }
//         ********************fibonacci enterd by user is less answr
// #include <iostream>
// using namespace std;
// int main(){
//     int n,t1=0,t2=1,next_term=0;
//     cout<<"Enter the no. of term :";
//     cin>>n;
//     cout<<"fibonacci series are :";
//     for(int i=1;i<=n;i++){
//         if(i==1){
//             cout<<t1<<",";
//             continue;
//         }
//         if(i==2){
//             cout<<t2;
//             continue;
//         }
//         next_term=t1+t2;
//             if(next_term<=n){
            
//         t1=t2;
//         t2=next_term;
//         cout<<","<<next_term;}
         
//     }
//     return 0;
// }

//            **************
 