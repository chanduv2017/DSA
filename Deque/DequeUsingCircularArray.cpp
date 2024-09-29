//circular buffer

class Deque
{
public:
  int *arr;
  int front, cap, size;
  Deque(int c)
  {
    arr = new int[c];
    cap = c;
    size = 0;
    front = 0;
  }

  bool insertFront(int value)
  {
    if (isFull())
      return false;
    front = (front + cap - 1) % cap;
    arr[front] = value;
    size++;
    return true;
  }

  bool insertRear(int value)
  {
    if (isFull())
      return false;
    int new_rear = (front + size) % cap;
    arr[new_rear] = value;
    size++;
    return true;
  }

  bool deleteFront()
  {
    if (isEmpty())
      return false;
    front = (front + 1) % cap;
    size--;
    return true;
  }

  bool deleteRear()
  {
    if (isEmpty())
      return false;
    size--;
    return true;
  }

  int getFront()
  {
    if (isEmpty())
      return -1;
    return arr[front]; ////can return index or value
  }

  int getRear()
  {
    if (isEmpty())
      return -1;
    return arr[(front + size - 1) % cap]; // can return index or value
  }

  bool isEmpty()
  {
    if (size == 0)
      return true;
    return false;
  }

  bool isFull()
  {
    if (size == cap)
      return true;
    return false;
  }
};
