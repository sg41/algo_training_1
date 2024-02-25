#include <cmath>
#include <iostream>
int main(void) {
  int a, b, c;
  std::cin >> a >> b >> c;
  if (a == 0 && b == c * c) {
    std::cout << "MANY SOLUTIONS\n";
  } else if (a != 0) {
    int x = (c * c - b) / a;
    if (c < 0 || (a * x + b) < 0) {
      std::cout << "NO SOLUTION\n";
    } else if (std::sqrt((double)a * x + b) == c) {
      std::cout << x << "\n";
    } else {
      std::cout << "NO SOLUTION"
                << "\n";
    }
  } else {
    std::cout << "NO SOLUTION\n";
  }
  return 0;
}