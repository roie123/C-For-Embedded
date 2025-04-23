#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* newNode(int val) {
    struct TreeNode* node = malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}



void inorder(struct TreeNode *root, int *arr, int *index) {
    if (root == NULL) return;
    inorder(root->left,arr,index);
    arr[(*index)++] = root->val;
    inorder(root->right,arr,index);
}

int *inorderTraversal(struct TreeNode *root, int *returnSize) {
    int *result = calloc(100 , sizeof(int));
    int index = 0;
    inorder(root, result,&index);
    *returnSize = index;
    return result;
}

int main() {
    struct TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(8);

    root->left->right->left = newNode(6);
    root->left->right->right = newNode(7);
    root->right->right->left = newNode(9);



    // Run traversal
    int returnSize;
    int* output = inorderTraversal(root, &returnSize);

    // Print result
    printf("Inorder Traversal: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", output[i]);
    }
    printf("\n");

    // Free memory (basic cleanup)
    free(output);
    // (free tree no

}
