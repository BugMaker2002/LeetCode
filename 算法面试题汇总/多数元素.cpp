#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i ++)
        {
            map[nums[i]] ++;
        }
        for(auto [key, value]: map)
        {
            if(value > n / 2)
            {
                ans = key;
            }
        }
        return ans;
    }
    int majorityElement2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n / 2];
    }
};
int main()
{
    vector<int> nums = {2,2,1,1,1,2,2};
    Solution solution;
    cout << solution.majorityElement(nums);
}