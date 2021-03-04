#include <bits/stdc++.h>
using namespace std;

void  SlidingWindowMax(int *arr, int n,int k)
{

    stack<int> s;
    int nge[n];
      s.push(n-1);
    //   s.push(n-1);
      nge[n-1]=n;

    for (int i =n-2; i >= 0; i--)
    {
       while(s.size()>0 && arr[i]>=arr[s.top()]){
         s.pop();
       }

       if(s.size()==0){
           nge[i]=n;

       }
       else{
           nge[i]=s.top();
            //  nge[i]=arr[s.top()];
       }
       s.push(i);

    }

    // for(int i=0;i<n;i++){
    //     cout<<nge[i]<<" ";
    // }

     int j=0;
    for(int i=0;i<=n-k;i++){
        if(j<i){
            j=i;
        }
        while(nge[j]<i+k){
            j=nge[j];

        }
        // cout<<arr[j]<<" ";
    }
    cout<<"\n";
}
int main()
{

    int arr[] = {1,3,-1,-3,5,3,6,7};
    // int arr[] = {1};
    int k=3;
    int n = sizeof(arr) / sizeof(arr[0]);
    SlidingWindowMax(arr, n,k);
}