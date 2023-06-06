#include <iostream>
#include <string>
#include <map>

bool checkAnagram(std::string &first, std::string &second) {
  std::map<char, int> word_1;
  std::map<char, int> word_2;
  for (auto &ch : first)
    ++word_1[ch];
  for (auto &ch : second)
    ++word_2[ch];
  if (word_1 == word_2)
    return true;
  else
    return false;
}
int main() {
  std::cout << "Enter word number one:" << std::endl;
  std::string firstWord;
  std::cin >> firstWord;
  std::cout << "Enter word number two:" << std::endl;
  std::string secondWord;
  std::cin >> secondWord;
  if (firstWord.length() != secondWord.length()) {
    std::cout << "These words are not anagram" << std::endl;
    return 1;
  } else if (checkAnagram(firstWord, secondWord))
    std::cout << "These words are anagram" << std::endl;
  else
    std::cout << "These words are not anagram" << std::endl;
  return 0;
}
