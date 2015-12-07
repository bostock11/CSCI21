/*
 * Name: magic_item.h
 * Author: Anthony Bostock
 * Description: header for MagicItem class
 *
 */ 

#ifndef BOSTOCK3_
#define BOSTOCK3_

#include <iostream>
#include <string>
#include <sstream>
 using std::stringstream;
 using std::string;


#include "item.h"
#include "food_item.h"

class MagicItem {
  public:
  	MagicItem(string name_ = "magicitem" , unsigned int value_ = 0 , string description_ = "nodescription" , unsigned int mana_required_ = 0)
  	  : item(name_ , value_) ,
  	    description_(description) , 
  	    mana_required_(mana_required) {
  	}

  	~MagicItem();

  	string description();
  	unsigned int mana_required();

  	void set_description();
  	void set_mana_required();

  	string ToString();

  private:
  	string description_;
  	unsigned int mana_required_;

};

#endif /*_BOSTOCK3_*/