#include "main.h"

int main(void) {
  std::string c;

  while (1) {
    std::cout << "INPUT COMMAND: ";
    std::cin >> c;
    if (std::cin.eof()) {
      std::cout << std::endl << "GOT EOF. BYE" << std::endl;
      break;
    }
    if (c == "ADD")
      std::cout << "get add command" << std::endl;
    // add_contact();
    else if (c == "SEARCH")
      std::cout << "get search command" << std::endl;
    // search_contact();
    else if (c == "EXIT") {
      std::cout << "get exit command" << std::endl;
      break;
    } else {
      std::cout << "INVALID COMMAND!" << std::endl;
      continue;
    }
  }
  return 0;
}
