#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> con;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                con.push(s[i]);
            }
            else
            {
                if (con.empty())
                {
                    return false;
                }
                if (s[i] == '}' && con.top() == '{' || s[i] == ']' && con.top() == '[' || s[i] == ')' && con.top() == '(')
                {
                    con.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return con.empty();
    }
};