#include <iostream>
#include <string>
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
    void constructPath(TreeNode* root, string path, vector<string>& paths)
    {
        if (root)
        {
            path += to_string(root->val);
            if (!root->left && !root->right)
            {
                paths.push_back(path);
            }
            else
            {
                path += "->";
                constructPath(root->left, path, paths);
                constructPath(root->right, path, paths);
            }
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        constructPath(root, "", paths);
        return paths;
    }
};