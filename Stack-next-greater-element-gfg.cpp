stack<long long>st;
          
         vector<long long>res(n,-1);
         
         
             for(int i=n-1;i>=0;i--){
                 
                 
                while(!st.empty() and st.top()<=arr[i]){
                    
                      st.pop();
                 }
                 
                 if(st.size()>0){
                     res[i]=st.top();
                 }
                 st.push(arr[i]);
             }
             
             return res;
             
