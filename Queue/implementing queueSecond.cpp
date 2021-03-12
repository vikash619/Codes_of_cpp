#include <iostream>
using namespace std;
#define N 100

int queue[N];
int front = -1;
int back = -1;

int isEmpty()
{
    if(front == -1 && back == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int  isFull()
{
    if(back == N-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enQueue(int data)
{
    if(isFull())
    {
        cout<<"Queue Overflow";
    }
    else if(isEmpty())
    {
        ++front;
        ++back;
        queue[back] =  data;
    }
    else
    {
         queue[++back] = data;
    }
}

int deQueue()
{
    if(isEmpty())
    {
        return -1;
    }
    else
    {
        int x = queue[front];
        front++;
        return x;
        
    }
}

int peek()
{
    if(isEmpty())
    {
        return -1;
    }
    else
    {
        int x = queue[back];
        return x;
    }
}

int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    cout<<"Deleted Element : "<<deQueue()<<endl;
    cout<<"Deleted Element : "<<deQueue()<<endl;
    cout<<"Deleted Element : "<<deQueue()<<endl;
    cout<<"Peek Element : "<<peek()<<endl;

    return 0;
}
