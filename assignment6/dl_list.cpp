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

  	void DLList::PushBack(int add) {
      if (head == NULL || tail == NULL) {
        DLNode* temp = new DLNode;
        temp->SetContents(add);
        head = temp;
        tail = temp;

        size++;
      } else {  
          DLNode* temp = new DLNode;
          temp->SetContents(add);
          tail->SetNext(temp);
          temp->SetPrevious(tail);
          tail = temp;
          size++;
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
    if (head == NULL) {
      cerr << "List Empty" << endl;
    } else {
      DLNode* temp = head;
      if (head == tail) {
        tail = NULL;
        head = NULL;
      } else {
        head = head->GetNext();
      }
      if (head != NULL) {
        head->SetPrevious(NULL);
      }
      delete temp;
      size--;
    }

 	}

 	void DLList::PopBack(){
    if (head == NULL) {
      cerr << "List Empty" << endl;
    } else {
      DLNode* temp = tail;
      if (head == tail) {
        tail = NULL;
        head = NULL;
      } else {
        tail = tail->GetPrevious();
      }
      if (tail != NULL) {
          tail->SetNext(NULL);
      }
      delete temp;
      size--;
    }

 	}

 	void DLList::RemoveFirst(int value){
    DLNode* temp = head;
    bool found = false;
    while((temp != NULL) && (!found)) {
      if (temp->GetContents() == value) {
        if (temp->GetNext() != NULL) {
          temp->GetNext()->SetPrevious(temp->GetPrevious());
        }
        if (temp->GetPrevious() != NULL) {
          temp->GetPrevious()->SetNext(temp->GetNext());
        }
        if (temp == head){
          head = temp->GetNext();
        } else if (temp == tail) {
          tail = temp->GetPrevious();
        }
        
        delete temp;
        temp = NULL;
        size--;
        found = true;
      }
      if(temp != NULL) {
        temp = temp->GetNext();
      }
    }
    if (!found) {
        cerr << "Not Found" << endl;
    }
 	}

  void DLList::RemoveAll(int value) {
    bool removed = false;
    int count = size;
    do {
      count = size;
      removed = false;
      
      RemoveFirst(value);
      
      if (count != size) {
        removed = true;
      }
    } while (removed);
 	}

 	bool DLList::Exists(int value){
    DLNode* temp = head;
    while (temp != NULL) {
      if (temp->GetContents() == value) {
        return true;
      }
      temp = temp->GetNext();
    }

    return false;
 	}

 	void DLList::Clear(){
    DLNode* temp = head;
    while(temp != NULL){
      head = head->GetNext();
      delete temp;
      temp = head;
    }
    size = 0;
 	}

  string DLList::ToStringForwards(){
    
    if (head == NULL){
      cerr << "List Empty" << endl;
      return "";
    } 
    stringstream ss;
    DLNode* temp = head;
    while(temp != NULL) {
      ss << temp->GetContents();
      if (temp != tail){
      ss << ", ";
    }
      temp = temp->GetNext();
    }

    return ss.str();
  
  }

  string DLList::ToStringBackwards(){

    if (head == NULL){
      cerr << "List Empty" << endl;
      return "";
    }
    stringstream ss;
    DLNode* temp = tail;
    while(temp != NULL) {
      ss << temp->GetContents();
      if (temp != head){
        ss << ", ";
      } 
      temp = temp->GetPrevious();
    }
    return ss.str();
    
}