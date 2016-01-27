/*
 * Name        : lab_1.cpp
 * Author      : Anthony Bostock
 * Description : Our First Lab of the Semester!
 */
#include "lab_1.h"

// Use the Provided Comments to Complete the Lab
void FirstLab() {
  // (1) Declare a string variable named first_name
	string first_name;
  // (2) Declare a character variable named programmed_before and another named
  //     my_character. Initialize both of them to the value 'z'
	char programmed_before = 'z';
	char my_character = 'z';
  // (3) Display a welcome message to standard output
	cout << "Welcome!" << endl;
  // (4) Prompt the user for their first name
	cout << "What is your first name?" << endl;
  // (5) Read the name from standard input and store in the variable first_name
	cin >> first_name;
  // (6) Display the message "Nice to meet you, NAME" where NAME is replaced
  //     with the value of first_name
	cout << "Nice to meet you, " << first_name << endl;
  // (7) Ask the user if they have programmed before. Make sure you inform them
  //     that you want the answer as a single character (y/n)
	cout << "Have you programmed before? (y/n)" << endl;
  // (8): Read in the answer from standard input and store in the variable
  //      programmed_before
	cin >> programmed_before;

  // For testing (DO NOT ALTER)
  UnitTest(first_name, programmed_before, my_character);
}
