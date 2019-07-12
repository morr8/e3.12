/*
 • E3.12
 Add error handling to Exercise • E3.11. If the user does not enter a number when expected, or provides an invalid unit for the altitude, print an error message and end the program.
 */


#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "enter temperature in celsius or fahrenheit (example 12 c): ";
    float temp;
    string tempSuffix;
    cin >> temp >> tempSuffix;
    cout << "enter altitude in meters or feet (example 1,000 ft or 300 m): ";
    float alt;
    string altSuffix;
    cin >> alt >> altSuffix;
    
    if (cin.fail())
    {
        cout << "\nerror please follow examples" << endl;
        return 1;
    }
    
    if (altSuffix == "ft")
    {
        temp = temp + (alt / 1000);
    }
    else
    {
        temp = temp + (alt / 300);
    }
    
    if (tempSuffix == "f")
    {
        if (temp <= 32)
        {
            cout << "solid";
        }
        else if (temp < 212)
        {
            cout << "liquid";
        }
        else
        {
            cout << "gaseous";
        }
    }
    else
    {
        if (temp <= 0)
        {
            cout << "solid";
        }
        else if ( temp < 100)
        {
            cout << "liquid";
        }
        else
        {
            cout << "gaseous";
        }
    }
    cout << endl;
}
