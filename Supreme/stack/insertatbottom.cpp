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



void insertSorted(stack<int> &st, int element) {
  //base case
  if(st.empty() || element > st.top()) {
    st.push(element);
    return;
  }

  //1 case sambhalna h
  int temp = st.top();
  st.pop();
  //recursion sambhalega
  insertSorted(st,element);
  //backtrack
  st.push(temp);
}



int main() {

  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
//   st.push(5);
//   st.push(11);
//   int element = 400;
//   insertAtBottom(st,element);


insertSorted(st,25);

  while(!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }


  return 0;
}