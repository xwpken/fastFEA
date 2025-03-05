#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{
    int a = 10;
    string info = "Please input your name...";

    std::cout << info << endl;
    
    auto name = std::string{};
    std::cin >> name;

    std::cout << name << endl;

    printf("Hello World\n"); 
    printf("Are you OK?\n"); 
    return 0;
}
 
