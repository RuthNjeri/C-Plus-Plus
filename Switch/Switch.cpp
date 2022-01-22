// Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x;
    cout << "Enter a number, 0 or negative to quit" << endl;
    cin >> x;

    while (x > 0)
    {
        switch (x)
        {
        case 1:
            cout << "you entered 1" << endl;
            break;
        case 2:
        case 3:
            cout << "you entered 2 or 3" << endl;
            break;
        case 4:
            cout << "you entered 4" << endl;
        case 5:
            cout << "you entered 5" << endl;
            break;
        default:
            cout << "you entered a number other than 1-5" << endl;
        }

        cout << "Enter a number, 0 or negative to quit" << endl;
        cin >> x;

    }

    return 0;
}

