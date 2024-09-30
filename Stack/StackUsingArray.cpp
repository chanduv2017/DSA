#include <iostream>
using namespace std;

class MyStack
{
  int *arr;
  int cap;
  int top;

  MyStack(int c)
  {
    cap = c;
    arr = new int[cap];
    top = -1;
  }

  void push(int x)
  {
    if (top == cap - 1)
    {
      cout << "Overflow Condition" << endl;
      return;
    }
    top++;
    arr[top] = x;
  }

  int pop()
  {
    if (top == -1)
    {
      cout << "Underflow Condition" << endl;
    }
    int res = arr[top];
    top--;
    return res;
  }

  int peek()
  {
    if (top == -1)
    {
      cout << "Stack is Empty" << endl;
    }
    return arr[top];
  }

  int size()
  {
    return top + 1;
  }

  bool isEmpty()
  {
    return (top == -1);
  }
};