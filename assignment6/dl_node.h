/*
 * Name        : dl_node.h
 * Author      : Anthony Bostock
 * Description : DLNode class
 *               
 */

#include <iostream>


 #ifndef _BOSTOCK3
 #define _BOSTOCK3


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
