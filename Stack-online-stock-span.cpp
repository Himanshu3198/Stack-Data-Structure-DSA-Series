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

// python

class StockSpanner:

    def __init__(self):
        self.st = []

    def next(self, price: int) -> int:
        curr_count = 1
        while self.st and self.st[-1][0] <= price:
            curr_count +=self.st[-1][1]
            self.st.pop()
        self.st.append((price,curr_count))
        return curr_count
            
        


# Your StockSpanner object will be instantiated and called as such:
# obj = StockSpanner()
# param_1 = obj.next(price)

    // java code

    class StockSpanner {
   
    private Stack<Pair> st;
    public StockSpanner() {
         this.st = new Stack<>();

    }
    
    public int next(int price) {
        
        int currCount = 1;

        while(!st.isEmpty() && st.peek().price <= price){
            currCount += st.pop().count;
        }
        st.push(new Pair(price,currCount));

        return currCount;
    }
}

class Pair{
    int price;
    int count;

    public Pair(int price,int count){
        this.price = price;
        this.count = count;
    }
}
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner();
 * int param_1 = obj.next(price);
 */
