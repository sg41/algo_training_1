#include <iostream>
#include <vector>

bool check_symmetric(std::vector<int>& a, int start, int end) {
  for (int i = start, j = end; i < j; i++, j--) {
    if (a[i] != a[j]) {
      return false;
    }
  }
  return true;
}
int main(void) {
  int n;
  std::cin >> n;
  std::vector<int> a(n);

  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  for (int i = 0; i < a.size(); i++) {
    if (check_symmetric(a, i, a.size() - 1)) {
      std::cout << i << std::endl;
      for (int j = i - 1; j >= 0; j--) {
        std::cout << a[j] << " ";
      }
      break;
    }
  }

  return 0;
}