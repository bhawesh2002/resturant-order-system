#ifndef FUNCT_H
#define FUNCT_H
#include <iostream>
#include <string>
#include <fstream>

std::fstream menu;
std::fstream order_details;
static void write_menu()
      {
            menu.open("menu.txt",std::ofstream::out | std::ofstream::trunc);
            menu      << "ITEM'S"          << "\t\tPRICE"
                      << "\n1.Idli" << "\t         20"
                      << "\n2.Plain Dosa" << "\t 30"
                      << "\n3.Masala Dosa" << "\t 50"
                      << "\n4.Uttapam" << "\t 40"
                      << "\n5.Samosa" << "\t 20"
                      << "\n6.BreadPakoda" << "\t 30"
                      << "\n7.Pani Puri" << "\t 20"
                      << "\n8.Pav Bhaji" << "\t 30"
                      << "\n10.Chola Puri" << "\t 30"
                      << "\n11.Sambar Vada" << "\t 20"
                      << "\n12.Pizza" << "\t 50"
                      << "\n13.Burger" << "\t 30"
                      << "\n14.Sandwich" << "\t 40"
                      << "\n15.Pasta" << "\t 50"
                      << "\n16.Noodles" << "\t 40"
                      << "\n17.Pulav" << "\t 50"
                      << "\n18.Soup" << "\t         20"
                      << "\n19.Ice Cream" << "\t 50"
                      << "\n20.Coffee" << "\t 20"
                      << "\n21.Tea" << "\t         10"
                      << "\n22.Milk" << "\t         20"
                      << "\n23.Curd" << "\t         20"
                      << "\n24.Cheese" << "\t 20";

            menu.close();
      }
static void show_menu()
      {
            menu.open("menu.txt",std::ifstream::in);
            std::string line;
            /*while(true)
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
            }*/
            while(getline(menu,line))
            {
                  std::cout << line << std::endl;
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