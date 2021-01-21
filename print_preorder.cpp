#include <bits/stdc++.h>
using namespace std;

typedef struct node 
{
	int data;
	node *left;
	node *right;
	
}node;

node *root=NULL;

node* insert(int data){
	node *newNode=(node*)malloc(sizeof(node));
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;

	return newNode;

}

void preorder(node *Node){
	if(Node!=NULL){
		cout<<Node->data<<" ";
		preorder(Node->left);
		preorder(Node->right);
	}
}

int main(){

	root=insert(10);
	root->left=insert(20);
	root->right=insert(30);
	root->left->left=insert(40);
	root->left->right=insert(50);
	root->right->left=insert(60);
	root->right->right=insert(70);

	preorder(root);


}