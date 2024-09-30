#include <iostream>
#include <string>

int main()
{
    bool somethin = true;
    while (somethin)
    {
        std::cout << "********** Calculator ********** \n";
        double num1, num2;
        std::string user;
        std::cout << "Enter which operation you want to perform:  \n + for addition\n - for subtraction\n * for multiplication\n / for division\n type |'end'| to end the program \n";
        std::cin >> user;

        if (user == "end" || user == "END" || user == "End") {
            std::cout << "Program ended :)\n";
            break;
        }

        std::cout << "Enter a number: \n";
        std::cin >> num1;
        std::cout << "Enter another number: \n";
        std::cin >> num2;

        double result = 0;

        if (user == "+") {
            std::cout << "You have selected Addition \n";
            std::cout << (num1 + num2) << " is the output";
        } else if (user == "-") {
            std::cout << "You have selected Subtraction \n";
            std::cout << (num1 - num2) << " is the output";
        } else if (user == "/") {
            if (num2 != 0) {
                std::cout << "You have selected Division \n";
                std::cout << (num1 / num2) << " is the output";
            } else {
                std::cout << "Error: Division by zero.";
            }
        } else if (user == "*") {
            std::cout << "You have selected Multiplication \n";
            std::cout << (num1 * num2) << " is the output";
        } else {
            std::cout << "Invalid operation selected. Please try again." << std::endl;
        }

        std::cout << "\n*******************************\n";
    }
}
