#include <iostream>
#include <queue>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left <= right && s[left] == ' ') {
            left++;
        }
        while (left <= right && s[right] == ' ') 
        {
            right--;
        }
        deque<string> words;
        string word;
        while(left <= right)
        {
            char c = s[left];
            if (word.size() && c == ' ') 
            {
                words.push_front(word);
                word = "";
            }
            if (c != ' ')
            {
                word += c;
            }
            left++;
        }
        string ans;
        while(!words.empty())
        {
            s = words.front();
            ans += s;
            words.pop_front();
            if (!words.empty())
            {
                s += ' ';
            }
        }
        return ans;
    }
};