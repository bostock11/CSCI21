/*
 * Name        : node.cpp
 * Author      : Anthony Bostock
 * Description : cpp for BSTNode
 */

#include "node.h"

BSTNodeT::BSTNodeT(){
	T &contents = T();
	count = 0;
	left = NULL;
	right = NULL;

}

BSTNodeT::BSTNodeT(const T &contents = T()) {
	contents = contents_;
	count = 0;
	left = NULL;
	right = NULL;
}

BSTNodeT::~BSTNodeT(){
	left = NULL;
	right = NULL;
}

//Mutator functions
void BSTNodeT::SetContents(){
}

void BSTNodeT::SetLeft(){
}

void BSTNodeT::SetRight(){
}

void BSTNodeT::IncrementCount(){
}

void BSTNodeT::DecrementCount(){
}

//Accessor functions
int BSTNodeT::GetContents(){
}

BSTNodeT* BSTNodeT::GetLeft(){
}

BSTNodeT* BSTNodeT::GetRight(){
}

int BSTNodeT::GetCount(){
}
