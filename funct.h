#ifndef FUNCT_H
#define FUNCT_H
#include <iostream>
#include <string>
#include <fstream>

std::fstream menu;
std::fstream order_details;
static void write_menu()
      {
            menu.open("menu.txt",std::ios::out | std::ios::trunc);
            menu << "1.Idli"
                      << "\n\t2.Plain Dosa"
                      << "\n3.Masala Dosa"
                      << "\n4.Uttapam"
                      << "\n5.Samosa"
                      << "\n6.BreadPakoda"
                      << "\n7.Pani Puri"
                      << "\n8.Pav Bhaji"
                      << "\n9.Chilli Paneer"
                      << "\n10.Chola Puri"
                      << "\n11.Sambar Vada"
                      << "\n12.Rava"
                      << "\n13.Bread"
                      << "\n14.Pizza"
                      << "\n15.Burger"
                      << "\n16.Sandwich"
                      << "\n17.Pasta"
                      << "\n18.Noodles"
                      << "\n19.Pulav"
                      << "\n20.Soup"
                      << "\n\t21.Pastery"
                      << "\n22.Cake"
                      << "\n\t23.Ice Cream"
                      << "\n24.Coffee"
                      << "\n25.Tea"
                      << "\n\t26.Juice"
                      << "\n27.Milk"
                      << "\n28.Curd"
                      << "\n\t29.Butter"
                      << "\n30.Cheese";

            menu.close();
      }
static void show_menu()
      {
            menu.open("menu.txt",std::ios::in);
            std::string line;
            while(true)
            {
                  int i = 0;
                  while(i != 3)
                  {
                        getline(menu,line);
                        std::cout << line << "\t";
                        i++;
                  }
                  std::cout << std::endl;
                  if(menu.eof())
                  {
                        break;
                  }
            }
            menu.close();
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