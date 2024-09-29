#include <bits/stdc++.h>
using namespace std;

class Deque
{
public:
  int size, cap;
  int *arr;
  Deque(int c)
  {
    cap = c;
    size = 0;
    arr = new int[cap];
  }

  bool isFull()
  {
    return (size == cap);
  }

  bool isEmpty()
  {
    return (size == 0);
  }

  void insertRear(int x)
  {
    if (isFull())
      return;
    arr[size] = x;
    size++;
  }

  void insertFront(int x)
  {
    if (isFull())
      return;
    for (int i = size - 1; i >= 0; i--)
    {
      arr[i + 1] = arr[i];
    }
    arr[0] = x;
    size++;
  }
  void deleteRear()
  {
    if (isEmpty())
      return;
    size--;
  }

  void deleteFront()
  {
    if (isEmpty())
      return;
    for (int i = 0; i < size - 1; i++)
    {
      arr[i] = arr[i + 1];
    }
    size--;
  }

  int getRear()
  {
    if (isEmpty())
      return -1;
    return (size - 1); // returns index of rear
  }
  int getFront()
  {
    if (isEmpty())
      return -1;
    return 0; // returns index of front element
  }
};
