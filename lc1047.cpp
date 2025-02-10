#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> con;
        for (int i = 0; i < s.length(); i++)
        {
            if (!con.empty())
            {
                if (con.top() == s[i])
                {
                    con.pop();
                }
                else
                {
                    con.push(s[i]);
                }
            }
            else
            {
                con.push(s[i]);
            }
        }
        string ans;
        while(!con.empty())
        {
            ans = con.top() + ans;
            con.pop();
        }
        return ans;
    }
};