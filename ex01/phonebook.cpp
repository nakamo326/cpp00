#include "phonebook.hpp"

int main(int argc, char const *argv[]) {
  commands c;

  while (1) {
    switch (c) {
    case ADD:
      add_contact();
      break;
    case SEARCH:
      search_contact();
      break;
    case EXIT:
      exit(0);
    default:
      break;
    }
  }
  return 0;
}
