#include "main.h"

//int main() 
//{
  //  using namespace std;

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
    
    /*string alphanum; 

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
        
    }*/
    
    // Constant Expressions 
    
    // constexpr double pi = 3.14159265359; 
    
    // pi = 7; // error: assignement to constant 
    
    // double c = 2 * pi * r; 
    
    
    // constexpr int max = 17; // a literal is a constant expression 
    
    // int val = 19; 
    
    // max + 2; // a constant expression (a const int plus a literal)
    
    // val + 2; // not a constant expression: it uses a variable
        
    
    /*constexpr int max = 100; 
    
    void use(int n)
    
    {
      constexpr int c1 = max + 7; // c1 is 107
        
      constexpr int c2 = n + 7; // error: no value of c2 
    
      // ...........
    }
 
    */
    
    // do while loop 
    /*
    int number{};
    
    do {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;
    }   
    while (number <= 1 || number >= 5);
    
    cout << "Thanks" << endl;
    */
    
    /*
    char selection{};
    do {
        cout << "\n------------------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "1. Do that" << endl;
        cout << "1. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        
        cin >> selection;
        /*if (selection == '1') 
            cout << "You chose 1 - doing this" << endl;
        else if (selection == '2')
            cout << "You chose 2 - doing that" << endl;
        else if (selection == '3')
            cout << "You chose 3 - doing something else" << endl;
        else 
            cout << "See You Again" << endl; 
        */
        
      /*  switch (selection) {
            case '1': cout << "You chose 1 - doing this" << endl; 
                break;
            case '2': cout << "You chose 2 - doing that" << endl;
                break;
            case '3': cout << "You chose 3 - doing something else" << endl;
                break;
            //default: cout << "Not a valid option. " << endl;
        }
        
        
    } while (selection != 'q' && selection != 'Q');
    
    
    
    */
    
    /*
    while (1 > 0)
    {
        char again{};
        cout << "Do you want to loop again? (Y/N): ";
        cin >> again;
        
        if (again == 'N' || again == 'n')
            break;
    }
    */
    
    /*
    for (int num1{1}; num1 <= 10; ++num1)
    {
        for (int num2{1}; num2 <= 10; ++num2)
        {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "------------------------------------------" << endl;
    }
    
    cout << endl;
    */
    
    /*
    int num_items{};
    
    cout << "How many data items do you have? ";
    cin >> num_items;
    
    vector<int> data{};
    
    for (int i{1}; i <= num_items; ++i)
    {
        int data_item{}; 
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    } 
  
    // displaying the values of the data_items 
    // displaying the values in a histogram 
    
    cout << "\nDisplaying Histogram" << endl;
    
    for (auto val: data)
    {
        for (int i(1); i <= val; ++i) 
            {
               if (i % 5 == 0) cout << "*";
               else cout << "-";
            }
        cout << endl;
    }
        
    */ 
    
    
    
    /*
    for (int fahr = -100; fahr <= 400; fahr += 25)
    {
        cout << "Fahr = " << fahr << 
        ", Cels = " << 5./9. * (fahr - 32) << endl; 
    }
    */
    
    /*
    unsigned int n = 1;
    while ( n <= 10 )
        cout << n++ << endl;

    cout << endl; 
    */
    /*
    for (double y = 0.1; y < 1.0; y += .1)
    {
        cout << y << endl;
    }*/
    
    
    /*switch (n)
    {
        case 1:
            cout << "The number is 1" << endl;
        case 2:
            cout << "The number is 2" << endl;
            break;
        default:
            cout << "The number is not 1 or 2" << endl;
            break;*/
    //}
    /*int n; 
    
    do 
    {
        cout << "Enter a positive number: " << endl;
        cin >> n;
    }
    while ( n<= 0 );
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "#" << endl;
        }
        
        cout << "\n" << endl;
    }
    
    
    cout << endl;
    */
        
    // type identifier ( parameter list ) function body
    /*
    void write_sorry() // take no argument
    {
        cout << "Sorry\n";
    }*/
    
    //makes the computation logically separable 
    //makes the program text clearer
    //makes it possible to use the fxn in more than one place 
    //eases testing
    
    
    
    
int main ()
{    
    using namespace std;
    
    
    /*for (int i = 0; i < 100; ++i)
    {
        print_square(i);
    }
    */
    
    // A vector is simply a sequence of elements, 
    // You can access
    // By an Index
    
    // vector of 6 ints 
    //vector<int> v = {5, 7, 8, 9, 10, 6}; 
    
    //vector<string> philosopher 
    //= {"Kant", "Plato", "Hiume", "Kierkegaard"}; // 4 string
    
   //vector<int> vi(6); // vector of 6 ints init to 0
    //vector<string> vs(4); // vector of 4 ints init to "" 
    
    //Traversing a vector 
    
    //for (int i = 0; i < v.size(); i++)
        //cout << v[i] << '\n';
        
    //for (int x : v) // for each x in v 
        //cout  << x << '\n';
        
    
    
    // v.size() gives us the 
    
    //cout << philosopher << endl;
    
    
    /*vector<double>vf; // empty vector 
    vf.push_back(2.7); // adds an element 2.7 at end of v
    vf.push_back(5.6);
    vf.push_back(7.9);
    
    for (auto x : vf) // for each x in vf
        cout  << x << '\n';
    */


    /*
    vector<double>temps; // temperatures
    
    for (double temp; cin >> temp;) // read into temp 
        temps.push_back(temp);  // put temp into vector 
    
    // compute median temperature
    sort(temps);    // sort temperatures
    
    cout << "Median Temprature: " << temps[temps.size()/2] << "\n";
    */
    
    /*
    double temp;
    
    while (cin>>temp) // read
    temps.push_back(temp);  // put into vector
    */
    
    /*
    const vector<string>animals{"dog", "cat", "ant", "mouse", "bird", "goat", "rabbit"};

    cout << "Enter an animal: " << endl;
    
    vector<string>words;
    
    for(string word; cin >> word;)
    {
        for(auto& c : word)
        {
            c = static_cast<unsigned char>(tolower(c));
            //cout << c << endl;
        }
        for(const auto str : animals)
        {
            if(str == word)
                word = "animals";
        }
        words.push_back(word); // push every word to back of vector 
    }
    
    cout << "Number of words: " << words.size() << endl;
    
    for(auto str : words)
    {
        cout << str << " ";
    }
    
    cout << endl;
    */
    
    
    keep_window_open();
    return 0; 
}