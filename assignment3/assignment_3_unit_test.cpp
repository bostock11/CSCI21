/*
 * Name        : assignment_3_unit_test.cpp
 * Author      : Luke Sathrum
 * Description : Unit Test for class TodoItem
 *               THIS FILE SHOUD NOT BE ALTERED, UNLESS DEBUGGING IN MAIN
 */

#include <iostream>
#include <sstream>
#include <streambuf>
#include "todo_item.h"
using std::cout;
using std::endl;
using std::string;


// For testing (DO NOT ALTER)
void Test(bool test, string more_info = "");
void UnitTest();

// Program Execution Starts Here
int main() {
  // START DEBUGGING CODE

  // END DEBUGINH CODE
  // To test your code (DO NOT ALTER)
  UnitTest();
  // This ends program execution
  return 0;
}

// For testing (DO NOT ALTER)
void UnitTest() {
  string temp = "This unit test will test some of your code:\n";
  cout << temp << string(temp.length() - 1, '-') << endl;
  // Tests
  string desc1 = "Go to Store";
  string desc2 = "Brush Teeth @ 8PM";

  cout << "*****TodoItem(\"Go to Store\")*****\n";
  TodoItem item(desc1);
  Test(item.description() == desc1, "description()");
  Test(item.priority() == 1, "priority()");
  Test(item.completed() == false, "completed()");
  Test(item.ToFile() == "Go to Store@1@0", "ToFile()");
  cout << "Testing Overloaded <<: " << item << endl;

  cout << "\n*****TodoItem(\"Go to Store\", 3)*****\n";
  TodoItem item2(desc1, 3);
  Test(item2.description() == desc1, "description()");
  Test(item2.priority() == 3, "priority()");
  Test(item2.completed() == false, "completed()");
  Test(item2.ToFile() == "Go to Store@3@0", "ToFile()");
  cout << "Testing Overloaded <<: " << item2 << endl;

  cout << "\n*****TodoItem(\"Go to Store\", 2, true)*****\n";
  TodoItem item3(desc1, 2, true);
  Test(item3.description() == desc1, "description()");
  Test(item3.priority() == 2, "priority()");
  Test(item3.completed() == true, "completed()");
  Test(item3.ToFile() == "Go to Store@2@1", "ToFile()");
  cout << "Testing Overloaded <<: " << item3 << endl;

  cout << "\n*****TodoItem Mutators*****\n";
  item.set_description(desc2);
  Test(item.description() == desc2,
       "set_description(\"Brush Teeth @ 8PM\") / description()");
  item.set_priority(4);
  Test(item.priority() == 4, "set_priority(4) / priority()");
  item.set_priority(0);
  Test(item.priority() == 5, "set_priority(0) / priority()");
  item.set_priority(6);
  Test(item.priority() == 5, "set_priority(6) / priority()");
  item.set_completed(true);
  Test(item.completed() == true, "set_completed(true) / completed()");
  Test(item.ToFile() == "Brush Teeth ` 8PM@5@1", "ToFile()");
  cout << "Testing Overloaded <<: " << item << endl;

  // Testing Destructors
  cout << "\n*****Testing Destructors*****" << endl
       << "If the next line is \"END Testing Destructors\" then you passed!"
       << endl;
  TodoItem *dynamic_item = new TodoItem("testing");
  delete dynamic_item;
  dynamic_item = new TodoItem("testing2", 5);
  delete dynamic_item;
  dynamic_item = new TodoItem("Testing3", 3, true);
  cout << "*****END Testing Destructors*****" << endl;

  cout << string(temp.length() - 1, '-') << endl;
  cout << "Unit Test Complete!\n\n";
}

// For testing (DO NOT ALTER)
void Test(bool test, string more_info) {
  static int test_number = 1;
  if (test)
    cout << "PASSSED TEST ";
  else
    cout << "FAILED  TEST ";
  cout << test_number << " " << more_info << "!" << endl;
  test_number++;
}

