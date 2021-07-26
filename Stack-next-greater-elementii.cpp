// 503. Next Greater Element II

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        
         int n=nums.size();
        
        vector<int>nge(n,-1);
        
        stack<int>st;
        
        
       for(int i=n-1;i>=0;i--){
           
           st.push(nums[i]);
       }
        
         int i;
        for( i=n-1;i>=0;i--){
            
            while(!st.empty() and nums[i]>=st.top()){
                
                st.pop();
                
                
            }
            
            if(st.size()==0){
                nge[i]=-1;
            }
            if(st.size()>0){
                
                nge[i]=st.top();
            }
            
            st.push(nums[i]);
            
        }
        
        return nge;
    }
};
