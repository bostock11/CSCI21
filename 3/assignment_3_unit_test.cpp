/*
 * Name        : assignment_3_unit_test.cpp
 * Author      : Luke Sathrum
 * Description : Unit test to test StringList Functionality
 */
#define CATCH_CONFIG_MAIN
#include "../../helpful_files/catch.hpp"

#include "string_list.h"
// Double Include to Check for Header Guards
#include "string_list.h"

TEST_CASE("StringList") {

  StringList list;

  SECTION("StringList Constuctor") {
    CHECK(list.GetSize() == 0);
    CHECK(list.GetCapacity() == 25);
    CHECK(list.GetItem(0) == NULL);
    CHECK(list.ToFile() == "");
  }

  // Adding 1 Item
  list.AddItem(new string("Hello"));
  SECTION("AddItem(new string(\"Hello\")") {
    CHECK(list.GetSize() == 1);
    CHECK(list.GetCapacity() == 25);
    CHECK(*list.GetItem(0) == "Hello");
    CHECK(list.ToFile() == "Hello");
    cout << "Testing 1 Item Overloaded <<:\n" << list << endl;
  }

  // Adding 2 Items
  list.AddItem(new string("World!"));
  SECTION("AddItem(new string(\"World!\")") {
    CHECK(list.GetSize() == 2);
    CHECK(list.GetCapacity() == 25);
    CHECK(*list.GetItem(0) == "Hello");
    CHECK(*list.GetItem(1) == "World!");
    CHECK(list.GetItem(2) == NULL);
    CHECK(list.ToFile() == "Hello`World!");
    cout << "Testing 2 Items Overloaded <<:\n" << list << endl;
  }

  // Deleting the First Item
  list.DeleteItem(0);
  SECTION("DeleteItem(0) (Performs Compaction)") {
    CHECK(list.GetSize() == 1);
    CHECK(list.GetCapacity() == 25);
    CHECK(*list.GetItem(0) == "World!");
    CHECK(list.GetItem(1) == NULL);
    CHECK(list.ToFile() == "World!");
    cout << "Testing 1 Item (after deletion) Overloaded <<:\n" << list << endl;
  }

  // Deleting Non-Existant Item
  list.DeleteItem(1);
  SECTION("DeleteItem(1)") {
    CHECK(list.GetSize() == 1);
    CHECK(list.GetCapacity() == 25);
    CHECK(*list.GetItem(0) == "World!");
    CHECK(list.GetItem(1) == NULL);
    CHECK(list.ToFile() == "World!");
  }

  // Adding 24 More Items (for a total of 25)
  stringstream ss;
  for (int i = 0; i < 24; i++) {
    ss << "String " << i + 2;
    list.AddItem(new string(ss.str()));
    ss.str("");
  }
  SECTION("Adding 24 More Strings, for a total of 25") {
    CHECK(list.GetSize() == 25);
    CHECK(list.GetCapacity() == 25);
    CHECK(*list.GetItem(17) == "String 18");
    CHECK(*list.GetItem(24) == "String 25");
    CHECK(list.GetItem(25) == NULL);
    string to_file_correct = "World!`String 2`String 3`String 4`String 5`String 6`String 7`String 8`String 9`String 10`String 11`String 12`String 13`String 14`String 15`String 16`String 17`String 18`String 19`String 20`String 21`String 22`String 23`String 24`String 25";
    CHECK(list.ToFile() == to_file_correct); 
    cout << "Testing 25 Items Overloaded <<:\n" << list << endl;
  }

  // Deleting an Item
  list.DeleteItem(15);
   SECTION("DeleteItem(15)") {
    CHECK(list.GetSize() == 24);
    CHECK(list.GetCapacity() == 25);
    CHECK(*list.GetItem(17) == "String 19");
    CHECK(*list.GetItem(23) == "String 25");
    CHECK(list.GetItem(24) == NULL);
    string to_file_correct = "World!`String 2`String 3`String 4`String 5`String 6`String 7`String 8`String 9`String 10`String 11`String 12`String 13`String 14`String 15`String 17`String 18`String 19`String 20`String 21`String 22`String 23`String 24`String 25";
    CHECK(list.ToFile() == to_file_correct); 
    cout << "Testing 24 Items Overloaded <<:\n" << list << endl;
  }

  // Adding 6 more items (for a total of 30)
  // This is the first time that your array will increase in capacity
  for (int i = 26; i <= 31; i++) {
    ss << "String " << i;
    list.AddItem(new string(ss.str()));
    ss.str("");
  }
  SECTION("Adding 6 More Strings, for a total of 30. Increases Array Capacity") {
    CHECK(list.GetSize() == 30);
    CHECK(list.GetCapacity() == 35);
    CHECK(*list.GetItem(17) == "String 19");
    CHECK(*list.GetItem(29) == "String 31");
    CHECK(list.GetItem(30) == NULL);
    string to_file_correct = "World!`String 2`String 3`String 4`String 5`String 6`String 7`String 8`String 9`String 10`String 11`String 12`String 13`String 14`String 15`String 17`String 18`String 19`String 20`String 21`String 22`String 23`String 24`String 25`String 26`String 27`String 28`String 29`String 30`String 31";
    CHECK(list.ToFile() == to_file_correct); 
    cout << "Testing 25 Items Overloaded <<:\n" << list << endl;
  }

  // Sorting
  list.Sort();
  SECTION("Sorting...") {
    CHECK(list.GetSize() == 30);
    CHECK(list.GetCapacity() == 35);
    CHECK(*list.GetItem(0) == "String 10");
    CHECK(*list.GetItem(17) == "String 27");
    CHECK(*list.GetItem(29) == "World!");
    CHECK(list.GetItem(30) == NULL);
    string to_file_correct = "String 10`String 11`String 12`String 13`String 14`String 15`String 17`String 18`String 19`String 2`String 20`String 21`String 22`String 23`String 24`String 25`String 26`String 27`String 28`String 29`String 3`String 30`String 31`String 4`String 5`String 6`String 7`String 8`String 9`World!";
    CHECK(list.ToFile() == to_file_correct); 
    cout << "Testing 25 Items Overloaded <<:\n" << list << endl;
  }

  // Adding lots of strings, will increase capacity many times
  for (int i = 0; i < 970; i++)
    list.AddItem(new string("A"));
  SECTION("Adding 970 More Strings, for a total of 1000") {
    CHECK(list.GetSize() == 1000);
    CHECK(list.GetCapacity() == 1005);
  }

  // Deleting all Strings
  for (int i = 999; i >= 0; i--)
    list.DeleteItem(i);
  SECTION("Deleting All Items") {
    CHECK(list.GetSize() == 0);
    CHECK(list.GetCapacity() == 1005);
  }

  // Testing Destructor
  SECTION("Testing Destructor") {
    StringList *dynamic_list = new StringList();
    delete dynamic_list;
    dynamic_list = new StringList();
    for (int i = 0; i < 50; i++)
      dynamic_list->AddItem(new string("testing"));
    delete dynamic_list;
    CHECK(1 == 1);
  }
}