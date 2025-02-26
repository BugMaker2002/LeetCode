#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26];
        for (int i = 0; i < s.length(); i++)
        {
            a[s[i] - 'a'] ++;
        }
        for (int i = 0; i < t.length(); i++)
        {
            a[t[i] - 'a'] --;
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != 0)
            {
                return false;
            }  
        }
        return true;
    }
};
