class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        int c=root->val;
        if(p->val>c && c<q->val ){
            return  lowestCommonAncestor(root->right, p,q);
        }
        else if(p->val<c && c>q->val ){
            return  lowestCommonAncestor(root->left, p,q);
        }
        return root;
    }
};
