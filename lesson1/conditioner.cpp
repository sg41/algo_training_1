#include <iostream>
int main(void) {
  int troom, tcond;
  std::string mode;
  std::cin >> troom >> tcond >> mode;
  if (mode == "heat") {
    if (troom < tcond) {
      std::cout << tcond << std::endl;
    } else {
      std::cout << troom << std::endl;
    }
  }
  if (mode == "freeze") {
    if (troom > tcond) {
      std::cout << tcond << std::endl;
    } else {
      std::cout << troom << std::endl;
    }
  }
  if (mode == "auto") {
    std::cout << tcond << std::endl;
  }
  if (mode == "fan") {
    std::cout << troom << std::endl;
  }
  return 0;
}