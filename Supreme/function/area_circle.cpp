// #include <iostream>
// #include<cmath>
// using namespace std;

// float areaCircle(int radius){
//     float area= 3.18*radius*radius;
//     return area;
// }
// int main(){
//     float radius;
//     cin>>radius;
//     float ans= areaCircle(radius);
//     cout<<"area of circle : "<<ans<<endl;
//     return 0;
// }


#include <iostream>
#include<cmath>
using namespace std;

void areaCircle(int r){
    float area=3.14*r*r;
    cout<<"area of circle "<<area;
}

int main(){
   int r;
   cin>>r;
    areaCircle(r);
    return 0;
}