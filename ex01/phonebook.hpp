#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>
#include <string>

#include "contact.hpp"

class PhoneBook {
 private:
  Contact book[8];
  int index;

 public:
  PhoneBook();
  ~PhoneBook();
  bool add();
  void search();
};

#endif