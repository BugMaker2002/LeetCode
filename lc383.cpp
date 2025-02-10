#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> a;
        for (int i = 0; i < magazine.length(); i++)
        {
            a[magazine[i]]++;
        }
        for (int i = 0; i < ransomNote.size(); i++)
        {
            a[ransomNote[i]]--;
        }
        for (auto it = a.begin(); it != a.end(); it++)
        {
            if (it->second < 0)
            {
                return false;
            }
        }
        return true;
    }
};