// 



#include "main.h"
using namespace std;

/* int f(int); // declaration of f, using the () syntax initializer
vector<int> vi();

const int x = 7; // = initializer syntax
const int x2 {5}; // {} initializer syntax
const int y; // no initializer(error)
 */
/* void f(int z)
{
    int x; //uninitialized
    x = 7; // give x a value 
}
 */
//void increase_power_to(int level, double rate); 

//search for s in values
//vs[hint] might be a good place to start the search
//return the index of a match; -1 indicates "not found"

/* int my_find(vector<string> vs, string s, int hint); //naming arguments
int my_find(vector<string>, string, int); //not naming arguments
 */
// pass-by-value (give the function a copy of the value passed)

/* int f(int x)
{
    x += 1; //give the local x a new value 
    return x;
} */

/* void print(vector<double> v) // pass-by-value
{
    cout << "{";
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i];
        if (i != v.size()-1)
        {
            cout << ", ";
        }
    }
    cout << " }\n";
}*/



/* void print(const vector<double>&v)// pass-by-const-reference
{
    cout << "{ "; 
    for(int i = 0; i < v.size(); ++i)
    {
        cout << v[i];
        if (i != v.size()-1) cout << ", ";
    }
    cout << " }\n"; 
}

void f(int x)
{
    vector<double> vd1(10); //small vector
    vector<double> vd2(1000000); // lsrge vector
    vector<double> vd3(x); //vector of some unknown size

    print(vd1);
    print(vd2);
    print(vd3);
} 

void init(vector<double>&v) //passbyreference
{
    for(int i = 0; i < v.size(); ++i)
    {
        v[i] = i;
    }
}

void g(int x)
{
    vector<double> vd1(10);//small vector
    vector<double> vd2(100000); // large vector 
    vector<double> vd3(x);

    init(vd1);
    init(vd2);
    init(vd3);
    
}
 */

/* void g(int a, int &r, const int &cr)
{
    ++a; // change the local a 
    ++r; // change the object referred to by r 
    int x = cr; // read the object referred to by cr 
}
 */

/* int incr1(int a) { return a+1; } //return rhe new value as result 
void incr2(int &a) { ++a; } // modify object passed as reference

int x = 7;
4x = incr1(x); 
incr2(x);
 */
/* const double pi {3.14159};
double calc_area_circle (double radius) {
    return pi * radius * radius; 
}

double calc_volume_cylinder(double radius, double height) {
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius{};
    cout << "Radius: ";
    cin >> radius;
    cout << "Area: " << calc_area_circle(radius) << endl; 
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "Radius: ";
    cin >> radius;
    cout << "Height: ";
    cin >> height;
    cout << "Volume: " << calc_volume_cylinder(radius, height) << endl;
} */

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s, string t) {
    cout << "Printing two strings " << s << " and " << t << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings: ";
    for (auto s: v) cout << s + " ";
    cout << endl;
}

int main()
{
    print(100); //int
    print('A'); //char to int (65)
    print(123.5); //double;
    print(123.3F); //float to double
    print("C-style string");

    string s {"C++ string"};
    print(s); 
    
    print("C-style string", s);
    vector<string> three_stooges {"Larry", "Moe", "Curly" };
    print(three_stooges);
    cout << endl;
    keep_window_open();
    return 0;
}
/*   int x = 0;
    int y = 0;
    int z = 0;

    g(x,y,z);  // x==0; y==1,z==0
   */  
    /* area_circle();
    volume_cylinder();
     */
  
//using namespace std;
    /* const double pi {3.14159};
    int i = 4; // declaration of i, initializer using the = syntax
    double calc_area_circle(double radius) {return pi * radius * radius};

    cout << f(i) << endl;  */
    
    /* int xx = 0;
    cout << f(xx) << endl; // write 1
    cout << xx << endl; // write 0, doesn't change xx
 */



