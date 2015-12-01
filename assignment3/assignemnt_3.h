/*
 * Name        : assignment_3.cpp
 * Author      : Anthony Bostock
 * Description : Class for todo list
 *               
 */

 #include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using std::string;
using std::ostream;
using std::setfill;
using std::setw;

 #ifndef _BOSTOCK
 #define _BOSTOCK

 class TodoItem { 
  public: 

  	Todo( string description, int priority = 1, bool completed = false)

/*
 * Accessors for private data members
 */
  string description() const;

  int priority() const;
  
  bool completed() const;

/*
 * Mutators for private data members
 */

  void set_description(string);

  void set_priority(int);

  void set_completed(bool);

//OUTPUT
  friend ostream& operator <<(ostream &out, const TodoItem &item);



  private:

  	int description_;
  	int priority_;
  	int completed_;

    void Scrub(string);
  
};





 #endif /* _BOSTOCK */