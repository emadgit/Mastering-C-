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
// Return value will be a string entered by user from the keyboard
std::string getUserName()
{
    std::string userName{""};
    std::cout << "Enter Your Name: ";
    std::cin >> userName;
    return userName;
}

/* This function accept two arguments
   @num is an integer that we want to do the multiply operation on it.
   @multiplier is an integer we can use to multiply @num with the given multiplier
*/
void printTheResult(int num, int multiplier)
{
    std::cout << num << " multiplied by " << multiplier << " = " << num * multiplier << '\n';
}

int main()
{
    std::string name{getUserName()};
    int num{getUserInput()};
    std::cout << "Welcome The Awesome user named, " << name << ". \n";

    printTheResult(num, 2); // print num multiplied by 2
    printTheResult(num, 5); // print num multiplied by 5

    return EXIT_SUCCESS;
}
