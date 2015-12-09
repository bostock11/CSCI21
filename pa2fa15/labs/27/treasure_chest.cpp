/*
 * Name        : treasure_chest.cpp
 * Author      : Anthony Bostock
 * Description : Using the STL functon definitions
 */


#include "treasure_chest.h"

void TreasureChest::AddItem(const Item& item_to_add){
	chest_.push_back(item_to_add);
}

void TreasureChest::InsertItem(const Item& item_to_add, unsigned int position){
	chest_.insert(item_to_add, position);
}

const Item* TreasureChest::GetItem(unsigned int position){

}

Item TreasureChest::RemoveItem(unsigned int position){
	chest_.erase(position);
}

void TreasureChest::Clear(){
	chest_.clear();
}

bool TreasureChest::Empty() const{
	if (chest_.empty()) { 
		return true;
	} else {
		return false;
	}
}

unsigned int TreasureChest::GetSize() const{
	return chest_.size();
}

void TreasureChest::SortByName(){
	
}

void TreasureChest::SortByValue(){
	sort(chest_.begin(), chest_.end());
}

void TreasureChest::SortByQuantity(){


}

ostream& operator<<(ostream& outs, const TreasureChest& src){
	for (vector<int>::iterator it = chest_.begin() ; it != chest_.end(); ++it){
    	  outs << ' ' << *it;
    	}
	}
	return outs;
}

string TreasureChest::ToString(){
	string a = "what";
	return a;
}


/*
 * Compare two items by name.
 * @return true if lsrc.name_ < rsrc.name_, else false
 */
bool TreasureChest::CompareItemsByName(const Item& lsrc, const Item& rsrc){
	return true;
}
/*
 * Compare two items by value.
 * @return true if lsrc.value_ < rsrc.value_, else false
 */
bool TreasureChest::CompareItemsByValue(const Item& lsrc, const Item& rsrc){
	return true;
}

/*
 * Compare two items by quantity.
 * @return true if lsrc.quantity_ < rsrc.quantity_, else false
 */
bool TreasureChest::CompareItemsByQuantity(const Item& lsrc, const Item& rsrc){
	return true;
}


