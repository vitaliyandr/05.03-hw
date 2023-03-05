#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int distance_AB, distance_BC, cargo_weight;
    double fuel_consumption, fuel_needed;

    cout << "Введіть відстань між пунктами А і В (км): ";
    cin >> distance_AB;

    cout << "Введіть відстань між пунктами В і С (км): ";
    cin >> distance_BC;

    cout << "Введіть вагу вантажу (кг): ";
    cin >> cargo_weight;

    if (cargo_weight > 2000) {
        cout << "Літак не піднімається з таким вантажем." << endl;
        return 0;
    }
    else if (cargo_weight <= 500) {
        fuel_consumption = 1;
    }
    else if (cargo_weight <= 1000) {
        fuel_consumption = 4;
    }
    else if (cargo_weight <= 1500) {
        fuel_consumption = 7;
    }
    else {
        fuel_consumption = 9;
    }

    fuel_needed = (distance_AB + distance_BC) * fuel_consumption;

    if (fuel_needed <= 300) {
        cout << "Літак може долетіти до пункту С без дозаправки." << endl;
    }
    else {
        cout << "Для долету до пункту С літаку необхідно дозаправитись "
            << fuel_needed - 300 << " літрів палива в пункті В." << endl;
    }

    return 0;
}