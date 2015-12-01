/*
 * Name        : assignment_3.cpp
 * Author      : Anthony Bostock
 * Description : cpp for todo item
 *               
 */

#include "todo_item.h"


  TodoItem::TodoItem(string description, int priority, bool completed) {
    description_ = description;
    priority_ = priority;
    completed_ = completed;
  }

/*
 * Accessors for private data members
 */
   string TodoItem::description() const {
    return description_;
  }

  int TodoItem::priority() const {
    return priority_;
  }
  
  bool TodoItem::completed() const { 
    return completed_;
  }

/*
 * Accessors for private data members
 */



  void TodoItem::set_description(string new_description) {
  	description_ = new_description;

  }

  void TodoItem::set_priority(int new_priority) {
  	if (new_priority <= 5) {
  	priority_ = new_priority;
  } else if (new_priority > 5 || new_priority == 0) {
    priority_ = 5;
  }

  }

  

  void TodoItem::set_completed(bool new_completed) {
  	completed_ = new_completed;

  }
  string TodoItem::ToFile() {
    stringstream ss;

    ss << Scrub(description_) << "@" << priority_ << "@" << completed_;

    return ss.str();
  }


 string TodoItem::Scrub(string word) {
   for (int i=0;i<word.size();i++) { 
     if (word.at(i) == '@') {
      word.at(i) = '`';
    }
  }

  return word;

 }
 //OUTPUT
  ostream& operator <<(ostream &out, const TodoItem &myItem) {
  out << setfill(' ') << setw(1) << myItem.priority_ << endl;
}
