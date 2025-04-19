#include <iostream>
#include <string>

int main(){
    int favorite_number;

    std::cout << "Enter your favorite number between 1 and 100: " << std::endl;

    std::cin >> favorite_number;

    std::cout << "Amazing! That's my favorite number!" << std::endl;

    std::string begining = "No really!, ";
    std::string end = " is my favorite number!";

    std::string whole = begining + std::to_string(favorite_number) + end;

    std::cout << whole << std::endl;

    return 0;
}