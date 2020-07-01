#include <iostream>

int func1();

int main() {
    std::cout << "Hello, World!" << std::endl;
    int result = func1();
    return 0;
}

int func1() {
    int x = 5;
    int y = 6;
    return x + y;
}