//#include "chapter6.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using Iter = vector<int>::const_iterator;

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
/* 
size_t count_add(int n) {
    static size_t ctr = 0; // static variable
    ctr += n;
    return ctr;
} */

void reset(int *ip) {
    *ip = 0; // changes value of obj to which ip points
    ip = 0; // local copy changed, argument unchanged
}

void reset(int &i) {
    i = 0; // change the value of the object to which i refers
}

void swap_int(int *x, int *y) {
    int z {};
    z = *x;
    *x = *y;
    *y = z;
} 

/// comparing the length of two strings
/* bool isLonger(const string &s1,  const string &s2) {
    return s1.size() > s2.size();
}  */

/* void reset(int &x) {
    x = 0;
}
 */

/* bool compare(matrix &num_A, &num_B);
vector<int>::iterator change_val(int, vector<int>::iterator);
 */

/* void print(const int*);
void print(const int[]); //takes an array
void print(const int[10]); //array dimension 
 */

/* void print(const char *cp) {
    if (cp) // if not a null pointer
        while (*cp) // as long as not null character
            cout << *cp++; // print char and move ptr by 1
} */

/* void print(const int* beg, const int* end) {
    // print every element at beginning up to
    // but not including end 
    while (beg != end)
        cout << *beg++ << endl; // print and advance ptr
}
 */

void print(const int ia[], size_t size)
{
    for (size_t i = 0; i != size; ++i) {
        cout << ia[i] << endl;
    }
}

// parameter is a reference to an array; the dimension is 
// part of the size_type
/* void print(int (&arr) [10]) {
    for(auto elem : arr) {
        cout << elem << endl;
    }
} */

// matrix points to the first element in an array whose 
// elements are arrays of ten units 
/* void print(int (*matrix) [10], int rowSize) {
    for(auto number : *matrix) {
        cout << number << endl;// declares matrix as a pointer to an array of ten ints
    }
}
 */
/* int larger_num(int x, const(int const *y{8})) {
    //int i{6};
    return (i > *p) ? i : *p;
} */

void swap(int* &x, int* &y)
{
    int *temp = x;
    x = y;
    y = temp;
} 

initializer_list<string> ls; //initialiser list of strings 
initializer_list<int> li; // initialiser list of ints

/* void error_msg(errCode e, initializer_list<string> il) {
    cout << e.msg() << ": "; 
    for(const auto &elem : il) {
        cout << elem << " ";
    } cout << endl;
} */
int sum(initializer_list<int> il) {
    int sum = 0; 
    for(int i : il) sum += i;
    return sum;
}

void swap(int &v1, int &v2) {
    // if the values are the same, just return.
    if (v1 == v2) 
        return;
    // swap values if not equal
    int temp = v1;
    v1 = v2;
    v2 = temp;
    // no explicit return is needed
}

/* // incorrect return types
bool str_subrange(const string &str1, const string &str2) {
    // same sizes: return normal equality test
    if (str1.size() == str2.size()) 
    {
        return str1 == str2; // returns bool
    }
    // find the size of the smaller string; conditional operator.
    auto size = (str1.size() < str2.size()) 
        ? str1.size() : str2.size();
    // look at each element up to the size of the smaller string
    for (decltype(size) i = 0; i != size; i++) {
        if (str1[i] != str2[i])
            return; // error: no return value 
    }
    // error2 : control flow off the end of the func
}
 */
// func to return thr plural version of word if ctr > 1
string make_plural(size_t ctr, const string &word,
            const string &ending) {
    return (ctr > 1) ? word + ending : word;            
}
// never return ref/ptr to a local obj

char &get_val(string &str, string::size_type ix) {
    return str[ix]; //get_val assumes the given index is valid 
}

vector <string> process() {
    string actual{};
    string expected{};
    if (expected.empty())
        return {}; // return an empty vector 
    else if (expected == actual)
        return {"functionX", "okay"}; //return list init vect
    else 
        return {"functionX", expected, actual};
}
// calculate val!; 1*2*3*...*val
int factorial(int val) {
    if (val != 0) {
        return factorial(val-1) * val;
    return 1;
    }
}

void print(Iter first, Iter last) {
    if (first != last) {
        cout << *first << " ";
        print(++first, last);
    }
}

typedef int arrT[10]; //type array of ten units 
using arrtT = int[10]; //equivalent dec of arrT
arrT* func(int i); //func returns a pointer to an array


int arr[10]; // array of ten ints 
int *p1[10]; // p1 is an array of ten ptrs
int (*p2)[10] = &arr; // p2 points to an array of ten ints 

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};
// returns a ptr to an array of five int elements
decltype(odd) *arrPtr(int i) {
    return (i%2) ? &odd : &even; // returns a ptr to the array
}

string (&func(string (&arrStr)[10]))[10];

void print(const char *cp);
void print(const int *beg, const int *end);
void print(const int ia[], size_t size);


//Record lookup(const Account&); // find by Account 


