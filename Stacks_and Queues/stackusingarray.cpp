#include <bits/stdc++.h>
using namespace std;
class stackusingarray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    stackusingarray(int totalsize)
    {
        data = new int[totalsize];
        nextIndex = 0;
        capacity = totalsize;
    }

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    void push(int element)
    {
        if (capacity == nextIndex)
        {
            cout << "Stack is full!" << endl;
            return;
        }
        data[nextIndex++] = element;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};