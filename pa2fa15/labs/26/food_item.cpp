/*
 * Name: food_item.cpp
 * Author: Anthony Bostock
 * Description: cpp for FoodItem class
 *
 */ 
 
#include "food_item.h"


   	FoodItem::FoodItem();
  	FoodItem::~FoodItem();

  	//Accessors

  	unsigned int FoodItem::calories(){
  	  return calories_;
  	}

  	string FoodItem::unit_of_measure(){
  	  return unit_of_measure_;
  	}

  	double FoodItem::units(){
  	  return units_;
  	}

  	//Mutators

  	void FoodItem::set_calories(unsigned int calories){
  	  calories = calories_;
  	}

  	void FoodItem::set_unit_of_measure(string unit_of_measure){
  	  unit_of_measure = unit_of_measure_;
  	}

  	void FoodItem::set_units(double units){
      units = units_;
  	}

  	string FoodItem::ToString(){
  	  stringstream ss;

  	  return ss.str();
  	}