/* using namespace std;
    constexpr char terminalChar = '|';
    const string command{"Enter a number & unit(m,cm,in,ft) to convert or enter " + string{terminalChar} + " to quit-" };
    const unordered_map<string, double> convert = {
        {"m", 100.0},   // convert m to cm
        {"cm", 1.00},   // already in cm
        {"in", 2.54},   // convert in to cm
        {"ft", 12.0 * 2.54} // convert ft to cm
    };
    
    vector<double> enteredMeasurements{};
    cout << command << endl;
    char c{};
    while(cin.get(c) && c != terminalChar)
    {
        cin.putback(c);
        // get number
        static double enteredMeasurement{};
        cin >> enteredMeasurement;
        // assume 1 as the default measurement if no value is put in
        if (!cin)
        {
            cin.clear();
            enteredMeasurement = 1.0;
        }
        
        // unit of measurement 
        static string UnitOfMeasurement;
        cin >> UnitOfMeasurement;
        // check validity of UnitOfMeasurement entered and
        // convert if valid
        auto itr{convert.find(UnitOfMeasurement)};
        if (itr != convert.end())
        {
            static double convertedMeasurement{};
            convertedMeasurement = enteredMeasurement * itr->second;
            enteredMeasurements.push_back(convertedMeasurement);
            cout << enteredMeasurement << UnitOfMeasurement << " converted to " << convertedMeasurement << "cm\n";
        }
        else if (UnitOfMeasurement.find(terminalChar) != string::npos)
        {
            break;
        }
        else
        {
            cout << "Entry was invalid! Please try again!!" << endl;
        }
        
        cout << command << '\n';        
    }
    cout << "Termination '" << terminalChar << "' found\n";    
    
    if (!(enteredMeasurements.empty()))
    {
        sort(enteredMeasurements.begin(), enteredMeasurements.end());
        cout << "Number of values entered: " << enteredMeasurements.size() << '\n';
        cout << "The smallest value entered is " << enteredMeasurements.front() << "m\n";
        cout << "The largest value entered is " << enteredMeasurements.back() << "m\n";
        cout << "The sum of the values entered is " << accumulate(enteredMeasurements.cbegin(), enteredMeasurements.cend(), 0.0) << "m\n";       
    } */


// 
    /*do {
        
       
        if (cin >> enteredNumber)
        {   
            cout << "Entered numbers: " << num1 << " and " << num2 << endl;
            if (num1  num2 == 0)
            {
                cout << "The entered numbers are equal!\n" << endl;
            }
            else if (fabs(num1 - num2) <= marginOfError)
            {
                cout << "The numbers are almost equal" << endl;
            }
            else
            { 
                if (num1 > num2)
                {
                    swap(num1, num2);
                }
                cout << "The smaller value is: " << num1 << endl;
                cout << "The larger value is: " << num2 << endl;
            }

        }
        else
        {
            cin.clear();
            cin.get(c);
            if (c == terminalChar)
            {
                break;
            }
            cout << "Entry was an invalid character, try again!" << endl;
        }
        cout << "\n" << command << "\n";
    }
    while (cin.get(c) && c != terminalChar);
    */
    
    /*while(cin.get(c) && c != terminalChar)
    {
        cin.putback(c);
        static double min{DBL_MAX};
        static double max{DBL_MIN};
        
        if (cin >> enteredNumber)
        {
            cout << "Number Entered: " << enteredNumber << endl;
            if (min > enteredNumber)
            {
                min = enteredNumber;
                cout << enteredNumber << " is the smallest number so far\n\n";
            }
            if (max < enteredNumber)
            {
                max = enteredNumber;
                cout << enteredNumber << " is the largest number so far\n\n";
            }
        }
        else
        {
            cin.clear();
            string getnext;
            cin >> getnext; // get whatever is in cin buffer
            if (getnext.find(terminalChar) != string::npos)
            {
                 break;
            }
            else
            {
                cout << "Entry was an invalid number or termination, please try again!" << endl;
            }
        }
        cout << command << endl;
    }
    */