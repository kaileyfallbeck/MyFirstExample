#include <cmath>
#include <iostream>

int main() {
  std::cout << "Hi, please enter two whole numbers: ";

  int x, y;

  std::cin >> x >> y;
  std::cout << x << " + " << y << " = " << x + y << std::endl;
  std::cout << x << " - " << y << " = " << x - y << std::endl;
  std::cout << x << " * " << y << " = " << x * y << std::endl;
  std::cout << x << " / " << y << " = " << x / y << " with remainder of "
            << x % y << std::endl;
  std::cout << "Square root of " << x << " is " << sqrt(x) << std::endl;
  std::cout << "Square root of " << y << " is " << sqrt(y) << std::endl;
  std::cout << x << "^" << y << " = " << pow(x, y) << std::endl;

  return 0;
}
