#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
 private:
  std::string info[5];

 public:
  Contact(void);
  ~Contact();
  void set_info(int index, std::string str);
  void get_info();
};

#endif