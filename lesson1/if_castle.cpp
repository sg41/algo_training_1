#include <iostream>
int main(void) {
  int a, b, c, d, e;
  std::cin >> a >> b >> c >> d >> e;
  bool ok = false;

  if (a <= d) {
    if (b <= e || c <= e) {
      ok = true;
    }
  } else if (a <= e) {
    if (b <= d || c <= d) {
      ok = true;
    }
  } else if (b <= d) {
    if (a <= e || c <= e) {
      ok = true;
    }
  } else if (b <= e) {
    if (a <= d || c <= d) {
      ok = true;
    }
  } else if (c <= d) {
    if (a <= e || b <= e) {
      ok = true;
    }
  } else if (c <= e) {
    if (a <= d || b <= d) {
      ok = true;
    }
  }
  if (ok)
    std::cout << "YES";
  else
    std::cout << "NO";
  return 0;
}