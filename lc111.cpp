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
        int leftDepth = getdepth(root->left);
        int rightDepth = getdepth(root->right);
        if (!root->left && root->right)
        {
            return 1 + rightDepth;
        }
        if (!root->right && root->left)
        {
            return 1 + leftDepth;
        }
        return 1 + min(leftDepth, rightDepth);
    }
    int minDepth(TreeNode* root) {
        return getdepth(root);
    }
};