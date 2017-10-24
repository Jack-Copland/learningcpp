#include<iostream>
#include<string>

/*
  takes a letter and checks if it's a vowel
*/

bool vowelCheck(char x) {
  std::string vowels = "aAeEiIoOuU";
  for (int i = 0; i < 10; ++i) {
    if (x == vowels[i])
      return true;
  }
  return false;
}

/*
  takes a sentence and outputs single letters to vowelcheck function
*/


int vowelCount(std::string str) {
  int counter = 0;
  bool vwlchk = false;

  for (int i = 0; i < str.size(); ++i) {
    vwlchk = vowelCheck(str[i]);
    if (vwlchk) {
      vwlchk = true;
      counter++;
    }
  }
  return counter;
}

int main()
{
  int tmp;
  std::string str;
  std::cout << "Hello there, please enter a sentence and I'll tell you how many vowels it has!\n";
  std::getline(std::cin, str);

  tmp = vowelCount(str);

  std::cout << tmp << std::endl;

  return 0;
}
