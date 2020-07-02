// 



#include "main.h"



int main()
{
    using namespace std;
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
    }

    
    keep_window_open();
    return 0;
}

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