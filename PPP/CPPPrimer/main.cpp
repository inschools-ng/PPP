#include "chapter6.h"
#include <iostream>
#include <string>

using namespace std;

// factorial of val is val * (val-1) * (val-2)....*(val-(val-(val-1))*1)
int fact(int val) // name of func is fact, takes int parameter and returns int value 
{
    int ret = 1; // local variable to hold the result
    while (val > 1)
        ret *= val--; // assign ret*val to ret and decrement val
    return ret;
} 

/* int facto(int i) {
    if (i < 0) {
        runtime_error err("Input cannot
        be a negative number");
        cout << err.display() << endl;
    }
    return i > 1 ? i * facto(i - 1) : 1; 
} */
// int f3(int v1, int v2) { /**/ } // multiple-argument parameter
// double square(double x) 
// {
//     return x *x;
// }
/* 
void interactive_factorial() {
    string const display{"\nPlease enter a number: \n"};
    for (int num; cout << display, cin >> num;)
    {
        cout << fact(num) << endl;
    }
}

int absolute_value(int num) {
    return num > 0 ? num : -num;
} */

/* size_t count_calls()
{
    static size_t ctr = 0; // value will persist across calls 
    return ++ctr;
} */

size_t count_add(int n) {
    static size_t ctr = 0; // static variable
    ctr += n;
    return ctr;
}

int main() {
    //interactive_factorial();
     // j is 120 = fact(5)
    //int k = square(5);
    //cout << "5! is " << j << endl; 
    //cout << "5 square is " << k << endl; 79
    //cout << absolute_value(-6) << endl;
    for (size_t i = 0; i != 10; ++i)
        cout << count_add(i) << endl;
    return 0;
}
