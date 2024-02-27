#include <iostream>
#include <set>
#include <vector>
int main(void) {
  int n;
  std::cin >> n;
  std::vector<int> m(n);
  std::multiset<int> m_sorted;
  int max = -1;
  int imax = -1;
  for (int i = 0; i < n; i++) {
    std::cin >> m[i];
    if (m[i] > max) {
      max = m[i];
      imax = i;
    }
    m_sorted.insert(m[i]);
  }
  int k = 0, k_min = n + 1;
  for (int i = 1; i < n - 1; i++) {
    if (m[i] % 10 == 5 && m[i + 1] < m[i] && i > imax) {
      k = std::distance(m_sorted.upper_bound(m[i]), m_sorted.end()) + 1;
      if (k < k_min) k_min = k;
    }
  }
  if (k_min == n + 1) k_min = 0;
  std::cout << k_min << std::endl;
  return 0;
}