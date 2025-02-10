#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.length(); i += 2 * k)
        {
            int len = s.length() - i;
            if (len <= k)
            {
                reverse(s.begin() + i, s.end());
            }
            else if (len > k)
            {
                reverse(s.begin() + i, s.begin() + k + i);
            }
        }
        return s;
    }
};