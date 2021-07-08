1475. Final Prices With a Special Discount in a Shop

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        
        vector<int>res(prices);
        
         int n=res.size();
        
          stack<int>st;
        
        st.push(res[n-1]);
        for(int i=n-2;i>=0;i--){
            
            
            while(st.size()>0 and prices[i]<st.top()){
                
                st.pop();
            }
            
            if(st.size()>0){
                res[i]=prices[i]-st.top();
            }
            st.push(prices[i]);
        }
        
        return res;
    }
};
