/*
 * Name        : dl_list.h
 * Author      : Anthony Bostock
 * Description : DLList
 *               
 */


 #ifndef _BOSTOCK4
 #define _BOSTOCK4

#include <iostream>
#include <string>
 using std::string;
 using std::endl;
 using std::cerr;


#include "dl_node.h"

class DLList {
  public:
  	DLList();

  	~DLList();

  	//Member functions

  	int GetSize() const;

  	void PushFront(int);

  	void PushBack(int);

  	int GetFront() const;

  	int GetBack() const;
 	
 	void PopFront();

 	void PopBack();

 	void RemoveFirst(int);

 	void RemoveAll(int);

 	bool Exists(int);

 	void Clear();

  string ToStringForwards();

  string ToStringBackwards();


  private:
    int size;
    DLNode* head;
    DLNode* tail;
  
};



 #endif /* _BOSTOCK4 */
