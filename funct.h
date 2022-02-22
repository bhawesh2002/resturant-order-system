#ifndef FUNCT_H
#define FUNCT_H
#include <iostream>
#include <string>
#include <fstream>

std::fstream menu;
std::fstream order_details;
static void show_menu()
      {
            
            std::cout << "\n1.Idli"
                      << "\t\t2.Plain Dosa"
                      << "\t3.Masala Dosa"
                      << "\t4.Uttapam"
                      << "\n5.Samosa"
                      << "\t6.BreadPakoda"
                      << "\t7.Pani Puri"
                      << "\t8.Pav Bhaji"
                      << "\n9.Chilli Paneer"
                      << "\t10.Chola Puri"
                      << "\t11.Sambar Vada"
                      << "\t12.Rava"
                      << "\n13.Bread"
                      << "\t14.Pizza"
                      << "\t15.Burger"
                      << "\t16.Sandwich"
                      << "\n17.Pasta"
                      << "\t18.Noodles"
                      << "\t19.Pulav"
                      << "\t20.Soup"
                      << "\n21.Pastery"
                      << "\t22.Cake"
                      << "\t\t23.Ice Cream"
                      << "\t24.Coffee"
                      << "\n25.Tea"
                      << "\t\t26.Juice"
                      << "\t27.Milk"
                      << "\t\t28.Curd"
                      << "\n29.Butter"
                      << "\t30.Cheese"
                      << std::endl;
      }
static void get_choice()
      {
            int choice;
            int quantity;
            bool flag = true;
            while (flag == true)
            {
                  std::cout << "Enter your choice: \n";
                  std::cin >> choice;
                  std::cout << "Enter your quantity: \n";
                  std::cin >> quantity;
                  std::cin.ignore();
                  std::cout << "Anything More? (y/n): ";
                  if (std::cin.get() == 'n')
                  {
                        flag = false;
                        std::cout<<"\nThank You for your order.\n";
                  }
            }
            }
#endif