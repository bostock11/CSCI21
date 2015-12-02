#ifndef BOSTOCK1_
#define BOSTOCK1_

#include <iostream>

class BSTNode {
  public:
    BSTNode();
    BSTNode(int);
    ~BSTNode();
    void SetContents(int);
    int GetContents() const;
    int& GetContents();

    void SetLeftChild(BSTNode*);
    void SetRightChild(BSTNode*);
    
    BSTNode* GetLeftChild() const;
    BSTNode*& GetLeftChild();

    BSTNode* GetRightChild() const;
    BSTNode*& GetRightChild();

  private:
    BSTNode* left;
    BSTNode* right;
    int contents;
    
};

#endif //BOSTOCK1_
