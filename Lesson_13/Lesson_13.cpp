#include <iostream>
#include <queue>
#include <deque>
#include "MyQueue.h"

int main()
{
    myQueue::Queue<int> a;
    a.push_back(7);
    a.push_back(4);
    a.push_back(9);
    a.push_back(2);

    while (!a.isEmpty())
    {
        cout << "First: " << a.first() << endl;
        a.show();
        a.pop_front();
    }
    a.show();
}