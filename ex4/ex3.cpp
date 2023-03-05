#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, max_num = INT_MIN;

    for (int i = 0; i < 7; i++) {
        cout << "Введіть число " << i + 1 << ": ";
        cin >> n;

        if (n > max_num) {
            max_num = n;
        }
    }

    cout << "Найбільше число: " << max_num << endl;

    return 0;
}