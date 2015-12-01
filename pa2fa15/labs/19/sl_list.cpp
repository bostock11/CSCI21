/*
 * Name        : sl_list.cpp
 * Author      : Anthony Bostock
 * Description :          
 */ 
 
#include "sl_node.h"
#include "sl_list.h"
 

	SLList::SLList(){
      head_ = NULL;
	  tail_ = NULL;
	  size_ = 0;
	}
	
	SLList::~SLList(){
      Clear();
	}
	
	
	void SLList::InsertHead(int head){
	  int* new_node = NULL;
	  head = *new_node;
	  SLNode* head_ = NULL;
	  head_ -> head_(new_node);
	  if (head_ == NULL) {
		  tail_ = NULL;
	}
	  size_ = 0;
	  tail_ = NULL;
	}
	
	void SLList::InsertTail(int tail){
      
	  SLNode* tail_ = NULL;
	  if (head_ == NULL) {
		  InsertHead(int);
	} else {
		tail_ -> set_next_node(new_node);
		tail_ = new_node;
	}
	}
	
	void SLList::RemoveHead(){
      int new_node;
	  if (size_ >= 1) {
	    head_ -> head(new_node);
		delete head_;
	}
	}
	
	void SLList::RemoveTail(){
	  if (head_ == tail_) {
		  RemoveHead();
	  }
	
	SLNode* it = head_;
	while(it -> next_node != tail_) {
		it = it -> next_node;
	}
	
	 it--;
	}
	int SLList::GetHead() const{
		return 0;
	}
	
	int SLList::GetTail() const{
		if (tail_ == NULL) {
		return 0;
	}
	}
	
	void SLList::Clear(){
		
	}
	
	unsigned int SLList::size() const{
		return 0;
	}
	
	string SLList::ToString() const{
		return " ";
	}
	