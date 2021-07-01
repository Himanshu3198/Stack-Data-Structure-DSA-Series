
// 1209. Remove All Adjacent Duplicates in String II

class Solution {
public:
    
    /*the idea is to push string character into the stack itratively and  and check its frequency 
 if the frequency of the character become equal to k then pop out from the stack in the end stack contain either unique  
 chacracter or same character but at different indices then simply add character from the stack to the result string using inbuilt 
 string (n,c) function and reverse and return it  */
    string removeDuplicates(string s, int k) {
     
        
        
           stack<pair<char,int>>st;
        
        
        for(int i=0;i<s.length();i++){
            
            
            if(st.empty()==1 and i!=s.length()-1){
                st.push({s[i],1});
            }
            else if(!st.empty()  and st.top().first!=s[i]){
                 st.push({s[i],1});   
            } 
            else if(!st.empty() and s[i]==st.top().first){
                
                st.top().second++;
            }
            
            
            if(st.top().second==k){
                st.pop();
            }
           
        }
          string res="";
        while(!st.empty()){
            
            
            res+=string(st.top().second,st.top().first);
            st.pop();
            
        }
        
        reverse(res.begin(),res.end());
        
        return res;
    }
};
