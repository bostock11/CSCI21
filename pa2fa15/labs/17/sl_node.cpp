/*
 * Name        : sl_node.cpp
 * Author      : Anthony Bostock
 * Description : cpp for lab17
 *               
 */ 

#include "sl_node.h"

// default constructor
  SLNode::SLNode(){
  next_node_ = NULL;
	contents_ = 0;
  }

//overloaded constructor
  SLNode::SLNode(int contents){
  next_node_ = NULL;
	contents_ = contents;
  }

//destructor 
  SLNode::~SLNode(){
  }

  void SLNode::set_contents(int contents){
    contents_ = contents;
  }

  int SLNode::contents() const{
	return contents_;
  }

  void SLNode::set_next_node(SLNode* next_node){
	next_node_ = next_node;
  }

  SLNode* SLNode::next_node() const{
  return next_node_;
  }
