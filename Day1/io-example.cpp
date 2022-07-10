#include <iostream>
#include <limits>
#include <string>
#include <cstdlib>

// This function will get an input from the user
// The return value is an integer entered by user from the keyboard
int getUserInput()
{
    int userInput{};
    std::cout << "Enter a Number: "; // std => standard | cout => character output
    std::cin >> userInput;
    return userInput;
}

// This function will ask user to enter their name
// Retrun value will be a string entered by user from the keyboard
std::string getUserName()
{
    std::string userName{""};
    std::cout << "Enter Your Name: ";
    std::cin >> userName;
    return userName;
}

int main()
{
    std::string name{getUserName()};
    int num{getUserInput()};
    std::cout << "Welcome The Awesome user named, " << name << ". \n"
              << num << " multiple by 3 = " << num * 3 << '\n';
    return EXIT_SUCCESS;
}
