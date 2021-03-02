// check for balanced parenthesis using stack

// time complexity is O(n) n-length of string
#include <bits/stdc++.h>

using namespace std;

bool areBalanced(char opening, char closing)
{
    if (opening == '(' && closing == ')')
        return true;
    else if (opening == '{' && closing == '}')
        return true;
    else if (opening == '[' && closing == ']')
        return true;

    return false;
}

bool check_parenthesis(string str)
{

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == '{' || str[i] == '(' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else if (str[i] == '}' || str[i] == ')' || str[i] == ']')
        {

            if (s.empty() || !areBalanced(s.top(), str[i]))
            {
                return false;
            }
            else{
                s.pop();
            }
           
              

        }
    }

    return s.empty() ? true : false;
}
int main()
{

    string str = "{{([])}}";

    if (check_parenthesis(str))
    {
        cout << "yes\n";
    }
    else
    {
        cout << "no\n";
    }

    return 0;
}