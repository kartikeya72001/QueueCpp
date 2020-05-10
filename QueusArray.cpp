#include<iostream>
using namespace std;
class Queue{
    int arr[100];
    int top = 0, bottom = 0;
public:
    int topE()
    {
        return arr[top];
    }
    void pushBack(int d)
    {
        arr[bottom] = d;
        bottom = (bottom+1)%100;
    }
    void popFront()
    {
        top = (top+1)%100;
    }
};
int main()
{
    Queue q;
    q.pushBack(5);
    q.pushBack(9);
    q.pushBack(7);
    q.pushBack(3);
    q.pushBack(4);
    cout<<q.topE()<<" ";
    q.popFront();
    cout<<q.topE()<<" ";
    return 0;
}
