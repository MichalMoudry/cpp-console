// CppConsole.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <string>
#include "TUI.h"
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
    return "\n---------------" + title + "---------------\n";
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
    return 0;
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
