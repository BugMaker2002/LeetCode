#include <iostream>
#include <queue>
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
    int getHeight(TreeNode* root)
    {
        if (!root) 
        {
            return 0;
        }
        int leftDepth = getHeight(root->left);
        if (leftDepth == -1)
        {
            return -1;
        }
        int rightDepth = getHeight(root->right);
        if (rightDepth == -1)
        {
            return -1;
        }
        if (abs(leftDepth - rightDepth) > 1)
        {
            return -1;
        }
        else
        {
            return 1 + max(leftDepth, rightDepth);
        }
    }
    bool isBalanced(TreeNode* root) {
        return getHeight(root) == -1 ? false : true;
    }
};