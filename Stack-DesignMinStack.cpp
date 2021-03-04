// Design special stack with getmin in O(1) time time and O(1) space

#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int minEle;

void push(int x)
{

    if (s.empty())
    {
        minEle = x;
        s.push(x);

        cout  << x<<"push into the stack\n";
    }

    else
    {

        if (x < minEle)
        {
            s.push(2 * x - minEle);
            minEle = x;
        }
        else
        {
            s.push(x);
            cout << x << " push into the stack\n";
        }
    }
}

void pop()
{

    if (s.empty())
    {

        cout << "stack is empty\n";
    }
    else
    {
        int t = s.top();
        s.pop();
        if (t < minEle)
        {

            minEle = 2 * minEle - t;
        }
        else
        {
            cout << "pop element is " << t << "\n";
        }
    }
}

void getMin()
{

    if (s.empty())
    {
        cout << "Stack is empty ";
        return;
    }

    else
    {
        cout << minEle << "\n";
    }
}

int main()
{
     push(8);
      push(10);
       push(6);
        push(3);
         push(7);
         pop();
         pop();

         getMin();

    return 0;
}