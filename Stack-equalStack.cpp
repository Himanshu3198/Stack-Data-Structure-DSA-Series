//Equal Stacks 
//https://www.hackerrank.com/challenges/equal-stacks/problem
// time complexityo(n1+n2+n3)



int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
       for(int i=h1.size()-2;i>=0;i--) h1[i]+=h1[i+1];
 for(int i=h2.size()-2;i>=0;i--) h2[i]+=h2[i+1]; 
 for(int i=h3.size()-2;i>=0;i--) h3[i]+=h3[i+1];

 std::reverse(h1.begin(),h1.end());
 std::reverse(h2.begin(),h2.end());
 std::reverse(h3.begin(),h3.end());

stack<int> st1,st2,st3;
for(int i=0;i<h1.size();i++) st1.push(h1[i]);
for(int i=0;i<h2.size();i++) st2.push(h2[i]);
for(int i=0;i<h3.size();i++) st3.push(h3[i]);

while(true){
if(st1.empty() || st2.empty() || st3.empty()) return 0;

if(st1.top()==st2.top() && st2.top()==st3.top()){
    return st1.top();
}
else{
    if(st1.top()>=st2.top() && st1.top()>=st3.top()) st1.pop();
    else if(st2.top()>=st1.top() && st2.top()>=st3.top()) st2.pop();
    else st3.pop();
}
}
        
}
