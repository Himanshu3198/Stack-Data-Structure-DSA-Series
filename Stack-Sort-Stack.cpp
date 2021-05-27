// Sort a stack  using recursion
void insert(stack<int>&s,int x){
    
    if(s.size()==0 or x> s.top()){
        s.push(x);
        
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,x);
    s.push(temp);
}
void SortedStack :: sort()
{
    
    if(!s.empty()){
        
        int temp=s.top();
        s.pop();
        sort();
        insert(s,temp);
    }
    
}

// method 2nd
void SortedStack :: sort()
{
   //Your code here
      vector<int>res;
      
      while(!s.empty()){
          
          int x=s.top();
             s.pop();
          res.push_back(x);
      }
      std::sort(res.begin(),res.end());
      
      for(auto it:res){
          s.push(it);
      }
}
