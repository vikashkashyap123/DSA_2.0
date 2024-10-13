#include <iostream>
#include <queue>
using namespace std;
int main(){
    //creation
    queue<int> q;

    //insertion
    q.push(4);

    //size
    cout<<"size of queue : "<<q.size()<<endl;

    //empty
    if(q.empty()==true){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }

    //remove
    q.pop();

    //size
    cout<<"size of queue : "<<q.size()<<endl;

    //empty
    if(q.empty()==true){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(9);

    cout<<"front element of queue : "<<q.front()<<endl;
    cout<<"Last element of queue : "<<q.back()<<endl;
    

    return 0;
}