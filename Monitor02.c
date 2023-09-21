/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root){
    if(root == NULL){
        return 0;
    }

    if (root->left == NULL && root->right == NULL) {
         return 1;
    }
    
    int leftDepth = minDepth(root->left);
    int rightDepth = minDepth(root->right);
    
    if (leftDepth == 0) {
        return rightDepth + 1;
    } else if (rightDepth == 0) {
        return leftDepth + 1;
    } else {
        return (leftDepth < rightDepth ? leftDepth : rightDepth) + 1;
    }
}
