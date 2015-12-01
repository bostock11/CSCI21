/*
 * Name        : assignment_4.cpp
 * Author      : Anthony Bostock
 * Description : cpp for TodoList
 *               
 */

 
 #include "todo_list.h"

//Constructor

  TodoList::TodoList() {

    array1 = new TodoItem*[25];
      for (int i = 0; i<25; i++) {
      	array1[i] = NULL;
      }
  
    maxCapacity = 25;
    currentSize = 0;
  }

//Destructor

  TodoList::~TodoList() {
  	for (int i = 0; i<currentSize; i++) {
  		delete array1[i];
  		}
    delete[] array1;
    }


//Member Function 1
  void TodoList::AddItem(TodoItem* item){
  	if (currentSize >= maxCapacity) {
      Increase();
  	}
  array1[currentSize] = item;
      currentSize += 1;
  }


//Member Function 2
  void TodoList::DeleteItem(int location) {
    location = location -1;
    if ((location < currentSize) && (location >= 0)) {
      delete array1[location];
      array1[location] = NULL;
      currentSize = currentSize - 1;
    }

    Compact();
  }


      

//Member Function 3
  TodoItem* TodoList::GetItem(int location) {
    location = location - 1;
    assert(location < maxCapacity);

    return array1[location];
  }

//Member Function 4
  int TodoList::GetSize() {
  	return currentSize;
  }

//Member Function 5
  int TodoList::GetCapacity() {
  	return maxCapacity;
  }

//Member Function 6
  void TodoList::Sort() {

  }
//Member Function 7
  string TodoList::ToFile() {
    stringstream ss;

    
  	return ss.str();
  }

//Overloaded Friend Operator
  ostream& operator <<(ostream &out, const TodoList &mylist) {
    for (int i = 0; i < mylist.currentSize; i++) {
      out << i + 1 << ":" << mylist.array1[i];
    }
  }

//Private Member Function 1
  void TodoList::Increase() {
    TodoItem** array2 = array1;
      array1 = new TodoItem*[maxCapacity + 10];
      for (int i = 0; i < maxCapacity; i++) {
        if (i < currentSize) {
          array1[i] = array2[i];
          array2[i] = NULL;
        }
         else {
          array1[i] = NULL;
         }
      }

      array2 = NULL;
      delete[] array2;

      maxCapacity += 10;
  }

//Private Member Function 2
  void TodoList::Compact() {
    for (int i = 0; i < currentSize-1; i++) {
      if (array1[i] == NULL) {
        array1[i] = array1[i+1];
        array1[i+1] = NULL;
      }
    }
  }

  





 
 
  	  