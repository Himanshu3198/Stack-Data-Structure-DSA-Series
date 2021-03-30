#include<bits/stdc++.h>
using namespace std;
stack<int>st;

void insert_at_bottom(int x){

    if(st.empty()){
        st.push(x);
    }
    else{
        int a=st.top();
        st.pop();
        insert_at_bottom(x);
        st.push(a);


        
     }
}

int main(){

    

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    insert_at_bottom(11);
    insert_at_bottom(12);
    

    while(st.empty()==false){
        cout<<st.top()<<"\n";
        st.pop();
    }
}