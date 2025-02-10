#include <iostream>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while(left < right) 
        {
            char c = s[right];
            s[right] = s[left];
            s[left] = c;
            right--;
            left++;
        }
    }
};