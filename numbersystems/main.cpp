#include <iostream>

int main() {
    int number1 = 15;
    int number2 = 017;
    int number3 = 0x0F;
    int number4 = 0b00001111;

    std::cout << "int: " << number1 << std::endl;
    std::cout << "oct: " << number2 << std::endl;
    std::cout << "hex: " << number3 << std::endl;
    std::cout << "binary:" << number4 << std::endl;

    int elephant_count;
    int lion_count{};
    int tiger_count = 0;
    int dog_count{10};
    int cat_count = {15};

    int domesticated_animals {dog_count + cat_count};
    std::cout << "elephant_count: " << elephant_count << std::endl;
    std::cout << "domesticated_animals: " << domesticated_animals << std::endl;

    double narrowing_conversion {10.0 / 3.0};
    std::cout << "narrowing_conversion: " << narrowing_conversion << std::endl;

    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(doc_count): " << sizeof(dog_count) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;
    std::cout << "sizeof(char): " << sizeof(char) << std::endl;
    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;
    std::cout << "sizeof(void*): " << sizeof(void*) << std::endl;
    std::cout << "sizeof(int*): " << sizeof(int*) << std::endl;
    std::cout << "sizeof(double*): " << sizeof(double*) << std::endl;
    std::cout << "sizeof(char*): " << sizeof(char*) << std::endl;
    std::cout << "sizeof(bool*): " << sizeof(bool*) << std::endl;
    std::cout << "sizeof(void**): " << sizeof(void**) << std::endl;
    std::cout << "sizeof(int**): " << sizeof(int**) << std::endl;
    std::cout << "sizeof(double**): " << sizeof(double**) << std::endl;
    std::cout << "sizeof(char**): " << sizeof(char**) << std::endl;
    std::cout << "sizeof(bool**): " << sizeof(bool**) << std::endl;
    std::cout << "sizeof(void***): " << sizeof(void***) << std::endl;
    std::cout << "sizeof(int***): " << sizeof(int***) << std::endl;
    std::cout << "sizeof(double***): " << sizeof(double***) << std::endl;
    std::cout << "sizeof(char***): " << sizeof(char***) << std::endl;
    std::cout << "sizeof(bool***): " << sizeof(bool***) << std::endl;
    std::cout << "sizeof(void****): " << sizeof(void****) << std::endl;


    return 0;
}
