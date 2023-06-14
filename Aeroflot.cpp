//
// Created by MUBINJON AKILZHONOV on 05.06.2023.
//

#include "Aeroflot.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
struct AEROFLOT {
    string destination;
    int flightNumber;
    string aircraftType;
};

bool compareByDestination(const AEROFLOT& a, const AEROFLOT& b) {
    return a.destination < b.destination;
}int Aeroflot::start() {
    const int SIZE = 7;
    AEROFLOT flights[SIZE];
    for (int i = 0; i < SIZE; i++) {
        cout << "Введите название пункта назначения рейса: ";
        cin >> flights[i].destination;
        cout << "Введите номер рейса: ";
        cin >> flights[i].flightNumber;
        cout << "Введите тип самолета: ";
        cin >> flights[i].aircraftType;
    }
    sort(flights, flights + SIZE, compareByDestination);
    string inputAircraftType;
    cout << "Введите тип самолета для поиска: ";
    cin >> inputAircraftType;

    bool found = false;

    for (int i = 0; i < SIZE; i++) {
        if (flights[i].aircraftType == inputAircraftType) {
            cout << "Пункт назначения: " << flights[i].destination << ", Номер рейса: " << flights[i].flightNumber << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Рейсы с указанным типом самолета не найдены." << endl;
    }

    return 0;
}
