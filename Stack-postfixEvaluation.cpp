// evaluation of post fix expression using stack in cpp
// time comolexity O(n)
#include<bits/stdc++.h>
#include<string>
using namespace std;

bool isOperator(char c){

    if(c=='+' || c=='-'||c=='*'|| c=='/'){
        return true;
    }
    else
       return false;
}

bool isNumeric(char c){
    if(c>='0' && c<='9')
         return true;
    else return false;
}

int perform_Operation(char c,int a,int b){
    if(c=='+'){
        return (a + b);
    }
     if(c=='-'){
        return (a - b);
    }
     if(c=='*'){
        return (a * b);
    }
    else{

          return (a  / b);
    }

    return -1;
}

int Evaluate_Prefix(string exp,int n){

   stack<int>s;
    for(int i=0;i<n;i++){
        if(isOperator(exp[i])){

             int operand2=s.top();s.pop();
             int operand1=s.top();s.pop();
             int result=perform_Operation(exp[i],operand1,operand2);
             s.push(result);
        }

        else if(isNumeric(exp[i])){

            // s.push(exp[i]-'0');

            int operand=0;
            while(i<n && isNumeric(exp[i])){
                operand=operand*10+(exp[i]-'0');
                i++;


            }
            i--;
            s.push(operand);
        }
        else{
            continue;
        }
    }
    return s.top();
}

int main(){


//   string expression="231*+9-";
  string expression=   "100 200 + 2 / 5 * 7 +";
  int length=expression.length();
  cout<<Evaluate_Prefix(expression,length)<<"\n";

    return 0;
}





// simple solution


 int evaluatePostfix(string s)
    {
        // Your code here
        stack<int>st;
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='*' or s[i]=='/' or s[i]=='+' or s[i]=='-'){
                
                int second=st.top();
                st.pop();
                int  first=st.top();
                st.pop();
                switch(s[i]){
                    
                    case  '+':
                     st.push(first+second);
                     break;
                    case '-':
                     st.push(first-second);
                     break;
                    case '*':
                     st.push(first*second);
                     break;
                    case '/':
                     st.push(first/second);
                     break;
                }
           
                
            }
            else{
                
                st.push(s[i]-'0');
            }
            
        }
        
    
        return st.top();
        
        
    }




