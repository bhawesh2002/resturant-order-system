#include <iostream>
#include "funct.h"

int main()
{
    std::cout << "WELCOME TO RAJBHOG" << std::endl; // Welcome Note
    std::cout << "====ORDER MENU====" << std::endl; // Menu
    show_menu(); // Calling menu function
    get_choice();
    return 0;
}