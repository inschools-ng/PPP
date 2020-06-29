# pragma once 

#ifndef main_h
#define main_h

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
#include <cfloat>
#include <typeinfo>
#include <numeric>
#include <random>
#include <limits>
#include <ctime>
#include <unordered_map>


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

// Simple function to be used 
inline void  simple_error(std::string s) // write error: s and exit program 
{
    std::cerr << "error: " << s << std::endl; 
    keep_window_open();
    std::exit(1);
}

// Simple function to square numbers
/*void print_square(int v)
{
    std::cout << v << '\t' << v * v << '\n';
}*/
#endif