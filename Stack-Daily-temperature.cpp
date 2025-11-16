
// 739. Daily Temperatures

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        
        
        int n=temp.size();
        
        
        stack<pair<int,int>>st;
        
        vector<int>nge(n,0);
        
        
        st.push({temp[n-1],n-1});
        
        
        for(int i=n-2;i>=0;i--){
            
            
            while(!st.empty() and temp[i]>=st.top().first){
                st.pop();
            }
            
            if(!st.empty()){
                
                nge[i]=abs(i-st.top().second);
            }
            
            st.push({temp[i],i});
        }
        
        return nge;
    }
};

// python code

class Solution:
    def dailyTemperatures(self, temp: List[int]) -> List[int]:

        n = len(temp)
        st = []
        st.append(n-1)
        ans = [0]*n

        for i in range (n-2,-1,-1):

            while st and temp[st[-1]] <= temp[i]:
                st.pop()
                
            ans[i] = st[-1]-i if st else 0
            st.append(i)
        
        return ans
        
