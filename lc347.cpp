#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int> > q;
        unordered_map<int, int> m;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (auto pair : m)
        {
            q.emplace(pair.second, pair.first);
        }
        while (!q.empty() && k > 0)
        {
            ans.push_back(q.top().second);
            q.pop();
            k--;
        }
        return ans;
    }
};