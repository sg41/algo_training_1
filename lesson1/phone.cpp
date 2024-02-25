#include <iostream>
#include <regex>
bool check_phone(std::string phone1, std::string phone2) {
  bool res = true;
  int count = 0;
  for (int i = phone1.size() - 1, j = phone2.size() - 1;
       count < 10 && i >= 0 && j >= 0; i--, j--) {
    if (phone1[i] != phone2[j]) {
      res = false;
      break;
    }
    count++;
  }
  return res;
}
int main(void) {
  std::string phones[4];
  for (auto& phone : phones) {
    std::string input;
    std::cin >> input;
    for (int i = 0; i < input.size(); i++) {
      if (input[i] >= '0' && input[i] <= '9') {
        phone += input[i];
      }
    }
    if (phone.size() < 10) phone = "495" + phone;
  }

  for (int i = 1; i < 4; i++) {
    if (check_phone(phones[0], phones[i])) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
  return 0;
}