#include <bits/stdc++.h>
using namespace std;

void printPair(pair<int, int> p)
{
    cout << "(" << p.first << " " << p.second << ")"
         << "\n";
}

void display(stack<pair<int, int>> s)
{

    while (!s.empty())
    {
        printPair(s.top());
        s.pop();
    }
}
int main()
{

    stack<pair<int, int>> s;
    s.push({10, 20});
    s.push({30, 40});
    s.push({50, 60});
    s.push({70, 80});
    s.push({90, 100});

    display(s);

    return 0;
}