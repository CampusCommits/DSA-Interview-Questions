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
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            if(root==NULL) return {};
            vector<vector<int>> ans;
            queue<TreeNode*> qu;
            qu.push(root);
            while(!qu.empty()){
                int s=qu.size(); // no. of nodes in nth level
                vector<int> nthLevelNodes;
                for(int i=0;i<s;i++){
                    auto curr=qu.front();
                    nthLevelNodes.push_back(curr->val);
                    qu.pop();
                    if(curr->left) qu.push(curr->left);
                    if(curr->right) qu.push(curr->right);
                }
                ans.push_back(nthLevelNodes);
            }
        return ans;
    }
};