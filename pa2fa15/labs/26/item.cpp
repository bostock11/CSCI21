 /*
 * Name: item.cpp
 * Author: Anthony Bostock
 * Description: cpp for base class item
 *
 */ 
#include "item.h"

 	item::item(){

 	}

 	item::~item(){

 	}

 	//Accessors

    string item::name(){
      return name_;
    }

    unsigned int item::value(){
      return value_;
    }

    //Mutators

    void item::set_name(string name){
      name = name_;
    }

    void item::set_value(unsigned int value){
      value = value_;
    }

    string item::ToString(){
      stringstream ss;

      return ss.str();
    }
