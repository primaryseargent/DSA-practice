#include <bits/stdc++.h>
using namespace std;
class stackusingarray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    stackusingarray()
    {
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
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
            int *newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newData;
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
using namespace std;
int main()
{
    stackusingarray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.top() << endl;
}