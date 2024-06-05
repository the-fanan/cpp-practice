#include <iostream>
#include "SalesData.h"
#include <string>

int main()
{
    SalesData book1, book2;
    double price = 0;

    std::cout << "Enter Book 1 Details" << std::endl;
    std::cin >> book1.bookNo >> book1.unitsSold >> price;
    book1.revenue = book1.unitsSold * price;

    std::cout << "Enter Book 2 Details" << std::endl;
    std::cin >> book2.bookNo >> book2.unitsSold >> price;
    book2.revenue = book2.unitsSold * price;

    if (book1.bookNo == book2.bookNo) {
        unsigned totalUnitsSold = book1.unitsSold + book2.unitsSold;
        double totalRevenue = book1.revenue + book2.revenue;
        char output[100];
        std::sprintf(output, "\n[%s]: \nunits sold: [%d] | revenue [%f]\n", book1.bookNo.c_str(), totalUnitsSold, totalRevenue);
        std::cout << output << std::endl;
    } else {
        std::cerr << "Same ISBN must be supplied" << std::endl;
        return -1;
    }
    return 0;
}