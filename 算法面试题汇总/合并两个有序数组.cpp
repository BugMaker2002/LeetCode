#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n > 0)
        {
            for (int i = m; i < nums1.size(); i ++)
            {
                nums1[i] = nums2[i - m];
            }
        }
        sort(nums1.begin(), nums1.end());
    }
};
int main()
{
    Solution solution;
    vector<int> nums1 = {0}, nums2 = {1};
    int m = 0, n = 1;
    solution.merge(nums1, m, nums2, n);
    for (int i = 0; i < m + n; i++)
    {
        cout << nums1[i] << " ";
    }
}