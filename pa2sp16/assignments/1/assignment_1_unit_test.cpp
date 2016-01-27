/*
 * Name        : assignment_1_unit_test.cpp
 * Author      : Luke Sathrum
 * Description : Unit Test For Assignment #1
 */
#define CATCH_CONFIG_MAIN
#include "../../helpful_files/catch.hpp"

#include <iostream>
#include <string>
#include <climits>
#include "assignment_1.h"
using std::cout;
using std::endl;
using std::string;

TEST_CASE("Check for Alphabetic Characters") {
  SECTION("CheckAlphabetic(\"\")") {
    CHECK(CheckAlphabetic("") == false);
  }

  SECTION("CheckAlphabetic(\"ABC123\")") {
    CHECK(CheckAlphabetic("ABC123") == false);
  }

  SECTION("CheckAlphabetic(\"ABC\")") {
    CHECK(CheckAlphabetic("ABC") == true);
  }

  SECTION("CheckAlphabetic(\"ABCxyz\")") {
    CHECK(CheckAlphabetic("ABCxyz") == true);
  }

  SECTION("CheckAlphabetic(\"ABC\\t\")") {
    CHECK(CheckAlphabetic("ABC\t") == false);
  }

  SECTION("CheckAlphabetic(\" ABC \")") {
    CHECK(CheckAlphabetic(" ABC ") == false);
  }

  SECTION("CheckAlphabetic(\"!@#$%^&*()\")") {
    CHECK(CheckAlphabetic("!@#$%^&*()") == false);
  }

  SECTION("CheckAlphabetic(\"123ABC\")") {
    CHECK(CheckAlphabetic("123ABC") == false);
  }

  SECTION("CheckAlphabetic(\"AbCdEfGhIjKlMnOpQrStUvWxYz\")") {
    CHECK(CheckAlphabetic("AbCdEfGhIjKlMnOpQrStUvWxYz") == true);
  }
}

TEST_CASE("Encrypt String") {
  string encrypted = "";
  SECTION("EncryptString(\"\", 5)") {
    CHECK(EncryptString(encrypted, 5) == false);
    CHECK(encrypted == "");
  }

  SECTION("EncryptString(\"Hello World!\", 5)") {
    encrypted = "Hello World!";
    CHECK(EncryptString(encrypted, 5) == false);
    CHECK(encrypted == "Hello World!");
  }

  SECTION("EncryptString(\"HelloWorld!\", 5)") {
    encrypted = "HelloWorld!";
    CHECK(EncryptString(encrypted, 5) == false);
    CHECK(encrypted == "HelloWorld!");
  }

  SECTION("EncryptString(\"HelloWorld\", 5)") {
    encrypted = "HelloWorld";
    CHECK(EncryptString(encrypted, 5) == true);
    CHECK(encrypted == "MjqqtBtwqi");
  }

  SECTION("EncryptString(\"HelloWorld\", -5)") {
    encrypted = "HelloWorld";
    CHECK(EncryptString(encrypted, -5) == true);
    CHECK(encrypted == "CzggjRjmgy");
  }

  SECTION("EncryptString(\"HelloWorld\", 25)") {
    encrypted = "HelloWorld";
    CHECK(EncryptString(encrypted, 25) == true);
    CHECK(encrypted == "GdkknVnqkc");
  }

  SECTION("EncryptString(\"HelloWorld\", 26)") {
    encrypted = "HelloWorld";
    CHECK(EncryptString(encrypted, 26) == true);
    CHECK(encrypted == "HelloWorld");
  }

  SECTION("EncryptString(\"HelloWorld\", 1000000)") {
    encrypted = "HelloWorld";
    CHECK(EncryptString(encrypted, 1000000) == true);
    CHECK(encrypted == "VszzcKcfzr");
  }

  SECTION("EncryptString(\"HelloWorld\", -1000000)") {
    encrypted = "HelloWorld";
    CHECK(EncryptString(encrypted, -1000000) == true);
    CHECK(encrypted == "TqxxaIadxp");
  }
}

TEST_CASE("Decrypt String") {
  string encrypted = "";
  SECTION("DecryptString(\"\", 5)") {
    CHECK(DecryptString(encrypted, 5) == false);
    CHECK(encrypted == "");
  }

  SECTION("DecryptString(\"Hello World!\", 5)") {
    encrypted = "Hello World!";
    CHECK(DecryptString(encrypted, 5) == false);
    CHECK(encrypted == "Hello World!");
  }

  SECTION("DecryptString(\"HelloWorld!\", 5)") {
    encrypted = "HelloWorld!";
    CHECK(DecryptString(encrypted, 5) == false);
    CHECK(encrypted == "HelloWorld!");
  }

  SECTION("DecryptString(\"MjqqtBtwqi\", 5)") {
    encrypted = "MjqqtBtwqi";
    CHECK(DecryptString(encrypted, 5) == true);
    CHECK(encrypted == "HelloWorld");
  }

  SECTION("DecryptString(\"CzggjRjmgy\", -5)") {
    encrypted = "CzggjRjmgy";
    CHECK(DecryptString(encrypted, -5) == true);
    CHECK(encrypted == "HelloWorld");
  }

  SECTION("DecryptString(\"GdkknVnqkc\", 25)") {
    encrypted = "GdkknVnqkc";
    CHECK(DecryptString(encrypted, 25) == true);
    CHECK(encrypted == "HelloWorld");
  }

  SECTION("DecryptString(\"HelloWorld\", 26)") {
    encrypted = "HelloWorld";
    CHECK(DecryptString(encrypted, 26) == true);
    CHECK(encrypted == "HelloWorld");
  }

  SECTION("DecryptString(\"VszzcKcfzr\", 1000000)") {
    encrypted = "VszzcKcfzr";
    CHECK(DecryptString(encrypted, 1000000) == true);
    CHECK(encrypted == "HelloWorld");
  }

  SECTION("DecryptString(\"TqxxaIadxp\", -1000000)") {
    encrypted = "TqxxaIadxp";
    CHECK(DecryptString(encrypted, -1000000) == true);
    CHECK(encrypted == "HelloWorld");
  }
}

