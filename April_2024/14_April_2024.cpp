//404. Sum of Left Leaves

#include<bits/stdc++.h>
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
    void inorder(TreeNode* root, int &sum) {
        if (root == NULL)
            return;

        inorder(root->left, sum);
        if (root->left && root->left->left == NULL && root->left->right == NULL)
            sum += root->left->val; 
        inorder(root->right, sum);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        inorder(root, sum);
        return sum;
    }
};
