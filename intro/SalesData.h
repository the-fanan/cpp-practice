#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct SalesData {
    std::string bookNo; // complex datatype that is an abstraction over arrays
    unsigned int unitsSold = 0;
    double revenue = 0.0; 
};
#endif