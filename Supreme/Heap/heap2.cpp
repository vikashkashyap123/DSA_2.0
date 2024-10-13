// #include <iostream>
// #include <queue>
// using namespace std;
// int main(){
//     //create max heap
//     priority_queue<int>pq;
//     //insertion
//     pq.push(10);
//     pq.push(20);
//     pq.push(30);
//     pq.push(40);
//     pq.push(50);
    
//     cout<<"Top element of Heap: "<<pq.top()<<endl;
//     pq.pop();
//     cout<<"Top element of Heap: "<<pq.top()<<endl;
//     cout<<"size of max heap: "<<pq.size();
//     return 0;
// }


#include <iostream>
#include <queue>
using namespace std;
int main(){
    //create min heap
    priority_queue<int,vector<int>,greater<int>>pq;
    //insertion
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    
    cout<<"Top element of Heap: "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element of Heap: "<<pq.top()<<endl;
    cout<<"size of max heap: "<<pq.size();
    return 0;
}

