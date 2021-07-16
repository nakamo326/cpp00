#include "phonebook.hpp"

PhoneBook::PhoneBook() {
  this->index = 0;
}

PhoneBook::~PhoneBook() {
}

bool PhoneBook::add() {
  const char q_list[][15] = {
      "first name", "last name", "nickname", "phone number", "darkest secret"};
  std::string answer;

  for (int i = 0; i < 5; i++) {
    std::cout << q_list[i] << ": ";
    std::getline(std::cin, answer, '\n');
    if (std::cin.eof()) {
      return false;
    }
    this->book[index].set_info(i, answer);
  }
  std::cout << "contact added successfully." << std::endl;
  this->index += 1;
  return true;
}
