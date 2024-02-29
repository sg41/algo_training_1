#include <iostream>
#include <vector>
int check_neighbors(std::vector<std::vector<int>> field, int y, int x) {
  int counter = 0;
  for (int i = -1; i <= 1; i++) {
    for (int j = -1; j <= 1; j++) {
      if (field[y + i][x + j] == '*') counter++;
    }
  }
  return counter;
}
int main(void) {
  int n, m, k;
  std::cin >> n >> m >> k;
  std::vector<std::pair<int, int>> mines(k);
  std::vector<std::vector<int>> field(n + 2, std::vector<int>(m + 2, 0));
  for (int i = 0; i < k; i++) {
    std::cin >> mines[i].first >> mines[i].second;
    field[mines[i].first][mines[i].second] = '*';
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (field[i][j] != '*') {
        field[i][j] = check_neighbors(field, i, j);
        std::cout << field[i][j] << " ";
      } else {
        std::cout << "* ";
      }
    }
    std::cout << std::endl;
  }
  return 0;
}