//#include <bits/stdc++.h>
#include<iostream>
#include<vector>

int main() {
  int N;
  std::cin >> N;
  std::vector<int> A(N);
  for (int i = 0; i < N; i++) {
    std::cin >> A.at(i);
  }
  int sum = 0;
  for (int i = 0; i < N; i++) {
    sum += A.at(i);

  }
  int mean = sum / N;
  for (int i = 0; i < N; i++) {
    if (A.at(i) > mean) {
      std::cout << A.at(i) - mean << std::endl;
    }
    else {
      std::cout << mean - A.at(i) << std::endl;
    }

  }

}
