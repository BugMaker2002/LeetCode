#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
    int minLength = INT32_MAX;
    int sum = 0;
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        sum += nums[j];
        while (sum >= target)
        {
            int result = j - i + 1;
            minLength = minLength < result ? minLength : result;
            sum -= nums[i++];
        }
    }
    return minLength == INT32_MAX ? 0 : minLength;
}