#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int length;
    cout << "Enter length: ";
    cin >> length;
    for (size_t i = 0; i < length; i++)
    {
        for (size_t j = 0; j < length; j++)
        {
            if (i <= j)
            {
                SetConsoleTextAttribute(hConsole, 10);
                cout << "[" << i << "][" << j << "]\t";
                SetConsoleTextAttribute(hConsole, 7);
            }
            else
            {
                cout << "[" << i << "][" << j << "]\t";
            }
        }
        cout << endl << endl;
    }
    cout << endl;
    return 0;
}