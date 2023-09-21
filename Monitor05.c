
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int targetSum){  
    if (root == NULL) {
        return false;
    }
    
    targetSum -= root->val;
    
    
    if (root->left == NULL && root->right == NULL && targetSum == 0) {
        return true;
    }
    
    
    bool leftPath = hasPathSum(root->left, targetSum);
    bool rightPath = hasPathSum(root->right, targetSum);
    
   
    return leftPath || rightPath;
}
