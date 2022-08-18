#include <iostream>
#include <string>

int main(int argc, char **argv) {
    std::cout << "Hello World!" << std::endl;
    std::cout << "The number is " << 123 << std::endl;

    int age = 30;
    std::cout << "My age is " << age << std::endl;

    double gpa = 3.5;
    std::cout << "My GPA is " << gpa << std::endl;

    std::string myName = "John Doe";
    std::cout << "My name is " << myName << std::endl;

    std::string yourName;
    std::cout << "What is your name? ";
    std::cin >> yourName;
    std::cout << "Hello " << yourName << "!" << std::endl;
    std::cout << "What is your age? ";
    int yourAge;
    std::cin >> yourAge;
    std::cout << "You are " << yourAge << " years old." << std::endl;
    std::cout << "What is your name and age again? ";
    std::cin >> yourName >> yourAge;
    std::cout << "Hello " << yourName << "! You are " << yourAge << " years old." << std::endl;
    std::cout << "What is your GPA? ";
    double yourGpa;
    std::cin >> yourGpa;
    std::cout << "You have a GPA of " << yourGpa << "." << std::endl;
    std::string fullName;
    int age3;
    std::cout << "What is your full name nad age? ";
    std::getline(std::cin, fullName);
    std::cin >> age3;
    std::cout << "Hello " << fullName << "! You are " << age3 << " years old." << std::endl;


    // Error
    std::cerr << "Error!" << std::endl;
    // Warning
    std::wcout << "Warning!" << std::endl;
    // Debug
    std::clog << "Debug!" << std::endl;

    return 0;
}
