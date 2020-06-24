// 



#include "main.h"

int main()
{
    using namespace std;
    
    constexpr char terminalChar = '|';
    const string command{"Enter two numbers or enter " + string{terminalChar} + " to quit-" };
    
    cout << command << endl;
    char c{};
    do {
        int num1{};
        int num2{};
        
        if (cin >> num1 >> num2)
        {   
            cout << "Entered numbers: " << num1 << " and " << num2 << endl;
            if (num1 == num2)
            {
                cout << "The entered numbers are equal!\n" << endl;
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
    
    keep_window_open();
    return 0;
}