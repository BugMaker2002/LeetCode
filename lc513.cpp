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
// class Solution {
// public:
//     int findBottomLeftValue(TreeNode* root) {
//         queue<TreeNode*> q;
//         if (root)
//         {
//             q.push(root);
//         }
//         int result = 0;
//         while (!q.empty())
//         {
//             int size = q.size();
//             for (int i = 0; i < size; i++)
//             {
//                 TreeNode* node = q.front();
//                 q.pop();
//                 if (i == 0)
//                 {
//                     result = node->val;
//                 }
//                 if (node->left)
//                 {
//                     q.push(node->left);
//                 }
//                 if (node->right)
//                 {
//                     q.push(node->right);
//                 }
//             }
//         }
//         return result;
//     }
// };
class Solution {
public:
    int maxDepth = INT32_MIN;
    int result;
    void traversal(TreeNode* root, int depth)
    {
        if (!root->left && !root->right)
        {
            if (depth > maxDepth)
            {
                maxDepth = depth;
                result = root->val;
            }
            return;
        }
        if (root->left)
        {
            traversal(root->left, depth + 1);
        }
        if (root->right)
        {
            traversal(root->right, depth + 1);
        }
        return;
    }
    int findBottomLeftValue(TreeNode* root) {
        traversal(root, 0);
        return result;
    }
};