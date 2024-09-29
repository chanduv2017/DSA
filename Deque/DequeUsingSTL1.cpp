#include<iostream>
#include<deque>
using namespace std;

int main(){
  deque<int>dq={10,15,30,5,12};
  auto it=dq.begin();
  it++;
  dq.insert(it,20);//10 20 15 30 5 12
  dq.pop_front();//20 15 30 5 12
  dq.pop_back();//20 15 30 5
  cout<<dq.size();//4
  return 0;
}