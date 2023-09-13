/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void inverte(struct TreeNode* node){
   if (node != NULL){
    struct TreeNode* temporario;
    temporario = node->left;
    node->left = node->right;
    node->right = temporario;
    inverte(node->left);
    inverte(node->right);
   }
}

struct TreeNode* invertTree(struct TreeNode* root){
     inverte(root);
     return root;
}
