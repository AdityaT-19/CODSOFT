#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char operation;

    cout << "Simple Calculator\n";

    while (true)
    {
        cout << "Enter first number (or '#' to exit): ";
        cin >> num1;
        if (cin.fail())
        {
            cin.clear(); // clear the error flag
            string exitSignal;
            cin >> exitSignal;
            if (exitSignal == "#")
            {
                cout << "Exiting...\n";
                break;
            }
            else
            {
                cout << "Invalid input. Please try again.\n";
                continue;
            }
        }

        cout << "Enter an operation (+, -, *, /, %): ";
        cin >> operation;
        cout << "Enter second number: ";
        cin >> num2;

        switch (operation)
        {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
            {
                cout << "Result: " << num1 / num2 << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        case '%':
            if (num2 != 0)
            {
                cout << "Result: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            cout << "Invalid operation.\n";
            break;
        }
    }

    return 0;
}
