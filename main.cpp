#include <iostream>
#include "funct.h"

int main()
{
    std::cout << "WELCOME TO RAJBHOG" << std::endl; // Welcome Note
    std::cout << "====ORDER MENU====" << std::endl; // Menu
    write_menu(); // Write Menu
    std::cout << "ITEM'S" << "\t\tPRICE";
    show_menu(); // calling show_menu function
    get_choice(); //get the order from the costumer
    std::cout << "We are cooking for you"
              <<  "\nYour order will be ready in 15 minutes.\n";
    return 0;
}