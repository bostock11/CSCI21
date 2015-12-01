/*
 * Name        : dl_node.cpp
 * Author      : Anthony Bostock
 * Description : cpp for DLNode class
 *               
 */
#include "dl_node.h"


DLNode::DLNode() {
	contents = 0;
	prev = NULL;
	next = NULL;


}

DLNode::~DLNode() {

}

// Mutator Functions

void DLNode::SetContents(int set_contents) {
  contents = set_contents;
}

void DLNode::SetNext(DLNode* temp) {
	next = temp;
}

void DLNode::SetPrevious(DLNode* temp){
	prev = temp;

}

// Accessor Functions

int DLNode::GetContents() const {
	return contents;
}

DLNode* DLNode::GetNext() const {
	return next;

}

DLNode* DLNode::GetPrevious() const{
	return prev;
}