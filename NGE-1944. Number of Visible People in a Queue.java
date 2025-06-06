class Solution {
    public int[] canSeePersonsCount(int[] heights) {
 
       int n = heights.length;
       Stack<Integer> st = new Stack<>();
       int [] res = new int [n];
       Arrays.fill(res,0);

       st.push(heights[n-1]);

       for(int i=n-2;i>=0;i--){
           int count = 0;
           while(!st.isEmpty() && st.peek()< heights[i]){
            st.pop();
            count++;
           }
           if(st.size()>0) count++;
           res[i] = count;
           st.push(heights[i]);
       }

       return res;
        
    }
}
