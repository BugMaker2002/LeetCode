#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>map;
        int lens = nums.size();
        for (int i = 0; i < lens; i++)
        {
            //此处不用像python那样去判断字典对应的key是否存在，我们直接引用即可
            map[nums[i]] ++;
        }
        for (int i = 0; i < lens; i++)
        {
            if (map[nums[i]] == 1)
            {
                return nums[i];
            }
        }
        return 0;
    }
    //下面介绍最简单的方法：位运算，不懂的话可以去查看解析https://leetcode.cn/problems/single-number/solutions/242211/zhi-chu-xian-yi-ci-de-shu-zi-by-leetcode-solution/
    int singleNumber2(vector<int>& nums) {
        int single = 0;
        for (int i: nums)
        {
            single ^= i;
        }
        return single;
    }
};
int main()
{
    vector<int> nums = {2,2,1};
    Solution solution;
    cout << solution.singleNumber2(nums);
}