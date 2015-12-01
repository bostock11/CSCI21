/*
 * Name        : dl_list.h
 * Author      : Anthony Bostock
 * Description : DLList
 *               
 */


#include <iostream>




 #ifndef _BOSTOCK4
 #define _BOSTOCK4

class DLList {
  public:
  	DLList();

  	~DLList();

  	//Member functions

  	void GetSize();

  	void PushFront(int);

  	void PushBack(int);

  	int GetFront() const;

  	int GetBack() const;
 	
 	void PopFront();

 	void PopBack();

 	void RemoveFirst(int);

 	void RemoveAll(int);

 	bool Exits(int);

 	void Clear();


  private:
    int size;
    DLNode* head;
    DLNode* tail;
  
};



 #endif /* _BOSTOCK4 */
