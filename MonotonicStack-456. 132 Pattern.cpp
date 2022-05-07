class Solution {
public:
    
/* In this problem we need three number s1,s2,s3 such that  s2>s1 && s2>s3 && s3>s1

   for the first s1 we will keep track minimum element so far so that we get s2 and s3 >s1
   
    for s3 we take stack to store element which is greater s1 because any element smaller than
    s1 will not contribute to the answer
    
    Now finally for s2  we get while traversing the vector
    
    the values that will be our answer will be like this
     
     let say we at index  i  nums[i]>miniSoFar[i] && st.top()>miniSoFar[i];
     
     Time Complexity O(n)
     Space Complexity O(2n) for vector and stack
    */
    bool find132pattern(vector<int>& nums) {    
            int n=nums.size();
            stack<int>st;
            vector<int>minSoFar(n);
            int minEle=INT_MAX;
            for(int i=0;i<n;i++){
                 minEle=min(minEle,nums[i]);
                 minSoFar[i]=minEle;
            }
            st.push(nums[n-1]);
            for(int i=n-2;i>=0;i--){
//                 pop out the element from stack that are greater than minSoFar
                  while(!st.empty() && st.top()<=minSoFar[i]) st.pop();
                        
                      if(!st.empty() &&st.top()>minSoFar[i] 
                         && nums[i]>minSoFar[i] && nums[i]>st.top()) return true;
                         st.push(nums[i]);
            
            }
            return false;
    }
};
