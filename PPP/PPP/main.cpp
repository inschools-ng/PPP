#include "main.h"

int main() 
{
    using namespace std;

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
    
    /*double d = 0; 
    
    while (cin >> d)
    {
        // repeat the statements below 
        // as long as we type in numbers
        
        int i = d; // try to squeeze a double into an int;
        
        char c =  i; //  try to squeeze an int into a char;
        
        int i2 = c; // get the integer value of the character

        cout << "d == " << d // the original double  
    }
    
      
    
    */
    
    /*double x = 2.7;

    //    lots of code 
    
    int y = x; // y becomes 2
    
    cout << y << endl;
    */
    
    /*int a = 1000;
    
    char b = a; // b becomes -24 on some machines
    cout << b << endl;
    */
    
   /* double z {2.7}; // OK
    
    int y = {z}; // error: double -> int might narrow

    int a {1000}; // OK
    
    char b {a};  // error: int -> char might narrow 
    
    cout << y << b << endl; 
    */
    
    /*string NameOfSender;                    // name of sender of letter
    string NameOfRecepient;               // name of the recepient 
    string NameOfFriend;                     // name of friend
    char FriendGender{};                       // sex of friend
    int AgeOfRecepient{};                     // age of receiver 
    constexpr unsigned MinAge{0};     //  minimum age of recipient
    constexpr unsigned MaxAge{130}; // maximum age of recipient 
    
    
    cout << "Enter Name of Sender of Letter\n";
    cin >> NameOfSender;
    
    cout << "Enter Name of Recipient\n";
    cin >> NameOfRecepient;
    
    cout << "Enter Age of Recepient\n";
    cin >> AgeOfRecepient;
    
    /*if ( AgeOfRecepient > MinAge && AgeOfRecepient < MaxAge )
    {
        simple_error("You should be kidding!!");
    }*/
    
    /*cout << "Enter Name of Friend\n";
    cin >> NameOfFriend;
    
    cout << "Enter Gender of Friend\n";
    cin >> FriendGender;
    // static_cast enables conversion from char to int without warning 
    FriendGender = static_cast<unsigned char>(tolower(FriendGender));
    
    cout << "Dear " << NameOfRecepient << ", " << "\nHow are you? I am fine and I miss you. \nIts a great time to be alive, I have published my game and have sold 500,000 copies in two months.";
    cout << "Have you seen " << NameOfFriend << " recently?\n";
    
    // Identification of the Gender of the Friend 
    if ( FriendGender == 'm' ) //|| FriendGender == 'm' ) 
    {
        cout << "Please ask him to call me.\n";
    }
    else if ( FriendGender == 'f') //|| FriendGender == 'f' )
    {
        cout << "Please ask her to call me.\n";
    }
    else 
    {
        cout << "Please ask them to call me.\n";
    }
    
    // Identification of the Age of Receiver 
    if ( AgeOfRecepient <= 12) 
    {
        cout << "Next year, you will be " << AgeOfRecepient + 1 << ".\n";
    }
    else if (AgeOfRecepient == 17)
    {
        cout << "Next year, you will be " << AgeOfRecepient + 1 << " and be able to vote. \n";
    }
    else if (AgeOfRecepient > 70)
    {
        cout << "I hope you are enjoying retirement. \n";
    }
    else 
    {
           
    }
    
    cout << "Yours sincerely, " << "\n\n\n" << NameOfSender << endl;
    */
    
    
    // Exercise Two 
 
    /*cout << "*********************************\n";
    cout << "**Convert miles to kilometers.**\n";
    cout << "*********************************\n";

    double miles;
    cout << "Enter Number of Miles: ";
    if (cin >> miles) {
		cout << miles << " miles converted to kilometers is " << miles * 1.609 << endl;
	} else {
		simple_error("Invalid entry");
	}
    
    
	keep_window_open();
    
    // code not working as expected!!!!!!!!*/
    
    // Exercise 3
    
   /* int double  k = 5;
    int double = 5;
    int = 5; 
    int k = 5; 
    double = 5; 
    double k = 5; 
    
    cout << k << endl; 
 */
 
    // Exercise 6
    /*
    cout<< "*****************************************\n"
        << "*****Exercise 6: Numerical Sequence******\n"
        << "*****************************************\n";
    
    cout << "Enter three different integers: \n";
    int num1 = 0; 
    int num2 = 0;
    int num3 = 0; 
    
    int MinNum; 
    int MidNum;
    int MaxNum; 
    
    if (!(cin >> num1 >> num2 >> num3))
        {
            simple_error("Invalid entry"); 
        }
    
    
    // Num1 taking the minimum value, 
    // Num2 taking the mid value,
    // Num3 taking the maximum value 
    
    if ( (num1 <= num2) && (num1 <= num3) )
    {
        if (num2 <= num3) 
        {
           MinNum = num1;
           MidNum = num2;
           MaxNum = num3;
        }
        else 
        {
            MinNum = num1;
            MidNum = num3;
            MaxNum = num2;
        }
    }
    
    else if ( (num2 <= num3) && (num2 <= num1) )
    {
         if (num3 <= num2) 
        {
            MinNum = num2;
            MidNum = num3;
            MaxNum = num1;
        }
        else 
        {
            MinNum = num2;
            MidNum = num1;
            MaxNum = num3;
        }
    }
    
    else 
    {
         if (num1 <= num2) 
        {
           MinNum = num3;
           MidNum = num1;
           MaxNum = num2;
        }
        else 
        {
            MinNum = num3;
            MidNum = num2;
            MaxNum = num1;
        }
    }
   
    cout << MinNum << ", " << MidNum << ", " << MaxNum << endl;
    
     * keep_window_open(); 
    */
    /*
    int num{0};
    
    cout << "Enter an integer: " << endl; 
    
    cin >> num; 
    
    cout << "The integer " << num << " is " << ( (num % 2) ? "odd" : "even" ) << endl;
    */
    // alphanum = static_cast<unsigned char>(tolower(alphanum));
    
    string alphanum; 

    cout << "Enter a number in alphabets from 0 - 4 (e.g 'zero')\n"; 

    while (cin >> alphanum)
    {
        int num{INT32_MIN};
        if ( alphanum == "zero" )
        {
            num = 0;
        }
        
        else if ( alphanum == "one")
        {
            num = 1;
        }
        
        else if ( alphanum == "two")
        {
            num = 2; 
        }
        
        else if ( alphanum == "three")
        {
            num = 3;
        }
        
        else if (alphanum == "four")
        {
            num = 4; 
        }
        
        else 
        {
            cout << "Not in my dictionary!!!" <<  endl;
        }
        
        if ( num >= 0 ) 
        {
            cout << alphanum << " is also known as " << num << endl;
        }
        
    } 
    
    
    keep_window_open();
    return 0; 
}