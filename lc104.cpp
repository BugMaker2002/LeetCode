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
    int getdepth(TreeNode* root)
    {
        if (!root)
        {
            return 0;
        }
        int d1 = getdepth(root->left);
        int d2 = getdepth(root->right);
        return 1 + max(d1, d2);
    }
    int maxDepth(TreeNode* root) {
        return getdepth(root);
    }
};