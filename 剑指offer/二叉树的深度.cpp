/*
输入一棵二叉树，求该树的深度。
从根结点到叶结点依次经过的结点（含根、叶结点）形成树的一条路径，最
长路径的长度为树的深度。
*/ 



class Solution {
public:
    int TreeDepth(TreeNode* pRoot)
    {
        if(!pRoot){
            return 0;
        }
        return max(1 + TreeDepth(pRoot->left), 1 + TreeDepth(pRoot->right));
    }
};
