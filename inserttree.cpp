#include<bits/stdc++.h>
using namesapce std;

typedef struct node 
{

	int data;
	node *left;
	node *right;
	
}node;

   node *root=NULL;

   void insert(int data){
         node *temp=(node*)malloc(size(node));

         temp->data=data;
         temp->right=NULL;
         temp->left=NULL;

         if(root==NULL)
   	        root=temp;
         else{
   	           node *curr=root;
   	           node *parent=NULL;
   	           while(curr){
   	           	      parent=curr;
   		             if(temp->data>curr->data)
   			         curr=curr->right;
   		             else{
   		             	curr=curr->left;
   		             }	

        	   }

        	   if(temp->data>curr->data)
        	   	parent->right=temp;
        	   else
        	   	parent->left=temp;

           }

    }
  

 void print_in_preorder(node *Node){
 	node *temp=Node;
 	if(temp!=NULL){
 		cout<<temp->data<<" ";
 		print_in_preorder(temp->left);
 		print_in_preorder(temp->right);
 	}
 }


int main(int argc, char const *argv[])
{

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		insert(a[i]);
	print_in_preorder(root);

	return 0;
}