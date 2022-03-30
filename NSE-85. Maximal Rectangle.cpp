class Solution {
public:
    /*    the idea is to use next smallest element monotonic stack property 
      we can get the left and right boundary of rectangle and calculate 
      the rectange area by multilpy height to difference of left and right
      boundaries.
      time complexity O(n)
      space complexity O(n)

*/
    int largestRectangleArea(vector<int>& heights) {
        
            int n=size(heights);
            vector<int>left(n);
            vector<int>right(n);
            stack<int>st;
        
            for(int i=0;i<n;i++){
                
                while(!st.empty() and heights[st.top()]>=heights[i]) st.pop();
                left[i]=st.size()>0?st.top()+1:0;
                st.push(i);
            }
            while(!st.empty()) st.pop();
            for(int i=n-1;i>=0;i--){
                
                while(!st.empty() and heights[st.top()]>=heights[i]) st.pop();
                right[i]=st.size()>0?st.top()-1:n-1;
                st.push(i);
            }
          
            int maxArea=INT_MIN;
            for(int i=0;i<n;i++){
                maxArea=max(maxArea,heights[i]*(right[i]-left[i]+1));
            }
            return maxArea;
            
          
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        
           int n=matrix.size();
           int m=matrix[0].size();
           int maxRectangle=0;
        
            vector<int>dp(m,0);
           for(int i=0;i<n;i++){
               for(int j=0;j<m;j++){
                   dp[j]=matrix[i][j]=='1'?dp[j]+1:0;
               }
             maxRectangle=max(maxRectangle,largestRectangleArea(dp));

           }
           return maxRectangle;
    }
};
