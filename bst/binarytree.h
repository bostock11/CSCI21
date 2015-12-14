/*to delete binary tree
use search function
if leaf has no child
if (l == NULL && r == NULL) //nochildren
elseif(l == NULL)
//has right child

elseif(r == NULL)
//has left child

else
//2 children
delete root 
root = null

if node has one child
point root of subtree to child of subtree
algorithm
temp pointer to the one you will delete
point grandfather to grandchild
delete temp pointer

How can you hold string values in BST?

cif node has two children*/
#ifndef _BOSTOCK1
#define _BOSTOCK1

#include <iostream>

struct node {
	int key_value;
	node* left;
	node* right;
};

class btree {
		
	private:

		void destroy_tree(node* leaf);
		void insert(int ket, node* leaf);
		node* search(int key, node* leaf);

		node* root;
		
	public:
		btree();
		~btree();

		void insert(int key);
		node* search(int key);
		void destroy_tree();
};
		
#endif /*_BOSTOCK1*/		  
