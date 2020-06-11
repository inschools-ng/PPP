#include <iostream>
using namespace std;

int main() 
{
  /* cout << "Hello World!\n";
   cout << "Take the road from the entrance to the nearest junction\n";
   cout << "Take a left, then the immediate stairs by the right to the third floor.\n";
   cout << "Take a right and the immediate right.\n";
   cout << "Keep going.\n";
   cout << "After the stairs, keep going\n";
   cout << "Hello World! The nearest door on the left leads to the bathroom.\n" << endl;
   
//    keep_window_open();*/
    
    /*cout << "Please enter your first name, surname and age (followed by ENTER key):\n";

    string FirstName;      // first_name is a variable of type string 
    string Surname;      // String for character strings 
    int Age;     // int for integers
   
    cin >> FirstName;    
    cin >> Surname;      
    cin >> Age;             
    cout << "Hello " << FirstName << " " << Surname << "!\n" << "Age: " << Age << endl;
    */
    
    /*string previous = " ";      // previous word; initialised to "not a word"
    string current;                 // current word
    
    while (cin >> current)      // read a stream of words
    {
        if (previous == current)    // check if the word is same as last 
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
    
    */
    
  /*  string s = "Goodbye, word.";
    cout << s << '\n';*/
    
    /*double x;           // we forgot to initialize:
    
    // the value of x is undefined 
    
    double y = x;   // the value of y is undefined 

    double z = 2.0 + x;     // the meaning of + and the value of z are undefined 
    */
    
    /*char c = 'x';
    
    int i1= c;
    
    int i2 = 'x';
    
    char c2  = i1;*/

/*    double d1 = 2.3;
    
    double d2 = d1 + 2; // 2 is converted to 2.0 before adding 
    
    if (d1 < 0) // 0 is converted to 0.0 before comparison
        cout << "d1 is -ve";
     else 
        cout << "d1 +ve confirmed" << endl;
        */
    
    /*int a = 20000;
    
    char c = a;     // try to squeeze a large  int into a small char 
    
    int b = c; 
    
    if (a != b) cout << a << " != " << b << '\n';
    else cout << "We have large characters\n" << endl;*/
    
    double d = 0; 
    
    while (cin >> d)
    {
        // repeat the statements below 
        // as long as we type in numbers
        
        int i = d; // try to squeeze a double into an int;
        
        char c =  i; //  try to squeeze an int into a char;
        
        int i2 = c; // get the integer value of the character

        cout << "d == " << d // the original double  
    }
    
      
    
    
    return 0; 
}