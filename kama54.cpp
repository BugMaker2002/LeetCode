#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    { 
        if (s[i] >= '0' && s[i] <= '9')
        {
            cout << "number";
        }
        else
        {
            cout << s[i];
        }
    }
}