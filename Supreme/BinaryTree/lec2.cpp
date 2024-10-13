#include <iostream>
#include<queue>
#include<map>
using namespace std;

class Node{
  public:
	int data;
	Node* left;
	Node* right;

	Node(int val) {
	  this->data = val;
	  this->left = NULL;
	  this->right = NULL;
	}
};


void levelOrderTraversal(Node* root) {
	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	//asli traversal start krete h 

	while(!q.empty()) {
		Node* front = q.front();
		q.pop();

		if(front == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			//valid node wala case
			cout << front->data << " ";

			if(front->left != NULL) {
				q.push(front->left);
			}
			if(front->right != NULL) {
				q.push(front->right);
			}
		}
	}
}

int searchInorder(int inorder[], int size, int target){
  for(int i=0; i<size; i++) {
    if(inorder[i] == target) {
      return i;
    }
  }
  return -1;
}

void createMapping(int inorder[], int size, map<int,int> &valueToIndexMap) {

    for(int i=0; i<size; i++) {
      int element = inorder[i];
      int index = i;
      valueToIndexMap[element] = index;
    }

}

// Node* constructTreeFromPreAndInorderTraversal( map<int,int> &valueToIndexMap, int preOrder[], int inOrder[], int &preIndex, int inOrderStart, int inOrderEnd, int size) {
//   //base case
//   if(preIndex >= size || inOrderStart > inOrderEnd) {
//     return NULL;
//   }

//   //1 case main solve krta hu
//   int element = preOrder[preIndex];
//   preIndex++;
//   Node* root = new Node(element);
//   //element search krna padega  inorder me
//   //int position = searchInorder(inOrder, size, element);  //takes o(n) time
//   int position = valueToIndexMap[element];                 //takes 0(1) time
//   //baaaki recursion sambhal lega
//   root->left = constructTreeFromPreAndInorderTraversal(valueToIndexMap,preOrder, inOrder, preIndex, inOrderStart, position-1, size);

//   root->right = constructTreeFromPreAndInorderTraversal(valueToIndexMap,preOrder, inOrder, preIndex, position+1, inOrderEnd, size);

//   return root;

// }

Node* constructTreeFromPostAndInorderTraversal( map<int,int> &valueToIndexMap, int postorder[], int inorder[], int &postIndex, int inorderStart, int inorderEnd, int size) {

  if(postIndex < 0 || inorderStart > inorderEnd) {
    return NULL;
  }

  //1 case main solve krunga
  int element = postorder[postIndex];
  postIndex--;
  Node* root = new Node(element);
  //search karo inorder me 
  int position = valueToIndexMap[element];
  //baaki recursion sambhal lega
  //right ki call pehle lagegi
  root->right = constructTreeFromPostAndInorderTraversal(valueToIndexMap, postorder, inorder, postIndex, position+1, inorderEnd, size);

  root->left = constructTreeFromPostAndInorderTraversal(valueToIndexMap, postorder, inorder, postIndex, inorderStart, position-1, size);

  return root;


}

int main() {
//   int inorder[] = {10,8,6,2,4,12};
//   int preOrder[] = {2,8,10,6,4,12};
//   int size = 6;
//   int preOrderIndex = 0;
//   int inorderStart = 0;
//   int inorderEnd = 5;
//   map<int,int> valueToIndexMap;
//   createMapping(inorder, size, valueToIndexMap);

//   Node* root = constructTreeFromPreAndInorderTraversal(valueToIndexMap,preOrder, inorder, preOrderIndex, inorderStart,inorderEnd, size);

  int inorder[]= {8,14,6,2,10,4};
  int postorder[] = {8,6,14,4,10,2};
  int size = 6;
  int postIndex = size-1;
  int inorderStart = 0;
  int inorderEnd = size-1; 
  map<int,int> valueToIndexMap;
  createMapping(inorder, size, valueToIndexMap);
  Node* root = constructTreeFromPostAndInorderTraversal(valueToIndexMap,postorder, inorder, postIndex, inorderStart,inorderEnd, size);
  cout << "Printing the entire tree: " << endl;
  levelOrderTraversal(root);
  return 0;
}