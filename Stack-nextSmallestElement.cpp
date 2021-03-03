
// next smallest element in array using stack in cpp
// time complexity O(n)
#include<bits/stdc++.h>
using namespace std;

void NSE(vector<int>&v,int n){

    stack<int>s;

    s.push(v[0]);

    for(int i=1;i<n;i++){

        

        while(s.empty()==false && s.top()>v[i]){

            cout<<s.top()<<"->"<<v[i]<<"\n";
            s.pop();
        }

        s.push(v[i]);
    }
    while(s.empty()==false){

        cout<<s.top()<<"->"<<-1<<"\n";
        s.pop();
    }


}

int main(){



    vector<int> v={11,13,21,3};
    int n=v.size();

    NSE(v,n);
    return 0;
}


