#include <iostream>
#include <random>

int addNumbers(int num1, int num2) {
    return num1 + num2;
}

int main (int args, char **argv) {
    int firstNumber = 12;
    int secondNumber = 3;
    int sum = firstNumber + secondNumber;

    sum = addNumbers(firstNumber, secondNumber);
    std::cout << "The sum of " << firstNumber << " and " << secondNumber << " is " << sum << std::endl;

    int difference = firstNumber - secondNumber;
    int product = firstNumber * secondNumber;
    int quotient = firstNumber / secondNumber;
    int remainder = firstNumber % secondNumber;
    int power = firstNumber ^ secondNumber;
    int absoluteValue = firstNumber < 0 ? -firstNumber : firstNumber;
    int minimum = firstNumber < secondNumber ? firstNumber : secondNumber;
    int maximum = firstNumber > secondNumber ? firstNumber : secondNumber;
    int randomNumber = rand();
    int randomNumberBetween0And1 = rand() % 2;
    int randomNumberBetween0And100 = rand() % 100;
    sum = addNumbers(100, 200);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);
    std::cout << "sum = " << sum << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product *: " << product << std::endl;
    std::cout << "Quotient /: " << quotient << std::endl;
    std::cout << "Remainder %: " << remainder << std::endl;
    std::cout << "Power **: " << power << std::endl;
    std::cout << "Absolute Value: " << absoluteValue << std::endl;
    std::cout << "Minimum: " << minimum << std::endl;
    std::cout << "Maximum: " << maximum << std::endl;
    std::cout << "Random Number: " << randomNumber << std::endl;
    std::cout << "Random Number Between 0 and 1: " << randomNumberBetween0And1 << std::endl;
    std::cout << "Random Number Between 0 and 100: " << randomNumberBetween0And100 << std::endl;
    std::cout << "Random Number Between 0 and 100: " << rd() % 100 << std::endl;
    std::cout << "sum: " << addNumbers(200, 300) << std::endl;

    return 0;
}
