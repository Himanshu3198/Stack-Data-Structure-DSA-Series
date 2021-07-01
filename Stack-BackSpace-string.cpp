844. Backspace String Compare


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        
        stack<char>st1;
        stack<char>st2;
        
         string res1="",res2="";
        
        for(char c:s){
            
            st1.push(c);
        }
        
        for(char c:t){
            st2.push(c);
        }
        
        int count=0;
        while(!st1.empty()){
            
            char curr;
            
            curr=st1.top();
            st1.pop();
            if(curr=='#') count++;
            
            
            
           
            
            if( count>0 and  curr!='#'){
                count--;
            }
            else if(count<=0 and curr!='#') res1+=curr;
        }
        
          count=0;
         while(!st2.empty()){
            
            char curr;
            
            curr=st2.top();
            st2.pop();
             if(curr=='#') count++;
        
            
            if( count>0 and  curr!='#'){
                count--;
            }
            else if(count<=0 and curr!='#') res2+=curr;
        }
        
        cout<<res1<<" "<<res2;
        return res1==res2;
    }
};
