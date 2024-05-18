#include <iostream>
#include <string>

class MyClass {
public:
  std::string name;
  int lucky_num;

  MyClass(std::string s, int i) {
    this->name = s;
    this->lucky_num = i;
  }
  ~MyClass() = default;
};

int main() {
  MyClass mc("testing", 9);
  MyClass mc2("second test", 89);

  MyClass &ref = mc;

  std::cout << mc.name << '\n';
  std::cout << mc.lucky_num << '\n';

  // NOTE: Modifying the mc object!
  // Essentially, this is mc = mc2;
  ref = mc2;

  std::cout << mc.name << '\n';
  std::cout << mc.lucky_num << '\n';

  return 0;
}