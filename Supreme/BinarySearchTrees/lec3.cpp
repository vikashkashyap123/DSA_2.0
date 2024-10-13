#include <iostream>
#include<queue>
using namespace std;

class Node{
	public:
	int data;
	Node* left;
	Node* right;

	Node(int value) {
		this->data = value;
		this->left = NULL;
		this->right = NULL;
	}
};

void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		Node* temp = q.front();
		q.pop();

		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			cout << temp->data << " ";
			if(temp->left != NULL) {
				q.push(temp->left);
			}
			if(temp->right != NULL) {
				q.push(temp->right);
			}
		}
	}
}

Node* bstFromInorder(int inorder[], int s, int e) {
	//base case
	if(s > e) {
		return NULL;
	}

	//1 case solve krna h 
	int mid = (s+e)/2;
	int element  = inorder[mid];
	Node* root = new Node(element);

	//baaaaki recursion
	root->left = bstFromInorder(inorder, s, mid-1);
	root->right = bstFromInorder(inorder, mid+1, e);

	return root;
}

//convert this BST into a sorted Doubly Linked lIst
void convertBSTtoDLL(Node* root, Node* &head) {
	if(root == NULL ) {
		return;
	}

	//RNL

	//R 
	convertBSTtoDLL(root->right, head);

	//N
	//attaching next pointer of current node to heda of LL
	root->right = head;
	//attaching prev pointer of head of LL to current node
	if(head != NULL)
		head ->left = root;
	//head update
	head = root;

	//L
	
	convertBSTtoDLL(root->left, head);
}
Node* convertDLLtoBST(Node* &head, int n) {
	//base case
	if(head == NULL || n<=0) {
		return NULL;
	}

	//LNR
	//L
	Node* leftSubtree = convertDLLtoBST(head, n/2);

	//N
	Node* root = head;
	root->left = leftSubtree;
	//head update
	head  = head ->right;

	///R
	Node* rightSubtree = convertDLLtoBST(head, n-n/2-1);
	root->right = rightSubtree;
	return root;
}

void printLinkedList(Node* head) {
	Node* temp = head;
	cout << "printing the entire list: " << endl;
	while(temp != NULL) {
		cout << temp->data <<"->";
		temp = temp->right;
	}
	cout << endl;
}

int main(){


    Node* first = new Node(10);
	Node* second = new Node(20);
	Node* third = new Node(30);

	first->right = second;
	second->left = first;
	second->right = third;
	third->left = second;

	Node* head = first;
	//10<->20<->30

	Node* root = convertDLLtoBST(head, 3);
	levelOrderTraversal(root);
	// int inorder[] = {10,20,30,40,50,60,70};
	// int size = 7;
	// int start = 0;
	// int end = size-1;
	// Node* root = bstFromInorder(inorder, start, end);

	// levelOrderTraversal(root);
	// Node* head = NULL;
	// convertBSTtoDLL(root, head);
	// printLinkedList(head);

	
}