/*
 * Name        : dl_node.h
 * Author      : Anthony Bostock
 * Description : DLNode class
 *               
 */



 #ifndef _BOSTOCK3
 #define _BOSTOCK3

#include <iostream>

class DLNode {
  public:

  	DLNode();

  	~DLNode();

  	// Mutator Functions

  	void SetContents(int);

  	void SetNext(DLNode*);

  	void SetPrevious(DLNode*);

  	// Accessor Functions

  	int GetContents() const;

  	DLNode* GetNext() const;

    DLNode* GetPrevious() const;


  private:
  	int contents;
  	DLNode* prev;
  	DLNode* next;


};

#endif /* _BOSTOCK3 */
