#include<bits/stdc++.h>
using namespace std;


typedef struct Node
{
	int data;
	Node *left;
	Node *right;
	
}Node;

Node *root=NULL;

void insert(int data){

	Node *temp=(Node*)malloc(sizeof(Node));

	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;

	if(root==NULL)
		root=temp;
	else{
		Node *curr=root;
		Node *parent=NULL;

		while(curr){
			parent=curr;

			if(temp->data > curr->data)
				curr=curr->right;
			else
				curr=curr->left;
		}

		   if(temp->data > parent->data)
		   	   parent->right=temp;
		   	else
		   		parent->left=temp;
	}
}

void postorder(Node *temp){

	if(temp->left)
		postorder(temp->left);
	if(temp->right)
		postorder(temp->right);
	cout<<temp->data<<" ";
}

int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		insert(x);

	}
	postorder(root);
}