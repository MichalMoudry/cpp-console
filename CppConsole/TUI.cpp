#include "TUI.h"

using namespace UI;
using namespace std;

/// <summary>
/// Method for obtaining TUI element for a header.
/// </summary>
/// <param name="title"></param>
/// <returns>TUI element for a header.</returns>
string TUI::GetHeader(string title)
{
	return "\n---------------" + title + "---------------\n";
}