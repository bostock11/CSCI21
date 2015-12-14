/*delete binary tree
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


#include "binarytree.h"


btree::btree() {
  root = NULL;
}

btree::~btree() {
  destroy_tree();
}
//destroy_tree moves down, deletes up
void btree::destroy_tree(node *leaf) {
  if (leaf!=NULL) {
	std::cout << leaf->key_value << std::endl;
    destroy_tree(leaf->left);
    destroy_tree(leaf->right);
    delete leaf;
  }
}

void btree::insert(int key, node *leaf){
  if (key < leaf->key_value){
		if (leaf->left!=NULL) {
			insert(key, leaf->left);
	} else {
			leaf->left=new node;
			leaf->left->key_value=key;
			leaf->left->left=NULL; //sets left child of child node to null
			leaf->left->right=NULL; //setsright childof child node to null
	} 
}	
	else if (key >= leaf->key_value) {
		if (leaf->right != NULL) {
			insert(key, leaf->right);
	} else {
			leaf->right=new node;
			leaf->right->key_value=key;
			leaf->right->left=NULL; //sets left child of child node to null
			leaf->right->right=NULL; //setsright childof child node to null	
		}
	}
}

node* btree::search(int key, node* leaf) {
	if (leaf!=NULL) { 
		if (key==leaf->key_value)
			return leaf;
		if(key < leaf->key_value)
			return search(key, leaf->left);
		else
			return search(key, leaf->right);
	} else { 
			return NULL;
	}
}

void btree::destroy_tree() {
	destroy_tree(root);
}

void btree::insert(int key) {
	if(root != NULL) {
		insert(key, root);
	} else{
			root=new node;
			root->key_value=key;
			root->left=NULL;
			root->right=NULL;
		}
}


node* btree::search(int key) {
	return search(key, root);
}
 
