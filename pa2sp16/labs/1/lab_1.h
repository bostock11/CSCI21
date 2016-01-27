/*
 * Name        : lab_1.h
 * Author      : Luke Sathrum
 * Description : Header File for Lab #1. DO NOT ALTER!
 */
#ifndef LAB_H
#define LAB_H

#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void FirstLab();
void UnitTest(string user_name, char programmed_before, char my_character);
void Test(bool test, int line_number, string more_info = "", string yours = "!",
          string actual = "!");
void OutputFailedTests();


#endif
