
// Celebrity Problem using stack in  O(n) time Complexity

#include <bits/stdc++.h>
#define n 3
using namespace std;

int find_celeb(int arr[n][n])
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    while (s.size() >= 2)
    {
        int i = s.top();
        s.pop();
        int j = s.top();
        s.pop();
        if (arr[i][j] == 1)
        {
            s.push(j);
        }
        else
        {
            s.push(i);
        }
    }

    int potential = s.top();
    s.pop();

    for (int i = 0; i < n; i++)
    {

        if (i != potential)
        {

            if (arr[i][potential] == 0 || arr[potential][i] == 1)
            {
                return -1;
            }
        }
    }

    return 1;
}

int main()
{

    int mat[n][n] = {{0, 1, 0},
                     {0, 0, 0},
                     {0, 1, 0}};

    cout << find_celeb(mat) << "\n";
    return 0;
}