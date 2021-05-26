
// Next greater element in array using stack in cpp
// time complexity O(n)
#include <bits/stdc++.h>
using namespace std;

void NGE(int *arr, int n)
{

      
        stack<long long>st;
        st.push(n-1);
        vector<long long>nge(n,-1);
        
        
        for(int i=n-2;i>=0;i--){
            
            while(st.size()>0 and arr[i]>arr[st.top()]){
                st.pop();
            }
            
            if(st.size()==0){
                nge[i]=-1;
            }
            else{
                nge[i]=arr[st.top()];
            }
            
            st.push(i);
        }
        
        return nge;

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
