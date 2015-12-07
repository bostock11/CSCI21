/*
 * Name: item.h
 * Author: Anthony Bostock
 * Description: header for base class item
 *
 */ 

#ifndef BOSTOCK1_
#define BOSTOCK1_

#include <iostream>
#include <string>
#include <sstream>
 using std::stringstream;
 using std::string;

class item {
  public: 
    item(string name_ = "item", unsigned int value_ = 0)
    	: name_(name),	
    	 value_(value) {
    }

    ~item();

    string name();

    unsigned int value();

    void set_name();

    void set_value();

    string ToString();



  private:
  	string name_;
  	unsigned int value_;
};

#endif /*BOSTOCK1_*/