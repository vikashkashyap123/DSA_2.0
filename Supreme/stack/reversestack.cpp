#include <iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &st, int &element) {
  //base case
  if(st.empty()) {
    st.push(element);
    return;
  }

  //1 case main solve karunga
  int temp = st.top();
  st.pop();

  //baaaki recursion
  insertAtBottom(st, element);

  //backTrack
  st.push(temp);
}

void reverseStack(stack<int> &st) {
  //base case
  if(st.empty()) {
    return;
  }
  //1 case main solve krega
  int temp = st.top();
  st.pop();
  //recursion
  reverseStack(st);
  //backtrack
  insertAtBottom(st,temp);
}

int main(){
    stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);

  // without reverse: 
// 30 20 10 

  reverseStack(st);
// //   with reverse: 
// //   10 20 30
  
  cout << "with reverse: " << endl;

    while(!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
}