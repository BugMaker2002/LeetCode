#include <iostream>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
class Solution {
public:
    int getdepth(Node* root)
    {
        if (!root)
        {
            return 0;
        }
        int depth = 0;
        for (int i = 0; i < root->children.size(); i++)
        {
            depth = max(depth, getdepth(root->children[i]));
        }
        return 1 + depth;
    }
    int maxDepth(Node* root) {
        return getdepth(root);
    }
};