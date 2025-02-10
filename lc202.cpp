#include <iostream>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int cal(int n)
    {
        int sum = 0;
        while(n > 0)
        {
            int k = n % 10;
            sum += k * k;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int>a;
        a.insert(n);
        if (n == 1)
        {
            return true;
        }
        else
        {
            while (true)
            {
                n = cal(n);
                if (n == 1)
                {
                    return true;
                }
                else
                {
                    if (a.count(n) > 0)
                    {
                        return false;
                    }
                }
                a.insert(n);
            }
        }
    }
};
int main()
{
    int n = 19;
    Solution s;
    s.isHappy(n);
}