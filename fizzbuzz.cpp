#include <iostream>

int main() {

  for (int i = 1; i <= 100; i++) {
    
    if (i % 15 == 0) {
      std::cout << "fizzbuzz\n";
    }
    else if (i % 5 == 0) {
      std::cout << "buzz\n";
    }
    else if (i % 3 == 0) {
      std::cout << "fizz\n";
    }
    else {
      std::cout << i << "\n";
    }

  }
return 0;
}
