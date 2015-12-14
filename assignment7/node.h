/*
 * Name        : node.h
 * Author      : Anthony Bostock
 * Description : Header for BSTNode
 */

#ifndef _BOSTOCK1
#define _BOSTOCK1
#include <iostream>
#include <string>


using std::string;

template<typename T>
class BSTNodeT { 
	public:
		BSTNodeT();
		BSTNodeT(const T &contents);

		~BSTNodeT();
		//Mutator functions
		void SetContents();
		void SetLeft();
		void SetRight();
		void IncrementCount();
		void DecrementCount();
		//Accessor functions
		int GetContents();
		BSTNodeT* GetLeft();
		BSTNodeT* GetRight();
		int GetCount();

	private:
		T contents_;
		unsigned int count;
		BSTNodeT* left;
		BSTNodeT* right;
	};

#endif /*_BOSTOCK1*/
