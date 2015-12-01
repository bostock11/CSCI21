/*
 * Name        : dl_list.cpp
 * Author      : Anthony Bostock
 * Description : cpp for DLList class
 *               
 */

  #include "dl_node.h"

    DLList::DLList() {
  	  head = NULL;
  	  tail = NULL;
  	  size = 0;

    }

	DLList::~DLList() {
	  	Clear();

	 }

  	//Member functions

  	int DLList::GetSize() {
  	  return size;
  	}

  	void DLList::PushFront(int add) {

  		if (head == NULL) { 
  			cout << list is empty << endl;
  		} else {
  			head = add;
  			tail = add;
  			DLNode* add;
  		}

  	}

  	void DLList::PushBack(int){

  	}

  	int DLList::GetFront() const{

  	}

  	int DLList::GetBack() const{

  	}
 	
 	void DLList::PopFront(){

 	}

 	void DLList::PopBack(){

 	}

 	void DLList::RemoveFirst(int){

 	}

 	void DLList::RemoveAll(int){

 	}

 	bool DLList::Exits(int){

 	}

 	void DLList::Clear(){

 	}