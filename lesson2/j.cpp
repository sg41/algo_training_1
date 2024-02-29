#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
int main(void) {
  int n;
  std::cin >> n;
  std::vector<double> notes(n);
  std::vector<std::string> state(n);
  std::cin >> notes[0];
  double min_tone = 30, max_tone = 4000;
  for (int i = 1; i < n; i++) {
    std::cin >> notes[i] >> state[i];
    if (std::abs(notes[i] - notes[i - 1]) < 1e-6) continue;
    if (state[i] == "closer") {
      if (notes[i - 1] > notes[i])
        max_tone = std::min(max_tone, (double)(notes[i - 1] + notes[i]) / 2.);
      else
        min_tone = std::max(min_tone, (double)(notes[i - 1] + notes[i]) / 2.);
    } else {
      if (notes[i - 1] > notes[i])
        min_tone = std::max(min_tone, (double)(notes[i - 1] + notes[i]) / 2.);
      else
        max_tone = std::min(max_tone, (double)(notes[i - 1] + notes[i]) / 2.);
    }
  }
  printf("%.6f %.6f\n", min_tone, max_tone);
  //   std::cout.precision(6);
  //   std::cout << min_tone << " " << max_tone << std::endl;

  return 0;
}