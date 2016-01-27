/*
 * Name        : lab_3_unit_test.cpp
 * Author      : Luke Sathrum
 * Description : Unit test to test Lab #3 Functionality
 * Sources     :
 */
#define CATCH_CONFIG_MAIN
#include "../../helpful_files/catch.hpp"

#include "lab_3.h"

TEST_CASE("Goldilocks") {
  SECTION("Goldilocks(\"porridge\", 2)") {
    CHECK(Goldilocks("porridge", 2) == "This porridge is too cold");
  }

  SECTION("Goldilocks(\"chair\", 3)") {
    CHECK(Goldilocks("chair", 3) == "This chair is just right");
  }

  SECTION("Goldilocks(\"bed\", 1)") {
    CHECK(Goldilocks("bed", 1) == "This bed is too hard");
  }
}

TEST_CASE("Rock, Paper, Scissors") {
  SECTION("RockScissorPaper ('r', 'S')") {
    CHECK(RockScissorPaper('r', 'S') == 1);
  }

  SECTION("RockScissorPaper ('R', 'p')") {
    CHECK(RockScissorPaper('R', 'p') == 2);
  }

  SECTION("RockScissorPaper ('S', 'P')") {
    CHECK(RockScissorPaper ('S', 'P') == 1);
  }

  SECTION("RockScissorPaper('r', 'r')") {
    CHECK(RockScissorPaper('r', 'r') == 3);
  }
}

TEST_CASE("ToLower()") {
  SECTION("ToLower(\"HELLO\")") {
    CHECK(ToLower("HELLO") == "hello");
  }

  SECTION("ToLower(\"gOOdbYe\")") {
    CHECK(ToLower("gOOdbYe") == "goodbye");
  }
}

TEST_CASE("ToUpper()") {
  SECTION("ToUpper(\"hello\")") {
    CHECK(ToUpper("hello") == "HELLO");
  }

  SECTION("ToUpper(\"gOOdbYe\")") {
    CHECK(ToUpper("gOOdbYe") == "GOODBYE");
  }
}

TEST_CASE("GetCharacter()") {
  SECTION("GetCharacter(\"amazing\", 3)") {
    CHECK(GetCharacter("amazing", 3) == 'z');
  }

  SECTION("GetCharacter(\"hooray!\", 6)") {
    CHECK(GetCharacter("hooray!", 6) == '!');
  }

  SECTION("GetCharacter(\"toobig\", 10)") {
    CHECK(GetCharacter("toobig", 10) == '\0');
  }

  SECTION("GetCharacter(\"toosmall\", -10)") {
    CHECK(GetCharacter("toosmall", -10) == '\0');
  }
}
