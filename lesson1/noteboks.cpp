#include <algorithm>
#include <iostream>
#include <vector>
int main(void) {
  int l1, w1, l2, w2;
  std::cin >> l1 >> w1 >> l2 >> w2;
  std::vector<int> l_table(4), w_table(4), square(4);
  l_table[0] = std::max(l1, l2);
  w_table[0] = w1 + w2;
  square[0] = l_table[0] * w_table[0];
  l_table[1] = l1 + l2;
  w_table[1] = std::max(w1, w2);
  square[1] = l_table[1] * w_table[1];
  l_table[2] = std::max(l1, w2);
  w_table[2] = w1 + l2;
  square[2] = l_table[2] * w_table[2];
  l_table[3] = l1 + w2;
  w_table[3] = std::max(w1, l2);
  square[3] = l_table[3] * w_table[3];

  int index = std::distance(square.begin(),
                            std::min_element(square.begin(), square.end()));
  std::cout << l_table[index] << " " << w_table[index] << "\n";
  return 0;
}