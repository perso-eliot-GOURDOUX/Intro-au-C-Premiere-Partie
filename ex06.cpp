#include <iostream>

void multiplication(int a, int b) {
    std::cout << "a * b = " << a * b << std::endl;
}

int main() {
    int a = 5;
    int b = 3;
    multiplication(a, b);
    multiplication(15, 26);
    return 0;
}
