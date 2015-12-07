/*
 * Name: food_item.h
 * Author: Anthony Bostock
 * Description: header for FoodItem class 
 *
 */ 

#ifndef BOSTOCK2_
#define BOSTOCK2_

#include <iostream>
#include <string>
#include <sstream>
 using std::stringstream;
 using std::string;

#include "item.h"

class FoodItem {
  public:
  	FoodItem(string name_ = "fooditem", unsigned int value_ = 0 , unsigned int calories_ = 0 , string unit_of_measure_ = "nounits", unsigned int units_ = 0)
  		: item(name_, value_) ,
  		  calories_(calories) ,
  		  unit_of_measure_(unit_of_measure) , 
  		  units(units) {
  	}

  	~FoodItem();

  	unsigned int calories();
  	string unit_of_measure();
  	double units();

  	void set_calories();
  	void set_unit_of_measure();
  	void set_units();

  	string ToString();





  private:
  	unsigned int calories_;
  	string unit_of_measure_;
  	double units_;
};

#endif /*BOSTOCK2_*/