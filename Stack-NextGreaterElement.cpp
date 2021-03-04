
// Next greater element in array using stack in cpp
// time complexity O(n)
#include <bits/stdc++.h>
using namespace std;

void NGE(int *arr, int n)
{

    stack<int> s;
    int nge[n];
      s.push(n-1);
      s.push(n-1);
      nge[n-1]=-1;

    for (int i =n-2; i >= 0; i--)
    {
       while(s.size()>0 && arr[i]>=arr[s.top()]){
         s.pop();
       }

       if(s.size()==0){
           nge[i]=-1;

       }
       else{
           nge[i]=s.top();
             nge[i]=arr[s.top()];
       }
       s.push(i);

    }

    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
}
int main()
{

    int arr[] = {11, 13, 21, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    NGE(arr, n);
}
