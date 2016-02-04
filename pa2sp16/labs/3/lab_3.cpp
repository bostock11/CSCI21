/*
 * Name        : lab_3.cpp
 * Author      : Anthony Bostock
 * Description : Using branching statements, looping statements and string and
 *               character functions complete the functions
 */

#include "lab_3.h"

/*
 * Tell the story of Goldilocks. For example, if item is "bed" and number is 1,
 * the story will say "This bed is too soft". "item" parameter will be passed
 * in as all lowercase characters
 * Cases:
 * -item: "porridge", number: 1, return "This porridge is too hot"
 * -item: "porridge", number: 2, return "This porridge is too cold"
 * -item: "porridge", number: 3, return "This porridge is just right"
 * -item: "chair", number: 1, return "This chair is too big"
 * -item: "chair", number: 2, return "This chair is too small"
 i* -item: "chair", number: 3, return "This chair is just right"
 * -item: "bed", number: 1, return "This bed is too hard"
 * -item: "bed", number: 2, return "This bed is too soft"
 * -item: "bed", number: 3, return "This bed is just right"
 * @param string item - Represents the item in the story ("porridge", "chair",
 *                      and "bed" are the only legal values -- will default to
 *                      "bed" on invalid argument)
 * @param int number - which item (1, 2, and 3 are the only legal values -- will
 *                     default to 3 on invalid argument)
 * @return string - The output string specified in the documentation above
 */
string Goldilocks(string item, int number) {
 
  if(item == "porridge" && number == 1) {
    return "This porridge is too hot";
    }
  else if(item == "porridge" && number == 2) {
    return "This porridge is too cold";
  }
    else {
    return "This porridge is just right";
  }

     if(item == "chair" && number == 1) {
    return "This chair is too big";
    }
  else if(item == "" && number == 2) {
    return "This chair is too small";
  }
    else {
    return "This chair is just right";
  }

    if(item == "bed" && number == 1) {
    return "This bed is too hard";
    }
  else if(item == "bed" && number == 2) {
    return "This bed is too soft";
  }
    else {
    return "This bed is just right";
  }

}

/*
 * Compute the outcome of a round of a rock-scissor-paper game. Lowercase or uppercase values for player_one and player_two arguments are acceptable.
*/
int RockScissorPaper (char player_one, char player_two) {
  switch(tolower(player_one)) {
    case 'r':
      if (tolower(player_two) == 's') {
        return 1;
       } else if (tolower(player_two) == 'p') {
         return 2;
       } else if (tolower(player_two) == 'r') {
         return 3;
       }
    
    case 'p':
      if (tolower(player_two) == 'r') {
        return 1;
      } else if (tolower(player_two) == 's') {
        return 2;
      } else if (tolower(player_two) == 'p') {
        return 3;
      }

    case 's':
      if (tolower(player_two) == 'p') {
        return 1;
      } else if (tolower(player_two) == 'r') {
        return 2;
      } else if (tolower(player_two) == 's') {
        return 3;
      }

 }
  return 0;
}


/*
 * Return the input string with all characters converted to lowercase.
 * @param string input - The string that will be converted to all lowercase
 * @return string - a string containing the converted input string
 */
string ToLower(string input) {
  // CODE HERE
  for (unsigned int i = 0; i < input.length(); i++) {
    input.at(i) = tolower(input.at(i));
  }
  return input;
}

/*
 * Return the input string with all characters converted to uppercase.
 * @param string input - The string that will be converted to all uppercase
 * @return string - a string containing the converted input string
 */
string ToUpper(string input) {
  // CODE HERE
	for (unsigned int i = 0; i <input.length(); i++) {
		input.at(i) = toupper(input.at(i));
	}
	return input;
}

/*
 * Return the character from the input string at index char_index.
 * @param string input - The string from which the character will be taken
 * @param unsigned int char_index - The zero-indexed position of the character
 *                                  to return. char_index must be >= 0 and
 *                                  < length of input string.
 * @return char - A char containing the character from the input string at
 *                char_index position, or the null character if char_index is
 *                outside the range of the string. The null character is '\0'
 */
char GetCharacter(string input, unsigned int char_index) {
	if (char_index > input.length()) {
		return '\0';
} else {
		
		return input.at(char_index);
}
}
