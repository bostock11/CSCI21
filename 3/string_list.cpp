/*
 * assignment 3
 * Anthony Bostock
 * cpp for StringList
 *
 */

#include "string_list.h"

  StringList::StringList() {
    array1 = new string*[25];
      for (int i = 0; i<25; i++) {
        array1[i] = NULL;
      }
    maxCapacity = 25;
    currentSize = 0;
  }


  StringList::~StringList() {
    for (int i = 0; i<currentSize; i++) {
      delete array1[i];
    }
    delete[] array1;
  }

  void StringList::AddItem(string* item) {
    if (currentSize >= maxCapacity) {
      Increase();
    }
  array1[currentSize] = item;
    currentSize += 1;
  }

  void StringList::DeleteItem(int location) {
    location = location - 1;
    if ((location < currentSize) && (location >= 0)) {
      delete array1[location];
      array1[location] = NULL;
      currentSize = currentSize - 1;
    }
    Compact();
  }

  string* StringList::GetItem(int location) {
    location = location - 1;
    assert(location < maxCapacity);

    return array1[location];
  }

  int StringList::GetSize() {
    return currentSize;
  }

  int StringList::GetCapacity() {
    return maxCapacity;
  }

  void StringList::Sort() {
 
  }

  string StringList::ToFile() {
    stringstream ss;

    return ss.str();
  }
  
  ostream& operator <<(ostream &out, const StringList &myList) {
    for (int i = 0; i < mylist.currentSize; i++) {
      out << i + 1 << ":" << mylist.array1[i];
    }
  }

  void StringList::Increase() {
    string* array2 = array1;
      array1 = new string*[maxCapacity + 1];
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


  void StringList::Compact() {
    for (int i = 0; i < currentSize-1; i++) {
      if (array1[i] == NULL) {
        array1[i] = array1[i+1];
        array1[i+1] = NULL;
      }
    }
  }

 
