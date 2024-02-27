#include <iostream>
#include <set>
int main(void) {
  int n;
  std::cin >> n;
  std::multiset<int> a;
  for (int i = 0; i < n; i++) {
    int c;
    std::cin >> c;
    a.insert(c);
  }
  int x;
  std::cin >> x;
  int res = 0;
  int i = 0;
  for (auto d : a) {
    if (x == d) {
      res = x;
      break;
    } else if (x < d) {
      if (i == 0) {
        res = d;
        break;
      }
      res = (x - res < d - x) ? res : d;
      break;
    } else {  // x>d
      res = d;
    }
    i++;
  }

  std::cout << res << std::endl;

  return 0;
}