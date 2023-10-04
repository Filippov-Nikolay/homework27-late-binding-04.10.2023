#include <iostream>
#include "Automobile.h"
#include "Vessel.h"
#include "Airplane.h"
#include "Tram.h"
#include "Motorbike.h"

using namespace std;

int main() {
    setlocale(0, "");

    int userChoice = 0;
    Transport* ptr = nullptr;

    cout << "Menu: " << endl;
    cout << "1. Автомобиль" << endl;
    cout << "2. Судно" << endl;
    cout << "3. Самолёт" << endl;
    cout << "4. Трамвай" << endl;
    cout << "5. Мотоцикл" << endl;
    cout << "> ";

    cin >> userChoice;

    switch (userChoice) {
    case 1:
        ptr = new Automobile();
        break;
    case 2:
        ptr = new Vessel();
        break;
    case 3:
        ptr = new Airplane();
        break;
    case 4:
        ptr = new Tram();
        break;
    case 5:
        ptr = new Motorbike();
        break;
    default:
        cout << "ERROR" << endl;
    }

    ptr->Input();
    cout << endl;

    ptr->Print();

    return 0;
}
