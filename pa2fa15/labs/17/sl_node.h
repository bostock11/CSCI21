/*
 * Name        : sl_node.h
 * Author      : Anthony Bostock
 * Description : header for lab17
 *               
 */ 

#ifndef _Bostock
#define _Bostock

#include <iostream>
#include <cstddef>


class SLNode {
    public:
  SLNode();

  SLNode(int contents);

  ~SLNode();

  void set_contents(int);

  int contents() const;

  void set_next_node(SLNode*);

  SLNode* next_node() const;

   private:
    SLNode* next_node_;
    int contents_;
};

#endif