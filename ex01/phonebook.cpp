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

bool PhoneBook::search() {
  std::string str;
  std::cout << std::left << std::setw(10) << "index"
            << "|" << std::left << std::setw(10) << "first name"
            << "|" << std::left << std::setw(10) << "last name"
            << "|" << std::left << std::setw(10) << "nickname"
            << "|" << std::endl;

  for (int i = 0; i < this->index; i++) {
    std::cout << std::left << std::setw(10) << i << "|";
    for (int i = 0; i < 3; i++) {
      str = this->book[i].get_info(i);
      if (str.length() > 10)
        str = str.substr(0, 9) + ".";
      std::cout << std::left << std::setw(10) << str << "|";
    }
  }

  return true;
}
