//
// Created by MUBINJON AKILZHONOV on 22.05.2023.
//

#include "DecToBin.h"
#include <iostream>
using namespace std;

    void DToB(int dec) {
        if (dec > 0) {
            DToB(dec / 2);
            cout << dec % 2;
        }
    }
    int start() {
        int dec;
        cout << "Введите десятичное число: ";
        cin >> dec;
        cout << "Двоичное: ";
        DToB(dec);
        return 0;
    }
