#include <iostream>

int main() {
  int arr[6] = {4, 8, 15, 16, 23, 42};
  int *mypointer = arr;

  for (int i = 0; i < 6; ++i) {
    std::cout << *mypointer << '\n';
    ++mypointer;
  }
}