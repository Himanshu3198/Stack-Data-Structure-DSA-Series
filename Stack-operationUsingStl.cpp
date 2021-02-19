#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){


    stack<int> s;

    s.push(1);
     s.push(2);
      s.push(3);
       s.push(4);
        s.push(5);
         cout<<s.size()<<"\n";
        while(!s.empty()){

            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<"\n";
            cout<<s.size()<<"\n";
        return 0;



}