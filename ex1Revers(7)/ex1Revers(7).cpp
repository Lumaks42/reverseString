// ex1Revers(7).cpp 
#include <iostream>
using namespace std;

void reversit(wchar_t[]);      // prototype function

int main()
{
    const int MAX = 80;         // max length string
    wchar_t s[MAX];

    wcout << "Enter string:\n";
    wcin.get(s, MAX);           // we get a line with spaces

    reversit(s);                // revers string

    wcout << "Result reversing: " << s << endl;

    return 0;
}

void reversit(wchar_t str[])
{
    for (int a = 0; a < wcslen(str) / 2; a++)
    {
        char temp = str[a];
        str[a] = str[wcslen(str) - a - 1];
        str[wcslen(str) - a - 1] = temp;
    }
}