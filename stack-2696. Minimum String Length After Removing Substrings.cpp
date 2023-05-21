class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
            while(st.size()>=2){
                char sec=st.top();
                st.pop();
                char first=st.top();
                st.pop();
                string temp="";
                temp+=first;
                temp+=sec;
                if(temp=="AB" || temp=="CD"){
                   continue;
                }else {
                    st.push(first);
                    st.push(sec);
                    break;
                }
            }
        }
        
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        // reverse(ans.begin(),ans.end());
        return ans.size();
    }
};
