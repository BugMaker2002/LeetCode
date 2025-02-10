#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
        int a[26];
        int b[26];
        for (int i = 0; i < words[0].length(); i++)
        {
            a[words[0][i] - 'a']++;
        }
        for (int i = 1; i < words.size(); i++)
        {
            for (int j = 0; j < 26; j++)
            {
                b[j] = 0;
            }
            for (int j = 0; j < words[i].length(); j++)
            {
                if (a[words[i][j] - 'a'] > 0) 
                {
                    b[words[i][j] - 'a']++;
                }
            }
            for (int j = 0; j < 26; j++)
            {
                a[j] = min(a[j], b[j]);
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != 0)
            {
                for (int j = 0; j < a[i]; j++)
                {
                    char c = i + 'a';
                    string str(1, c);
                    result.push_back(str);
                }
            }
        }
        return result;
    }
};
int main()
{
    cout << 0 + 'a' << endl;
}