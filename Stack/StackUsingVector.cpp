#include <iostream>
#include <vector>
using namespace std;

class MyStack
{
  vector<int> v;

  void push(int x)
  {
    v.push_back(x);
  }

  int pop()
  {
    int res = v.back();
    v.pop_back();
    return res;
  }

  int size()
  {
    return v.size();
  }

  bool isEmpty()
  {
    return v.empty();
  }

  int peek()
  {
    return v.back();
  }
};
