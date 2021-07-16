#include "contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void Contact::set_info(int index, std::string str) {
  this->info[index] = str;
}
