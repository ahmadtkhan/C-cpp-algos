TreeNode* invertTree(TreeNode* root) {
    if(root == NULL){
        return NULL;
    }
    TreeNode* tmp = root->left;
    root->left = root->right;
    root->right = tmp;

    invertTree(root->left);
    invertTree(root->right);
  
    return root;
}
