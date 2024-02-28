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
  int k_min = 0, best_dist = -1, best_index = -1;
  for (int i = 1; i < n - 1; i++) {
    if (m[i] % 10 == 5 && m[i + 1] < m[i] && i > imax) {
      if (m[i] > best_dist) {
        best_dist = m[i];
        best_index = i;
        if (best_dist == max) break;
      }
    }
  }
  if (best_index != -1)
    k_min =
        std::distance(m_sorted.upper_bound(m[best_index]), m_sorted.end()) + 1;
  std::cout << k_min << std::endl;
  return 0;
}