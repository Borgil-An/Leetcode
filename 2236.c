/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
;
bool checkTree(struct TreeNode* root){

   int v = root->val;
   int z, y;
   
   z = root->left->val;
   y = root->right->val;

    if (z + y == v){
        return true;
    }
    return false;

    

}
