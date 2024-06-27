#include <iostream>

int main() {
    int a;
    int b;

    std::cin >> a;
    std::cin >> b;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    if (b == 0) {
        std::cout << "b is 0, cannot divide by 0" << std::endl;
        return 1;
    } else {
        std::cout << "a / b = " << a / b << std::endl;
    }
    std::cout << "a % b = " << a % b << std::endl;

    return 0;
}
