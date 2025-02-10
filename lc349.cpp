#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int a[1010], b[1010];
        for (int i = 0; i < nums1.size(); i++)
        {
            if (a[nums1[i]] == 0)
            {
                a[nums1[i]] = 1;
            }
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (b[nums2[i]] == 0)
            {
                b[nums2[i]] = 1;
            } 
        }
        for (int i = 0; i < 1010; i++)
        {
            if (a[i] == b[i] && a[i] == 1)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};