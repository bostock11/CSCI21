/*
 *
 * Anthony Bostock
 * 
 * Coding Assignment 3
 *
 * CSCI21
 *
 */

#include<iostream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<sstream>

using std::string;
using std::ostream;
using std::stringstream;
using std::endl;

class StringList {
  public:
    StringList();
    ~StringList();
    
    void AddItem(string*);

    void DeleteItem(int location);

    void GetItem(int location);

    int GetSize();

    int GetCapacity();
  
    void Sort();

    string ToFile();

    friend ostream& operator <<(ostream &out, const StringList &);


  private:
    StringList **array1;
    int maxCapacity;
    int currentSize;    

    void Increase();
    
    void Compact();

    void Compare();
};    
