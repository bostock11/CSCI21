/*
 * Name        : assignment_3.cpp
 * Author      : Anthony Bostock
 * Description : Class for todo list
 *               
 */

#include <assignment_3.h>

/*
 * Accessors for private data members
 */
   string description() const {
    return description_;
  }

  int priority() const {
    return priority_;
  }
  
  bool completed() const { 
    return completed_;
  }

/*
 * Accessors for private data members
 */



  void set_description(string new_description) {
  	description_ = new_description;


  }

  void set_priority(int new_priority) {
  	if new_priority  5
  	priority_ = new_priority

  }

  void set_completed(bool new_completed) {
  	completed_ = new_completed

  }

//OUTPUT
  ostream& operator <<(ostream &out, const ToDoItem &) {
  out << "" << setfill() << setw() <<
}

 void Scrub(string);


