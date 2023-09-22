struct TreeNode* create(int val) {
    struct TreeNode *node = malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    
    return node;
}

void insertLeft(struct TreeNode* root, int val) {
    root->left = create(val);
}

void insertRight(struct TreeNode* root, int val) {
    root->right = create(val);
}

void inorderTraversalHelper(struct TreeNode* root, int* result, int* index) {
    if (root == NULL) {
        return;
    }

    inorderTraversalHelper(root->left, result, index);
    result[(*index)++] = root->val;
    inorderTraversalHelper(root->right, result, index);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    if (root == NULL) {
        return NULL;
    }

    int *result = malloc(1000 * sizeof(int));
    int index = 0;
    
    inorderTraversalHelper(root, result, &index);
    *returnSize = index;

    return result;
}
