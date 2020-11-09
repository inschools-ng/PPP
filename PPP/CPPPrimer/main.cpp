//#include "chapter6.h"
#include <iostream>
#include <string>
#include "sales_data.h"
//#include "sales_item.h"

using namespace std;


int main() {
    Sales_data total; // var to hold the sum
    if (read(cin, total)) { // read the first transaction
        Sales_data trans;
        while(read(cin, trans)) {
            if (total.isbn() == trans.isbn()) // check isbn
                total.combine(trans); // update the running tool
            else {
                print(cout, total) << endl; // print results
                total = trans; // process the next book
            }        
        } 
        print(cout, total) << endl; // print the last trans
    } else {
        cerr << "No data?!" << endl; //
    }


    Sales_data data1, data2;
    //code to read  into data1 and data2;
    //code to check whether data1 and data2 have the same ISBN
    //and if so, print the sum of data1 and data2;

    double price = 0; // price per book
    // read the first transactions: ISBN, no of books, price
    cin >> data1.bookNo >> data1.units_Sold >> price;
    // calculate total revenue from price and units sold 
    data1.revenue = data1.units_Sold * price;
    
    //read the second transaction 
    cin >> data2.bookNo >> data2.units_Sold >> price;
    // calculate total revenue from price and units sold 
    data2.revenue = data2.units_Sold * price;
    
    if (data1.bookNo == data2.bookNo) {
        unsigned totalCount = data1.units_Sold + data2.units_Sold;
        double totalRevenue = data1.revenue +data2.revenue;
        // print: ISBN, total sold, total revenue, avg price
        // per book
        cout << data1.bookNo << " " << totalCount 
            << " " << totalRevenue;
        if (totalCount != 0) {
            std::cout << totalRevenue/totalCount 
                << endl;
        } else {
            cout << " (no sales) " << endl;
        }

        return 0; // indicate success
    } else {
        cerr << "Data must refer to the same ISBN" 
            << endl;
        return -1; // indicate failure 
    }





}