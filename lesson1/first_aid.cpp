#include <cmath>
#include <iostream>
int main(void) {
  int k1, m, k2, p2, n2;
  int p1 = -1, n1 = -1;
  std::cin >> k1 >> m >> k2 >> p2 >> n2;
  // if (k1 == 0 || m == 0 || k2 == 0 || p2 == 0 || n2 == 0) {
  //   n1 = -1;
  //   p1 = -1;
  // } else {
  //   if ((m * (p2 - 1) + (n2 - 1)) == 0 || (m * (p2 - 1) + (n2)) == 0) {
  //     p1 = 0;
  //     n1 = 0;
  //   } else {
  //     int c1 = std::ceil((double)(k2 - 1) / (m * (p2 - 1) + (n2 - 1)));
  //     int c2 = std::ceil((double)(k2) / (m * (p2 - 1) + (n2)));
  //     if (c1 != c2) {
  //       p1 = 0;
  //       n1 = 0;
  //     } else if (k2 > m * (p2 - 1) * c1 + (n2 - 1) * c1 &&
  //                k2 <= m * (p2 - 1) * c1 + (n2)*c1) {
  //       p1 = k1 / (c1 * m) + 1;
  //       n1 = std::ceil((double)k1 / c1) - m * (p1 - 1);
  //     } else {
  //       p1 = -1;
  //       n1 = -1;
  //     }
  //   }
  //   if (m == 1) {
  //     n1 = 1;
  //   }
  // }
  int vp = 0, vn = 0;

  for (int c = 1; c <= 10e6; c++) {
    if (p2 == (k2 - 1) / (m * c) + 1 &&
        n2 == (k2 - 1 - m * (p2 - 1) * c) / c + 1) {
      int p1_tmp = (k1 - 1) / (c * m) + 1;
      int n1_tmp = (k1 - 1 - m * (p1_tmp - 1) * c) / c + 1;
      if (p1_tmp != p1) {
        p1 = p1_tmp;
        vp++;
      }
      if (n1_tmp != n1) {
        n1 = n1_tmp;
        vn++;
      }
    }
  }
  if (vp > 1) {
    p1 = 0;
  }
  if (vn > 1) {
    n1 = 0;
  }

  std::cout << p1 << " " << n1 << std::endl;
  return 0;
}
