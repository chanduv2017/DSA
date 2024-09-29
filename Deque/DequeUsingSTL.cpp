//in many other languages deque is implemented using doubly linkedlist
//in cpp random access is allowed

#include<iostream>
#include<deque>
using namespace std;

int main(){
  // deque<int>dq; //empty deque
  deque<int>dq={10,20,30};
  dq.push_front(5);
  dq.push_back(50);
  for(auto x:dq) cout<<x<<" ";
  cout<<dq.front()<<" "<<dq.back();
  return 0;
}