TEST_CASE("Compute Average of Array") {
  double values[] = { 10.5, 20.3, 30.2, 12.4 };

  SECTION("ComputeAverage([10.5, 20.3, 30.2, 12.4])") {
    CHECK(ComputeAverage(values, 4) > 18.349);
    CHECK(ComputeAverage(values, 4) < 18.351);
  }

  SECTION("ComputeAverage([0.0, 0.0, 0.0, 0.0])") {
    values[0] = 0, values[1] = 0, values[2] = 0, values[3] = 0;
    CHECK(ComputeAverage(values, 4) == 0.0);
  }

  SECTION("ComputeAverage([5.0, 7.0, 11.0, 7.0])") {
    values[0] = 5, values[1] = 7, values[2] = 11, values[3] = 7;
    CHECK(ComputeAverage(values, 4) > 7.499);
    CHECK(ComputeAverage(values, 4) < 7.501);
  }

  SECTION("ComputeAverage([-10.5, -20.3, -30.2, -12.4])") {
    values[0] = -10.5, values[1] = -20.3, values[2] = -30.2, values[3] = -12.4;
    CHECK(ComputeAverage(values, 4) < -18.349);
    CHECK(ComputeAverage(values, 4) > -18.351);
  }

  SECTION("ComputeAverage([-5.0, 0.0, 5.0, 0.0])") {
    values[0] = -5, values[1] = 0, values[2] = 5, values[3] = 0;
    CHECK(ComputeAverage(values, 4) == 0.0);
  }
}

TEST_CASE("Find Minimum Value in Array") {
  double values[] = { -1.1, 0.0, 1.1 };

  SECTION("FindMinValue([-1.1, 0, 1.1])") {
    CHECK(FindMinValue(values, 3) < -1.099);
    CHECK(FindMinValue(values, 3) > -1.101);
  }

  SECTION("FindMinValue([-3.1, -3.2, -3.3])") {
    values[0] = -3.1, values[1] = -3.2, values[2] = -3.3;
    CHECK(FindMinValue(values, 3) < -3.209);
    CHECK(FindMinValue(values, 3) > -3.301);
  }

  SECTION("FindMinValue([0, 1.1, 2.2])") {
    values[0] = 0.0, values[1] = 1.1, values[2] = 2.2;
    CHECK(FindMinValue(values, 3) == 0.0);
  }

  SECTION("FindMinValue([0.0, 0.0, 0.0])") {
    values[0] = 1, values[1] = 1, values[2] = 1;
    CHECK(FindMinValue(values, 3) > 0.999);
    CHECK(FindMinValue(values, 3) < 1.001);
  }

  SECTION("FindMinValue([INT_MAX, INT_MAX, INT_MAX])") {
    values[0] = INT_MAX, values[1] = INT_MAX, values[2] = INT_MAX;
    CHECK(FindMinValue(values, 3) == INT_MAX);
  }
}

TEST_CASE("Find Maxmium Value in Array") {
  double values[] = { -1.1, 0.0, 1.1 };

  SECTION("FindMaxValue([-1.1, 0, 1.1])") {
    CHECK(FindMaxValue(values, 3) > 1.099);
    CHECK(FindMaxValue(values, 3) < 1.101);
  }

  SECTION("FindMaxValue([-3.1, -3.2, -3.3])") {
    values[0] = -3.1, values[1] = -3.2, values[2] = -3.3;
    CHECK(FindMaxValue(values, 3) < -3.009);
    CHECK(FindMaxValue(values, 3) > -3.101);
  }

  SECTION("FindMaxValue([0, 1.1, 2.2])") {
    values[0] = 0.0, values[1] = 1.1, values[2] = 2.2;
    CHECK(FindMaxValue(values, 3) > 2.199);
    CHECK(FindMaxValue(values, 3) < 2.201);
  }

  SECTION("FindMaxValue([0.0, 0.0, 0.0])") {
    values[0] = 1, values[1] = 1, values[2] = 1;
    CHECK(FindMaxValue(values, 3) > 0.999);
    CHECK(FindMaxValue(values, 3) < 1.001);
  }

  SECTION("FindMaxValue([INT_MIN, INT_MIN, INT_MIN])") {
    values[0] = INT_MIN, values[1] = INT_MIN, values[2] = INT_MIN;
    CHECK(FindMaxValue(values, 3) == INT_MIN);
  }
}
