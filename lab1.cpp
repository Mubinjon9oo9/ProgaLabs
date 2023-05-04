#include <iostream>
#include <cmath>
#include "lab1.h"
using namespace std;
double x[7];
double find_px(double y) {
    double px =
            (x[6] * pow(y, 6)) + (x[5] * pow(y, 5)) + (x[4] * pow(y, 4)) + (x[3] * pow(y, 3)) + (x[2] * pow(y, 2)) +
            (x[1] * pow(y, 1)) + x[0];
    return px;
}
int lab1::start() {
    for (int i(0); i <= 6; i++) {
        cout << "Input x";
        cout << i;
        cout << ": ";
        cin >> x[i];
    }
    double x1 = find_px(x[1] + 1) - find_px(x[1]);
    double x3 = find_px(x[3] + 1) - find_px(x[3]);
    double x4 = find_px(x[4] + 1) - find_px(x[4]);
    cout << "X1 = "<<x1<<endl;
    cout << "X3 = "<<x3<<endl;
    cout << "X4 = "<<x4<<endl;
    return 0;
}

