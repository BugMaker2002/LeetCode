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
    bool result = false;
    void traversal(TreeNode* root, int& sum, int targetSum)
    {
        sum += root->val;
        if (!root->left && !root->right)
        {
            if (targetSum == sum)
            {
                result = true;
            }
            return ;
        }
        if (root->left)
        {
            traversal(root->left, sum, targetSum);
        }
        if (root->right)
        {
            traversal(root->right, sum, targetSum);
        }
        return ;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) 
        {
            return false;
        }
        int sum = 0;
        traversal(root, sum, targetSum);
        return result;
    }
};