#include <stdio.h>
#include <stdlib.h>


typedef struct TreeNode {
    int value;              
    struct TreeNode *left; 
    struct TreeNode *right;
} TreeNode;


TreeNode* createNode(int value) {
  
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    
   
    if (newNode == NULL) {
        printf("Error allocating memory!\n");
        exit(1);
    }

    
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}


void printInOrder(TreeNode* node) {
    if (node == NULL) return;
    printInOrder(node->left);
    printf("%d ", node->value);
    printInOrder(node->right);
}


int main() {
    
    TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

   
    printf("In-order traversal of the tree: ");
    printInOrder(root);
    printf("\n");

    
    

    return 0;
}
