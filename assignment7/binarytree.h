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

#include <iostream>

class btree {
		
	private:
  
  struct node
	 {
			int key_value;
			node* left;
			node* right;
		};

		void destroy_tree(node* leaf);
		void insert(int ket, node* leaf);
		node* search(int key, node* leaf);

		node* root;
		
	public:
		btree();
		~btree();

		void insert(int key);
		btree::node* search(int key);
		void destroy_tree();
};
		
		
  
