// 



#include "main.h"

int main()
{
    using namespace std;
    constexpr char terminalChar = '|';
    const string command{"Enter two numbers[SEPARATED BY A SPACE KEY] or enter " + string{terminalChar} + " to quit-" };
    const unordered_map<string, double> convert{
        {"m", 100.0},   // convert m to cm
        {"cm", 1.00},   // already in cm
        {"in", 2.54},   // convert in to cm
        {"ft", 12.0 * 2.54} // convert ft to cm
    };
    
    cout << command << endl;
    char c{};
    
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
    
    while(cin.get(c) && c != terminalChar)
    {
        cin.putback(c);
        static double min{DBL_MAX};
        static double max{DBL_MIN};
        
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
            cout << enteredMeasurement << UnitOfMeasurement << " converted to " << convertedMeasurement << "cm\n";
            if (min > convertedMeasurement)
            {
                min = convertedMeasurement;
                cout << convertedMeasurement << "cm is the smallest number so far!\n\n";
            }
            if (max < convertedMeasurement)
            {
                max = convertedMeasurement;
                cout << convertedMeasurement << "cm is the largest number so far!\n\n";
            }
        }
        else if (UnitOfMeasurement.find(terminalChar) != string::npos)
        {
            break;
        }
        else
        {
            cout << "Entry was invalid! Please try again!!" << endl;
        }
    }
    cout << "Termination '" << terminalChar << "' found\n";    
    
    keep_window_open();
    return 0;
}