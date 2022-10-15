#include <iostream>
#include <ctime>
using namespace std;
/*
Дано 7 днів. У кожному дні є N-людей. Треба отримати виручку магазину за ці всі дні.
*/
int main()
{
    float number;
    int days;
    const uint32_t limit = 366;
    float database[limit];
    long long allPeople[limit];
    cout << "Amount of days: ";
    cin >> days;
    for (size_t i = 0; i < days; i++)
    {
        system("cls");
        cout << "Day #" << i + 1 << endl;
        allPeople[i] = 0;
        database[i] = 0;
        do
        {
            cout << "Enter value cash: ";
            cin >> number;
            if (number != 0)
            {
                allPeople[i] += 1;
                database[i] += number;
            }
        } while (number != 0);
        cout << "#>-------------------------------------------------<" << endl;
        cout << "|  Today (day #" << i + 1 << "):" << endl;
        cout << "|  Amount of people for today: " << allPeople[i] << endl;
        cout << "|  Cash for today: " << database[i] << endl;
        cout << "#>-------------------------------------------------<" << endl;
        system("pause");
    }
    double sum = 0;
    double cashMin, cashMax;
    cashMin = cashMax = database[0];
    for (size_t i = 0; i < days; i++)
    {
        if (cashMin > database[i])
        {
            cashMin = database[i];
        }
        if (cashMax < database[i])
        {
            cashMax = database[i];
        }
        sum += database[i];
    }
    long long pMin, pMax, allpeople = 0;;
    pMin = pMax = allPeople[0];
    for (size_t i = 0; i < days; i++)
    {
        if (pMin > allPeople[i])
        {
            pMin = allPeople[i];
        }
        if (pMax < allPeople[i])
        {
            pMax = allPeople[i];
        }
        allpeople += allPeople[i];
    }
    cout << "#>---------------------<People Analize>----------------------------<" << endl;
    cout << "|  All amount of people: " << allpeople << endl;
    cout << "|  Minimal value of people per day: " << pMin << endl;
    cout << "|  Maximum value of people per day: " << pMax << endl;
    cout << "|  Average of people for all time: " << allpeople / days << endl;
    cout << "#>---------------------<Cash Analize>------------------------------<" << endl;
    cout << "|  All cash: " << sum << endl;
    cout << "|  Minimal value of surplus per day: " << cashMin << endl;
    cout << "|  Maximum value of surplus per day: " << cashMax << endl;
    cout << "|  Average of surplus for all time: " << sum / days << endl;
    cout << "#>-----------------------------------------------------------------<" << endl;
    return 0;
}