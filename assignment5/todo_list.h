/*
 * Name        : assignment_4.cpp
 * Author      : Anthony Bostock
 * Description : TodoList class
 *               
 */

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <cassert>
using std::string;
using std::ostream;
using std::setfill;
using std::setw;
using std::stringstream;
using std::endl;
#include "todo_item.h"


 #ifndef _BOSTOCK1
 #define _BOSTOCK1


  class TodoList {
  	public:

  		TodoList();
  		~TodoList();

  	
//Member Function 1
  void AddItem(TodoItem*);

//Member Function 2
  void DeleteItem(int location);
//Member Function 3
  TodoItem* GetItem(int location);
//Member Function 4
  int GetSize();
//Member Function 5
  int GetCapacity();
//Member Function 6
  void Sort();
//Member Function 7
  string ToFile();
//Overloaded Friend Operator
  friend ostream& operator <<(ostream &out, const TodoList &);


    private:

      TodoItem **array1;
      int maxCapacity;
      int currentSize;

    //Private Member Function 1
      void Increase();
    //Private Member Function 2
      void Compact();
  };







#endif /* _BOSTOCK1 */