string read();
void print(const string &);
void print(double); // overloads the print fxn
/* 
void fooBar(int ival) {
    bool read = false; //hides the outer eclaration of read
    string s = read(); //read is a bool variable

    //bad practice, bad idea to declare fxns at local scope
    void print(int); // new scope, 
    print("Value: "); // print (const string &) is hidden
    print(ival);
    print(3.14);

} */
/* 
void print(const string &);
void print(double); // overloads the print fxn
 */

/* string window;
window = screen(); // equivalent to screen(24,80,'')
 */

constexpr int new_sz() {
    return 42;
}

/* constexpr int foo = new_sz(); // foo is a const expr
constexpr size_t scale(size_t cnt) {
    return new_sz() * cnt;
}
int arr[scale(2)];
int i =2;
int a2[scale(i)] */

inline bool is_Shorter(const string &lft, const string rht) {
    return lft.size() < rht.size();
}

bool lengthCompare(const string &, const string &);
string::size_type sumLength(const string&, const string&);
    bool cstylestringCompare(const char*, const char*);
// pf points to a func returning bool that takes 
// two const string references
/* bool (*pf)(const string&, const string&);
void ff(int*);
void ff(unsigned int);
void (*pf1) (unsigned int) = ff; //pf1 points to ff(unsigned)
void (*pf2) (int) = ff; // no ff with a matching parameter list  
double (*pf3)(int*) = ff; // return type of ff and pf3 don't match
 */

int func(int a, int b);


int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int divide(int a, int b) {
    return b != 0 ? a / b : 0;
} 
int multiply(int a, int b) {
    return a * b;
}

int main() {


/* 

    pf = lengthCompare; // pf points to the fxn lengthcompare
    pf = &lengthCompare; // pf point sto the address of operator

    bool b1 = pf("hello", "hi"); // calls lengthCompare
    bool b2 = (*pf)("hello", "hi"); // equivalent
    bool b3 = lengthCompare("hello", "hi"); // equivalent

    
    pf = 0; //pf points to no pointer
    pf = sumLength; // return type differs
    pf = cstylestringCompare; // parameter type differs
    pf = lengthCompare; //fxn and ptr types match exactly



    cout << is_Shorter("franklin", "franklyn") << endl;
    return 0;
 */


    /* int j[2] = {0,1};
    print("Hello World"); //print(const char*)
    print(j, end(j) - begin(j)); // calls print(const int*, size_t)
    print(begin(j), end(j)); // calls print()const int*, const int*)


    vector<int> vec{1,2,3,4,5,6,7,8,9};
    print(vec.cbegin(), vec.cend());    
    
    cout << factorial(5) << endl; */
    //cout << "i am" << endl;
    /* string s("a value");
    cout << s << endl;  //prints a value 
    get_val(s, 0) = 'A'; // changes s[0] to A
    cout << s << endl;
    return 0;
 */
    /* cout << str_subrange(string{"franklyn"}, 
        string{"frann"}) << size << endl;;
     */
    
    //cout << sum({1,2,3,4,5,6,7,8,9}) << endl;



    //expected, actual are strings
    /* string expected{};
    string actual{}; 
    if (expected != actual) {
        error_msg(errCode(42), {"functionX", expected, actual});
    } else {
        error_msg(errCode(0), {"functionX" , "okay"});
    } */



    /* int i = 1, j = 2;
    swap(i, j);
    cout << "i is " << i << "\nj is " << j << endl;
     */
    //cout << i << endl;
    //cout << "The larger num is " << larger_num(4, &i) << endl;

    /* int i = 40;
    const int ci = i;
    string::size_type ctr = 0;
    reset(&i);  // reference 
    //reset(&ci); // cannot initialize from pointer to const int 
    reset(i);
    reset(ci);
    reset(42);
    reset(ctr);


    cout << ci << "\n" << i << "\n" << ctr << "\n"; //<< &r2 << "\n";
 */
   /*  int i = 42;
    const int *cp = &i;  
    const int &r = i;
    const int &r2 = 42;
    //int *p = cp; 
    //int &r3 = r; 
    //int &r4 = 42;  */
    
    /* int y = 50;
    reset(y);
    cout << "y is " << y << endl;
 */
    /* int i {42};
    reset_ptr(&i); // changes i, address unchanged
    cout << "i = " << i << endl; // prints i = 0
    for(int a, b; cout << "Please enter two numbers to swap:\n", cin >> a >> b;) {
        swap_int(&a, &b);
        cout << "a is " << a << "\nb is " << b << endl;
    }  */
    //interactive_factorial();
     // j is 120 = fact(5)
    //int k = square(5);
    //cout << "5! is " << j << endl; 
    //cout << "5 square is " << k << endl; 79
    //cout << absolute_value(-6) << endl;
    /* for (size_t i = 0; i != 10; ++i)
        cout << count_add(i) << endl;
    return 0; */

    /* int n = 0, i = 1;
    int *p = &n, *q = &i; // p points to the address of n
    *p = 42;
    p = q;
    cout << p << q << n << i << endl; */  
    return 0;
}
