#include<stdio.h>
#include<dtdlib.h>

typedef struct TreeNode{
	
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
} TreeNode;

TreeNode* createNode(int x){
	
	 TreeNode* t = (TreeNode*) malloc(sizeof(TreeNode));
	 
	t->data = x;
	t->left = NULL;
	t->right = NULL;
	return t;
}

void printTree(TreeNode *root){
	
	if(root != NULL) {
		printf("%d ", root->data);
		printTree(root->left);
		printTree(root->right);
 }
}

int main(void){
	
	TreeNode *root = createNode(5);
	root->left = createNode(6);
	root->right = createNode(8);

	printTree(root);
	
	getch();
	return 0;
}
