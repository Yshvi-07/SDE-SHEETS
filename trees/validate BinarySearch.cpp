class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValid(root, LLONG_MIN, LLONG_MAX);
    }
    bool isValid(TreeNode* root,long long mini,long long maxi){
        if(root==NULL){
            return true;
        }
        if(root->val>=maxi||root->val<=mini){
            return false;
        }
        return isValid(root->left,mini,root->val) && isValid(root->right,root->val,maxi);

      
    }
};
