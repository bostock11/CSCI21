/*
 * Name        : assignment_5.cpp
 * Author      : Anthony Bostock
 * Description : cpp for todo ui
 *               
 */
#include <iostream>
#include "todo_ui.h"
#include "CinReader.h"
#include "todo_list.h"
#include "todo_item.h"






   	TodoUI::TodoUI(){
   	  list1 = new TodoList;
   	}

  	TodoUI::~TodoUI(){
  	
      delete list1;
      list1 = NULL;
    }


    //Member function 1
    void TodoUI::Menu(){
      int num = 0;
      
      

      while (num != 7) {
      cout << "  Enter an option below" << endl
      	   << "|------------------------|" << endl
      	   << "| 1. Create an Item      |" << endl
      	   << "| 2. Edit an Item        |" << endl
      	   << "| 3. Delete an Item      |" << endl
      	   << "| 4. View All Items      |" << endl
      	   << "| 5. View Specific Items |" << endl
      	   << "| 6. Delete All Items    |" << endl
      	   << "| 7. Quit Program        |" << endl
      	   << "|------------------------|" << endl;

    

     num = input.readInt(1,7);


    switch (num) {
    	case 1: {
    	cout << "Enter description" << endl;
    	string description = input.readString(false);
    	cout << "Enter priority (1-5)" << endl;	
    	int priority = input.readInt(1,5);
    	list1->AddItem(new TodoItem(description, priority, false));
    	} break;

    	case 2: {
    	if (list1->GetSize() == 0){
    		cout << "List is empty" << endl;
    	}
    	cout << "Which item would you like to edit?" << endl;
    	cout << *list1 << endl;
    	int i = input.readInt(1,list1->GetSize());
		TodoItem* item = list1->GetItem(i);    	
   		
    	cout << "Edit description" << endl;
    	string description = input.readString(false);
    	cout << "Edit priority (1-5)" << endl;
    	int priority = input.readInt(1,5);
    	item->set_description(description);
    	item->set_priority(priority);

    	} break;

    	case 3: {
    	cout << "Which item would you like to delete?" << endl;
    	cout << *list1 << endl;
    	int i = input.readInt(1,list1->GetSize());
    	list1->DeleteItem(i);

    	cout << "Item deleted!" << endl;
    	} break;

    	case 4:{
    	if (list1->GetSize() == 0){
    		cout << "List is empty" << endl;
    	}
    	
    	cout << *list1 << endl;
    	} break;

    	case 5:{
    	cout << "Which item would you like to view specifically?" << endl;
    	cout << *list1 << endl;
    	int i = input.readInt(1,list1->GetSize());
    	cout << *list1->GetItem(i) << endl;

    	} break;
    	case 6: {
    		while(list1->GetSize()) {
    			list1->DeleteItem(1);
    		}
    	cout << "All items deleted!" << endl;

//delete all 
    	} break;
    	case 7:
// quit program
    	break;
    	
    	default:
    	cout << "Please enter a number 1-7" << endl;
    }
}
}
