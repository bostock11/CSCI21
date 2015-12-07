/*
 * Name: magic_item.cpp
 * Author: Anthony Bostock
 * Description: cpp for MagicItem class
 *
 */ 
#include "magic_item.h"

   	MagicItem::MagicItem()
   	  :		{
   	}
  	MagicItem::~MagicItem(){
  	}

  	//Accessors

  	string MagicItem::description(){
  	  return description_;
  	}

  	unsigned int MagicItem::mana_required(){
  	  return mana_required_;
  	}

  	//Mutators

  	void MagicItem::set_description(string description){
  	  description = description_;
  	}
  	void MagicItem::set_mana_required(unsigned int mana_required){
  	  mana_required = mana_required_;
  	}

  	string MagicItem::ToString(){
  	  stringstream ss;

  	  return ss.str();
  	}