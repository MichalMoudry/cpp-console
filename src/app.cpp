#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

string header(string title)
{
    return "---------------" + title + "---------------\n";
}

void doubleEndLine()
{
    cout << endl << endl;
}

string numberInput()
{
    string input;
    cout << "Enter a number: ";
    getline(cin, input);
    try
    {
        int inputAsInt = stoi(input);
        return "Your input is " + to_string(inputAsInt) + ".";
    }
    catch(const exception& e)
    {
        //std::cerr << e.what() << '\n';
        return "Your input is not a number.";
    }
}

void operators()
{
    int x = 5;
    int y = 3;
    cout << "(x > y) = " << (x > y);
}

void strings()
{
    cout << "Concatenation" << endl;
    string firstName = "Michal";
    string lastName = "Moudrý";
    string fullName = firstName.append(" ").append(lastName);
    cout << "Full name: " << fullName;
    doubleEndLine();

    cout << "Strings and numbers" << endl;
    cout << "Test string - " + to_string(50);
    doubleEndLine();

    cout << "String length" << endl;
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Evaluated string: " << txt << ", length: " << txt.length();
    doubleEndLine();

    cout << "Change string character" << endl;
    string tempString = "Hello";
    cout << "String before change: " << tempString << endl;
    tempString[0] = 'J';
    cout << "String after change: " << tempString << endl;
    tempString = tempString.replace(tempString.begin(), tempString.end(), "Hello");
    cout << "replace() method: " << tempString;
}

int main()
{
    string userSelection;
    const string separator = "\n--------------------------------------------------\n";
    cout << header("Test C++ console app");
    cout << "1. User input" << endl << "2. Operators" << endl << "3. Strings" << endl << "4. Palindrom detector";
    cout << separator;
    cout << "Enter your selection: ";
    getline(cin, userSelection);

    if (userSelection == "1")
    {
        cout << endl << header("1. User input");
        cout << numberInput();
    }
    else if (userSelection == "2")
    {
        cout << endl << header("2. Operators");
        operators();
    }
    else if (userSelection == "3")
    {
        cout << endl << header("3. Strings");
        strings();
    }
    else
    {
        cout << "Your input is invalid." << endl;
    }

    cout << separator;
    /*
    cout << endl << endl << "Press enter to exit..." << endl;
    cin.get();
    cin.get();
    */
}