#include <iostream>
int main(void) {
  int N, K, M;
  std::cin >> N >> K >> M;
  int m_rest, k_rest, n_k, n_m, result = 0;
  while (N >= K) {
    n_k = N / K;
    k_rest = N % K;
    n_m = (int)(K / M) * n_k;
    m_rest = K % M;
    N = n_k * m_rest + k_rest;
    result += n_m;
    if (M > K) break;
  }
  std::cout << result << std::endl;
  return 0;
}