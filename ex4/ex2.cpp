#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "Enter a four-digit number: ";
    cin >> num;

    if (num < 1000 || num > 9999) {
        cout << "Error: number must be four digits.\n";
        return 0;
    }

    int digit1, digit2, digit3, digit4;
    digit1 = (num / 1000 + 1) % 10;
    digit2 = ((num / 100) % 10 + 1) % 10;
    digit3 = ((num / 10) % 10 + 1) % 10;
    digit4 = (num % 10 + 1) % 10;

    int newNum = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;
    cout << "New number: " << newNum << endl;

    return 0;
}
