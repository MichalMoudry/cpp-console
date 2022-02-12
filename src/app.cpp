#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

string numberInput()
{
    int input;
    cout << "Enter a number: ";
    cin >> input;
    return "Your input is " + to_string(input) + ".";
}

string header(string title)
{
    return "---------------" + title + "---------------\n";
}

int main()
{
    int userSelection;
    const auto separator = "\n----------------------------\n";
    cout << header("Test C++ console app");
    cout << "1. User input";
    cout << separator;
    cout << "Enter your selection: ";
    cin >> userSelection;
    cout << separator;
    switch (userSelection)
    {
    case 1:
        cout << numberInput();
        break;
    default:
        break;
    }
    cout << separator;
    cout << endl << endl << "Press any key to exit..." << endl;
    cin.get();
    cin.get();
}