#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num, sum1 = 0, sum2 = 0;

    // Ввід шестизначного числа
    cout << "Введіть шестизначне число: ";
    cin >> num;

    // Перевірка чи є число шестизначним
    if (num < 100000 || num > 999999) {
        cout << "Помилка! Введіть шестизначне число." << endl;
        return 0;
    }

    // Обчислення сум перших та других трьох цифр
    for (int i = 0; i < 3; i++) {
        sum1 += num % 10;
        num /= 10;
    }
    for (int i = 0; i < 3; i++) {
        sum2 += num % 10;
        num /= 10;
    }

    // Перевірка чи є число щасливим
    if (sum1 == sum2) {
        cout << "Число є щасливим." << endl;
    }
    else {
        cout << "Число НЕ є щасливим." << endl;
    }

    return 0;
}