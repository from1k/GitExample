#include <iostream>
#include <string>

//Programm asks username and print hello world from @user.
int main() {
   std::sting name;
   std::cout << "Enter your name: ";
   std::cin >> name;
   std::cout << "Hello world from " << name << std::endl;
   return 0;
}

