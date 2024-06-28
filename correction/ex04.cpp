#include <iostream>

int main(int ac, char **av) {
    if (ac != 2) {
        return 1;
    }
    int a = atoi(av[1]);

    if (a > 0) {
        std::cout << "a is positive" << std::endl;
    } else if (a < 0) {
        std::cout << "a is negative" << std::endl;
    } else {
        std::cout << "a is zero" << std::endl;
    }
    return 0;
}
