#include <iostream>
#include <deque>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr=new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void pushBack(int val){
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
            //circular case
            rear = 0;
            arr[rear]=val;
        }
        else{
            //normal case
            rear++;
            arr[rear]=val;
        }
    }
    void puchFront(int val){
        //check full
        if((front == 0 && rear == size - 1) || rear == front - 1){
            cout<<"Queue overFlow"<<endl;
            return;
        }
        else if(front == -1 && rear == -1){
            //empty case
            front ++;
            rear ++;
            arr[front]=val;
        }
        else if(front ==0 && rear != size -1  ){
            //circular vase
            front = size -1;
            arr[front]=val;
        }
        else{
            front--;
            arr[front]=val;
        }
    
    }
    
    void popFront(int val){
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
    void popBack(int val){
        //under flow 
        //single element
        //circular case
        //normal flow
        if(front == -1 && rear == -1){
            cout<<"UnderFlow"<<endl;
        }
        else if(front == rear){
            arr[rear]=-1;
            front = -1;
            rear= -1;

        }
        else if(rear == 0){
            arr[rear] = -1;
            rear = size -1;

        }
        else{
            arr[rear]=-1;
            rear--;
        }

    }
};
int main(){
    
    return 0;
}