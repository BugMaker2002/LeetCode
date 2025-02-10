#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> stk;
        int ans = 0;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                int num1 = stoi(stk.top());
                stk.pop();
                int num2 = stoi(stk.top());
                stk.pop();
                if (tokens[i] == "+")
                {
                    stk.push(to_string(num1 + num2));
                }
                else if (tokens[i] == "*")
                {
                    stk.push(to_string(num1 * num2));
                }
                else if (tokens[i] == "/")
                {
                    stk.push(to_string(num2 / num1));
                }
                else if (tokens[i] == "-")
                {
                    stk.push(to_string(num2 - num1));
                }
            }
            else
            {
                stk.push(tokens[i]);
            }
        }
        return stoi(stk.top());
    }
};