#include <iostream>

std::string romannum;
int main()
{
    std::cout << "Welcome to a roman numeral to decial calculator\n";
    std::cout << "Please enter a roman numeral to convert:"; std::cin >> romannum;
    int b = romannum.length();
    for (int i = b; i > 0; i--) {
        std::cout << b<<"\n";
    }
}
