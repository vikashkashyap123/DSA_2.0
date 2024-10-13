#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    

    Node(){
        // cout<<"I am inside default constructor "<<endl;
        this->next = NULL;
    }

    Node(int data){
        // cout<<"I am inside parameterized constructor "<<endl;
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        cout<<"Destructor called for: "<<this->data<<endl;
    }
};

void printLL(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp->data <<" -> ";
        temp = temp -> next;
    }
    cout<<endl;
}

int countLength(Node* head){
    Node* temp = head;
    int count =0;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}


void InsertAtHead(Node* &head,Node* &tail,int data){
    
    if(head == NULL){
        //empty linklist

        //step 1 : to create new node
        Node* newNode = new Node(data);
        //step2 : update head
        head = newNode;
        tail = newNode;
    }
    else{

        //non empty LL bala case
        //create new node
        Node* newNode = new Node(data);
        //attach new node to head node
        newNode -> next = head;
        //update head
        head = newNode;
        
    }
    
}

void InsertAtTail(Node* &head,Node* &tail,int data){
    if(head == NULL){
        // empty case
        //step 1 : to create new node
        Node* newNode = new Node(data);
        //step 2 : update head and tail
        head = newNode;
        tail = newNode;
    }
    else{
        // non empty case
        //create new node
        Node* newNode = new Node(data);
        //attach new node to tail node
        tail -> next = newNode;
        //update tail
        tail = newNode;

    }
}

void InsertAtposition(Node* &head, Node* &tail, int data ,int position){
    // if(position < 1){
    //     cout<<"cannot insert , please enter a valid position "<<endl;
    //     return;
    // }
    int length = countLength(head);

    // if(position > length ){
    //     cout<<"cannot insert , please enter a valid position "<<endl;
    //     return;
    // }
    if(position == 1){
        InsertAtHead(head,tail,data);
    }
    else if(position == length + 1){
        InsertAtTail(head,tail,data);
    }
    else{
        //insert at middle of link list
        // step 1:create a node
        Node* newNode = new Node(data);
        // step 2:traverse prec // current to position
        Node* prev = NULL;
        Node* curr = head;
        while(position !=1){
            prev = curr;
            curr = curr->next;
            position--;
        }
        // step 3:attach prev to new node
        prev-> next = newNode;
        // step4 : attach new node to curr
        newNode ->next = curr;
    }
}

void deleteNode(Node* &head,Node* &tail,int position){
    //empty LL
    if(head == NULL){
        cout<<"cannot delete, bec LL is empty"<<endl; 
        return;
    }

    //single element case
    if(head == tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return;
    }
    int len=countLength(head);
    //delete from head
    if(position == 1){
        //first node ko delete kardo
        Node* temp = head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    else if(position == len){
       //last node ko delete kardo

       //find prev
        Node* prev = head;
        while(prev -> next !=tail){
            prev=prev -> next;
    }
        //prev node ka link null karo
        prev->next = NULL;
        //node delete karo
        delete tail;
        //update tail
        tail=prev;

    }


    else{
        //middle me koi node ko delete karna

        // step1 : set prev/curr position
        Node* prev = NULL;
        Node* curr = head;
        while(position !=1){
            position--;
            prev = curr;
            curr = curr->next;
        }

        //step2 : prev -> next me curr-> next node ko add karo
        prev -> next = curr -> next;
        //step3 : node isolste karo or node ko null karo
        curr -> next = NULL;
        // step4: delete node
        delete curr;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    
    InsertAtHead(head,tail,10);
    InsertAtHead(head,tail,20);
    InsertAtHead(head,tail,30);
    InsertAtHead(head,tail,50);
    printLL(head);
    
    // deleteNode(head,tail,3);
    // deleteNode(head,tail,4);
    // deleteNode(head,tail,1);
    printLL(head);

    // Node* head = NULL;
    // Node* tail = NULL;
    
    // InsertAtTail(head,tail,10);
    // InsertAtTail(head,tail,20);
    // InsertAtTail(head,tail,30);
    // InsertAtTail(head,tail,50);
    // printLL(head);

    // InsertAtposition(head,tail,5,1);
    // InsertAtposition(head,tail,100,5);
    InsertAtposition(head,tail,11,4);
    printLL(head);


    //creation of node
    // Node a;     //static allocation
    // Node* head = new Node();   //dynamic allocation

    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);
    // Node* fifth = new Node(50);
    // Node* tail = fifth;

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;

    //linked list create ho chuki hai

    // Node* head =first;
    // cout<<"printing the entire LL "<<endl;
    // printLL(head);

    // InsertAtHead(head ,tail, 400);
    // printLL(head);
    // InsertAtTail(head ,tail, 400);
    // printLL(head);
    // cout<<"printing lenth of linklist:  "<<countLength(head);
    return 0;
}