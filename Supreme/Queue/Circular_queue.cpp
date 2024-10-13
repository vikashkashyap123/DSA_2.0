#include <iostream>
#include <queue>
using namespace std;

class Cqueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Cqueue(int size){
        arr=new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        //check full
        if((front == 0 && rear == size - 1) || rear == front - 1){
            cout<<"Queue overFlow"<<endl;
            return;
        }
        else if(front == -1 && rear == -1){
            //empty case
            front++;
            rear++;
            arr[rear]=val;
        }
        else if(rear == size -1 && front !=0){
            //circular vase
            rear = 0;
            arr[rear]=val;
        }
        else{
            //normal case
            rear++;
            arr[rear]=val;
        }
    }

    void pop(){
        //under flow
        if(front == -1 && rear == -1){
            cout<<"Queue UnderFlow"<<endl;
            return;
        }
        else if(front == rear){
            //empty case  -> single element
            arr[front]=-1;
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            //circular case
            arr[front]=-1;
            front = 0;
        }
        else{
            //normal case
            arr[front] = -1;
            front++;
        }
    }

    void print(){
        cout<<"printing Queue"<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    //creation
    Cqueue q(5);
    q.print();
    q.push(10);
    q.print();
    q.push(20);
    q.print();
    q.push(30);
    q.print();
    q.push(40);
    q.print();
    q.push(50);
    q.print();
    q.pop();
    q.pop();
    q.pop();
    q.print();
    q.push(100);
    q.print();
    q.push(200);
    q.print();
    q.push(300);
    q.print();
    q.push(400);
    q.print();
    return 0;
}