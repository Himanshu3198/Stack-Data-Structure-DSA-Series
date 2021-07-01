// 901. Online Stock Span




/* the idea is to push prices into the stack and for every iteration  and check if the top element of the stack is lesser or equal to the current price  if yes then add it  
no. of days(when the price is lesser than current-day  i.e count)
else return 1 it means if we did not found the lesser price in the previous days than the current day  */

class StockSpanner {
public:
    StockSpanner() {
        
    }
    
    stack<pair<int,int>>st;
    
    int next(int price) {
        int count=1;
        
        while(!st.empty() and st.top().first<=price){
            
            count+=st.top().second;
            st.pop();
        }
        st.push({price,count});
        
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
