#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode{
	
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
} TreeNode;

TreeNode* findMin(TreeNode *node){
	
	if(node == NULL)
		return NULL;
	if(node->left)
		return findMin(node->left);
	else
		return node;
}

TreeNode* insertNode(TreeNode *node, int x){
	if(node == NULL){
		TreeNode *t = (TreeNode *) malloc(sizeof(TreeNode));
		
		t -> data = x;
		t -> left = t -> right = NULL;
		return t;
}
	else if(x > node->data){
		node->right = insertNode(node->right, x);
}
	else{
		node->left = insertNode(node->left, x);
 }
}

TreeNode* deleteNode(TreeNode *node, int x){
	
	TreeNode *temp;

	if(node == NULL){
		printf(" Silinecek dugum bulunamadi. \n");
}
	else if(x < node->data) {
		node->left = deleteNode(node->left, x);
}
	else if(x > node->data) {
		node->right = deleteNode(node->right, x);
}
	else{
		if(node->right && node->left){
			temp = findMin(node->right);
			node -> data = temp->data;
			node -> right = deleteNode(node->right, temp->data);
}
		else{
			temp = node;
			if(node->left == NULL)
				node = node->right;
			else if(node->right == NULL)
				node = node->left;
			free(temp);
 }
}
return node;
}
