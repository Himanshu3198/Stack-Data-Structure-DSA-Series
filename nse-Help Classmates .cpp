 
//  time complexity O(n)
//  space complexity O(n)
vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        
        
           vector<int>res(n,-1);
           
           stack<int>st;
           
           for(int i=n-1;i>=0;i--){
               
               while(!st.empty() and st.top()>=arr[i]){
                   
                   st.pop();
               }
               
               if(st.size()>0){
                  res[i]=st.top();
                  
               }
               st.push(arr[i]);
           }
           
           return res;
    } 
