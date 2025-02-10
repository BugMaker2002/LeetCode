#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    string ans = s.substr(s.length() - k, s.length()) + s.substr(0, s.length() - k);
    cout << ans;
}