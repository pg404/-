/*
����һ�ö����������������ȡ�
�Ӹ���㵽Ҷ������ξ����Ľ�㣨������Ҷ��㣩�γ�����һ��·������
��·���ĳ���Ϊ������ȡ�
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
