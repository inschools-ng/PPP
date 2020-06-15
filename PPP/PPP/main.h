# pragma once 

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>

// Simple function to keep window open 
inline void keep_window_open()
{
    std::cin.clear();
    std::cin.sync_with_stdio(false);
    //std::cin.ignore( numeric_limits<streamsize>::max(), '\n' ); !!! find out problem !!!
    std::cin.ignore(std::cin.rdbuf()->in_avail());  // clear buffer 
    std::cout << "\nPress the Enter key to continue";
    std::cin.get();
}

// Simple function to be used Jtaim
inline void  simple_error(std::string s) // write error: s and exit program 
{
    std::cerr << "error: " << s << std::endl; 
    keep_window_open();
    std::exit(1);
}