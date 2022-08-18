#include <iostream>

consteval int get_value(int x) {
    return x * x;
}

int main() {
    constexpr int value = get_value(3);
    std::cout << "value: " << value << std::endl;
    std::cout << "The sky is gray..." << std::endl;
    return 0;
}
