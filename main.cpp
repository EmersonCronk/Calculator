
#include <iostream>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\nArithmetic Menu" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "You chose Addition." << endl;
                break;

            case 2:
                cout << "You chose Subtraction." << endl;
                break;

            case 3:
                cout << "You chose Multiplication." << endl;
                break;

            case 4:
                cout << "You chose Division." << endl;
                break;

            case 5:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
