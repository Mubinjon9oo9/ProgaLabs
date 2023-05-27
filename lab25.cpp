//
// Created by MUBINJON AKILZHONOV on 26.05.2023.
//

#include "lab25.h"
#include "iostream"

using namespace std;
int lab25::start() {
    int n;
    cout << "Input n: ";
    cin >> n;
    int rub, cop;
    rub = n / 100;
    cop = n % 100;
    cout << rub << " рублей " << cop << " копеек";
}