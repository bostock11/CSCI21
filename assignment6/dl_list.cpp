/*
 * Name        : dl_list.cpp
 * Author      : Anthony Bostock
 * Description : cpp for DLList class
 *               
 */

  #include "dl_node.h" 
  #include "dl_list.h"

    DLList::DLList() {
  	  head = NULL;
  	  tail = NULL;
  	  size = 0;

    }

	DLList::~DLList() {
	  	Clear();

	 }

  	//Member functions

  	int DLList::GetSize() const {
  	  return size;
  	}

  	void DLList::PushFront(int add) {
      if (head == NULL || tail == NULL) {
        DLNode* temp = new DLNode;
        temp->SetContents(add);

        head = temp;
        tail = temp;

        size += 1;
      } else {
          DLNode* temp = new DLNode;
          temp->SetContents(add);
          temp->SetNext(head);
          head->SetPrevious(temp);
          head = temp;
          size += 1;
      }
  	}

  	void DLList::PushBack(int add){
      if (head == NULL || tail == NULL) {
        DLNode* temp = new DLNode;
        temp->SetContents(add);

        head = temp;
        tail = temp;

        size += 1;
      } else {  
          DLNode* temp = new DLNode;
          temp->SetContents(add);
          temp->SetNext(tail);
          temp->SetPrevious(temp);
          tail = temp;
          size += 1;
}

  	}

  	int DLList::GetFront() const {
      if (head == NULL) {
        cerr << "List Empty" << endl;
        return 0;
      } else {
        return head->GetContents();
      }
  	}

  	int DLList::GetBack() const {
      if (tail == NULL) {
        cerr << "List Empty" << endl;
        return 0;
      } else {
        return tail->GetContents();
      }
  	}
 	
 	void DLList::PopFront(){

 	}

 	void DLList::PopBack(){

 	}

 	void DLList::RemoveFirst(int){

 	}

 	void DLList::RemoveAll(int){

 	}

 	bool DLList::Exists(int value){
    for (int i = 0; i < 999; i++) {
      if (i == value){
        return true;
      } else {
      return false;
    }
    }

 	}

 	void DLList::Clear(){

 	}

  string DLList::ToStringForwards(){
    string what = "fuck";
    return what;

  }

  string DLList::ToStringBackwards(){
    string what = "fuck";
    return what;
  }
