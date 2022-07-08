//M-00
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)return 0;
        int maxm=1;
        depth(root,maxm,1);
        return maxm;
    }
    void depth(TreeNode* root,int &maxm ,int count ){
        if(!root->left&&!root->right){maxm = max(maxm,count);}
        if(root->left)depth(root->left,maxm,count+1);
        if(root->right)depth(root->right,maxm,count+1);
    }
};
//M-00 ,UPDATED
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        return 1+max(lh,rh);
    }
};

//M-00  One Line Solution
class Solution {
public:
    int maxDepth(TreeNode* root) {
        return (root == nullptr) ? 0 : (1 + max(maxDepth(root->left), maxDepth(root->right)));
    }
};

