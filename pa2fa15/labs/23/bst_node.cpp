#include <iostream>

#include "bst_node.h"

    BSTNode::BSTNode(){
      left = NULL;
      right = NULL;
      contents = 0;
    }

    BSTNode::BSTNode(int contents_){
      contents = contents_;
    }

    BSTNode::~BSTNode(){
      left = NULL;
      right = NULL;
    }

    void BSTNode::SetContents(int set_contents){
      contents = set_contents;
    }

    int BSTNode::GetContents() const{
      return contents;
    }

    int& BSTNode::GetContents(){
      return contents;
    }

    void BSTNode::SetLeftChild(BSTNode* temp){
      left = temp;
    }

    void BSTNode::SetRightChild(BSTNode* temp){
      right = temp;
    }

    BSTNode* BSTNode::GetLeftChild() const{
      return left;
    }

    BSTNode*& BSTNode::GetLeftChild(){
      return left;
    }

    BSTNode* BSTNode::GetRightChild() const{
      return right;
    }

    BSTNode*& BSTNode::GetRightChild(){
      return right;
    }


