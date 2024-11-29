#include <bits/stdc++.h>
using namespace std;

int st[10];
int to = -1;

void push(int x)
{
    if (to == 10)
    {
        cout << "stack overflow!";
    }
    else
    {
        to++;
        st[to] = x;
    }
}
void pop()
{
    if (to == -1)
    {
        cout << "stack is empty";
    }
    else
    {
        st[to] = NULL;
        to = to - 1;
    }
}
void display()
{
    for (int i = 0; i < to; i++)
    {
        cout << st[i] << endl;
    }
}
void top()
{
    cout << st[to] << endl;
}
int main()
{
    push(2);
    push(4);
    push(6);
    push(8);
    pop();
    // top();
    display();
}