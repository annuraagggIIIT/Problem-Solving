#include <stdio.h>
#include <stdlib.h>

// Define a structure for the nodes of the binary search tree
struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Define a function to create a new node with the given data and return its pointer
struct node* new_node(int data) {
    struct node* node = (struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Define a function to insert a new node into the binary search tree
void insert(struct node** root, int data) {
    if (*root == NULL) {
        *root = new_node(data);
    } else if (data < (*root)->data) {
        insert(&((*root)->left), data);
    } else {
        insert(&((*root)->right), data);
    }
}

void insertRecursion(struct node* root, int data) {
    if (data < root->data) {
        if (root->left == NULL) {
            root->left = new_node(data);
        } else {
            insertRecursion(root->left, data);
        }
    } else {
        if (root->right == NULL) {
            root->right = new_node(data);
        } else {
            insertRecursion(root->right, data);
        }
    }
}

void insertIteration(struct node* root, int data) {
    while (1) {
        if (data < root->data) {
            if (root->left == NULL) {
                root->left = new_node(data);
                break;
            } else {
                root = root->left;
            }
        } else {
            if (root->right == NULL) {
                root->right = new_node(data);
                break;
            } else {
                root = root->right;
            }
        }
    }
}
struct node* search(struct node* root, int data) {
    if (root == NULL || root->data == data) {
        return root;
    } else if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void preorder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorderstruct (struct node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
int main() {
    struct node* root = NULL;
    insert(&root, 50);
    insert(&root, 30);
    insert(&root, 20);
    insert(&root, 40);
    insert(&root, 70);
    insert(&root, 60);
    insert(&root, 80);
    printf("In-order traversal of the binary search tree: ");
    inorder(root);
    printf("\n");
    printf("post-order traversal of the binary search tree: ");
    postorder(root);
    printf("\n");
    printf("pre-order traversal of the binary search tree: ");
    preorder(root);
    printf("\n");
    struct node* node = search(root, 90);
    if (node != NULL) {
        printf("Found node with data %d\n", node->data);
    } else {
        printf("Node not found\n");
    }
    return 0;
}
