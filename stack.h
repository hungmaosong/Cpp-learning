#ifndef STACK_H
#define STACK_H

//template class for stack
template <typename T>
class Stack
{
private:
    int top;
    int size;
    T *StackPtr;
public:
    Stack(int = 10);
    ~Stack(){
        delete[] StackPtr;
    }

    bool push(const T &);
    bool pop(T &);
    bool isEmpty() const{
        return top == -1;
    }
    bool isFull() const{
        return top == size - 1;
    }
};

template <typename T>
Stack<T>::Stack(int s) : size(s > 0 ? s : 10), top(-1), StackPtr(new T[size])
{
   
}

template <typename T>
bool Stack<T>::push(const T &val)
{
    if (!isFull())
    {
        StackPtr[++top] = val;
        return true;
    }
    return false;
}

template <typename T>
bool Stack<T>::pop(T &val)
{
    if (!isEmpty())
    {
        val = StackPtr[top--];
        return true;
    }
    return false;
}

#endif // Stack_H