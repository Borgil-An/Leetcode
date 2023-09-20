/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool evaluateTree(struct TreeNode* root){
if (root->left == NULL && root->right == NULL) {
        return root->val == 1;
    }
    
    bool leftValue = evaluateTree(root->left);
    bool rightValue = evaluateTree(root->right);
    
    if (root->val == 2) {
        return leftValue || rightValue; 
    } else if (root->val == 3) {
        return leftValue && rightValue;
    }
    
    return false;
}
