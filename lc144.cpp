#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    void traversal(TreeNode* cur, vector<int>& results)
    {
        if (cur == NULL) 
        {
            return;
        }
        results.push_back(cur->val);
        traversal(cur->left, results);
        traversal(cur->right, results);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> results;
        traversal(root, results);
        return results;
    }
};