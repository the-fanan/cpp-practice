#include <iostream>

int main()
{
    int total = 0;
    int val;
    std::cout << "Enter numbers you want to sum. When you have entered enough numbers enter type in 'done' and press enter" << std::endl;
    while (std::cin >> val) {
        total += val;
    }

    std::cout << "Toal Sum Is: " << total << std::endl;

    return 0;
}