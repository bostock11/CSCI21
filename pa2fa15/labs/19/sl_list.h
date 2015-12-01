/*
 * Name        : sl_list.h
 * Author      : Anthony Bostock
 * Description : 
 *               
 */ 
 
#ifndef _Bostock1
#define _Bostock1

#include <iostream>
#include <cstddef>
#include <string>
#include "sl_node.h"

using std::string;


class SLList {
	public:

	  SLList();
	  
	  ~SLList();
	  
	  void InsertHead(int);
	  
	  void InsertTail(int);
	  
	  void RemoveHead();
	  
	  void RemoveTail();
	  
	  int GetHead() const;
	  
	  int GetTail() const;
	  
	  void Clear();
	  
	  unsigned int size() const;
	  
	  string ToString() const;
	  
	  
	private:
	
	  SLNode* head_;
	  SLNode* tail_;
	  unsigned int size_;
	  
};
	  
	  







#endif