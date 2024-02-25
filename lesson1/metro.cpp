#include <iostream>
#include <tuple>

std::tuple<int, int> time(int a, int n) {
  int min = n + a * (n - 1);
  int max = min + 2 * a;
  return std::make_tuple(min, max);
}
int main(void) {
  int a, b, n, m;
  std::cin >> a >> b >> n >> m;

  int min1, max1, min2, max2;
  std::tie(min1, max1) = time(a, n);
  std::tie(min2, max2) = time(b, m);
  int min = std::max(min1, min2);
  int max = std::min(max1, max2);
  if (min > max) {
    std::cout << "-1\n";
  } else {
    std::cout << min << " " << max << "\n";
  }

  return 0;
}