#include <bits/stdc++.h>
using namespace std;

void NGE(int *arr, int n)
{

    stack<int> s;
    int nge[n];
    for (int i = 0; i < n; i++)
    {
        nge[i] = -1;
    }
    s.push(0);

    for (int i = 1; i < n; i++)
    {

        if (arr[i] <= arr[s.top()])
        {
            s.push(i);
        }
        else
        {

            //   nge[i]=arr[i];

            while (1)
            {
                if (arr[i] > arr[s.top()])
                {
                    nge[s.top()] = arr[i];
                    s.pop();
                }
                else
                {
                    break;
                }
            }
            if (arr[i] < arr[s.top()])
            {
                s.push(i);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << nge[i] << " ";
    }
    cout << "\n";
}
int main()
{

    int arr[] = {11, 13, 21, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    NGE(arr, n);
}