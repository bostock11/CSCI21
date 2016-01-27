/*
 * Name        : lab_1_unit_test.cpp
 * Author      : Luke Sathrum
 * Description : Unit test to test Lab #1 Functionality. DO NOT ALTER!
 */
#include "lab_1.h"

unsigned int ut_passed = 0, ut_failed = 0, ut_total = 0, num_of_tests = 0;
std::vector<int> failed_tests;

int main() {
  FirstLab();
  return 0;
}

void UnitTest(string user_name, char programmed_before, char my_character) {
  cout << string(40, '-') << endl;
  cout << "UNIT TEST:\n" << string(40, '-') << endl;
  if (num_of_tests != 0)
    cout << "Total Number of Test: " << num_of_tests << endl;
  string actual = "";

  Test(true, __LINE__, "Compiled");
  Test(my_character == 'z', __LINE__, "my_character initialized to 'z'");
  Test(user_name != "", __LINE__, "first_name != \"\"");
  Test(programmed_before == tolower('y') || programmed_before == tolower('n'),
       __LINE__, "programmed_before is 'y' or 'n'");

  cout << string(40, '-') << endl;
  cout << "Passed: " << ut_passed << " / " << ut_total << endl;
  OutputFailedTests();
  cout << string(40, '-') << endl;
  cout << "END OF UNIT TEST!\n";
  cout << string(40, '-') << endl;
}
// For testing (DO NOT ALTER)
void Test(bool test, int line_number, string more_info, string yours,
          string actual) {
  ut_total++;
  if (test) {
    cout << "PASSED TEST ";
    ut_passed++;
  } else {
    cout << "FAILED TEST ";
    ut_failed++;
    failed_tests.push_back(ut_total);
  }
  cout << ut_total << " " << more_info << "!" << endl;
  if (!test) {
    if (yours != "!")
      cout << "Yours: \"" << yours << '"' << endl;
    if (actual != "!")
      cout << "Actual: \"" << actual << '"' << endl;
    cout << "  Check Line " << line_number << " for more info" << endl;
  }
}

void OutputFailedTests() {
  if (failed_tests.size()) {
    cout << "Failed test number(s): ";
    for (unsigned int i = 0; i < failed_tests.size() - 1; i++)
      cout << failed_tests.at(i) << ", ";
    cout << failed_tests.at(failed_tests.size() - 1) << endl;
  }
}