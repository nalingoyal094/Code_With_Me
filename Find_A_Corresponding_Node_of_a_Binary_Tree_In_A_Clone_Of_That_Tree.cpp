class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        if (original==NULL)
            return original;
        
        if (original==target)
        {
            return cloned;
        }
        if (getTargetCopy(original->left,cloned->left,target)!=NULL)
        {
            return getTargetCopy(original->left,cloned->left,target);
        }
        else
        {
            return getTargetCopy(original->right,cloned->right,target);
        }
        
    }
};
