/*
 * Name        : tree.h
 * Author      : Anthony Bostock
 * Description : Header for BSTree
 */

#ifndef _BOSTOCK2
#define _BOSTOCK2
#include <iostream>
class BSTreeT {
	public:
		BSTreeT();

		~BSTreeT();

		int GetSize() const;
		void Clear();
		int Insert(int);
		bool Exists();
		int Remove(int);
		BSTNodeT* Get();
		string ToStringForwards();
		string ToStringBackwards();
	private:
	    BSTNodeT* root;
	    int size;


};


#endif /*_BOSTOCK2*/
