/*
 * Name        : lab_5.cpp
 * Author      : Anthony Bostock
 * Description : Practicing Functions. Use this file to write your
 *               Function Definitions (what goes below main()).
 */

#include "lab_5.h"




void Hello() {
	cout << "Hello world!";
}


void PrintMessage(const string message) {
	cout << message;
}


int GetAnswer() {
	return 42;
}




int FindLarger(const int x, const int y) { 
	if (x == y) {
		return x;
	}
	if (x > y) {
		return x;
	} else {
		return y;
	}
}


string BuildMessage(string str, bool lo) {
	if (str.size()) {
		if (lo == true) {
			for (unsigned int i = 0; i < str.length(); i++) {
				str.at(i) =	toupper(str.at(i));
			}
		}
	return "Message: " + str;
	}	

	return "Message: empty";
		
}
