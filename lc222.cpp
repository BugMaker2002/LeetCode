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
    int countNodes(TreeNode* root) {
        queue<TreeNode*> q;
        if (!root) 
        {
            return 0;
        }
        q.push(root);
        int count = 0;
        while (!q.empty())
        {
            int size = q.size();
            count += size;
            for (int i = 0; i < size; i++)
            {
                if (q.front()->left)
                {
                    q.push(q.front()->left);
                }
                if (q.front()->right)
                {
                    q.push(q.front()->right);
                }    
                q.pop();
            }
        }
        return count;
    }
};