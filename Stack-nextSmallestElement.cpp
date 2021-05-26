
// next smallest element in array using stack in cpp
// time complexity O(n)

#include<bits/stdc++.h>
using namespace std;

void NSE(vector<int>&v,int n){

    stack<int>s;

    s.push(n-1);
    vector<int>nse(n,-1);

    for(int i=n-2;i>=0;i--){

        while(s.size()>0 and v[s.top()]>v[i]){
           s.pop();
        }

        if(s.size()==0){
            nse[i]=-1;
        }
        else{
            nse[i]=v[s.top()];
        }

        s.push(i);
    }

    for(auto it:nse){
        cout<<it<<" ";
    }

  


}

int main(){



    // vector<int> v={11,13,21,3};
     vector<int> v={4,8,5,2,25};
    int n=v.size();
    NSE(v,n);
    return 0;
}


