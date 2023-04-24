#include <iostream>
#include <cmath>
using namespace std;
class lab1 {
    double x[6];

    double find_px(double y) {
        double px =
                (x[6] * pow(y, 6)) + (x[5] * pow(y, 5)) + (x[4] * pow(y, 4)) + (x[3] * pow(y, 3)) + (x[2] * pow(y, 2)) +
                (x[1] * pow(y, 1)) + x[0];
        return px;
    }
    int main() {
        for (int i(0); i <= 6; i++) {
            cout << "Input x";
            cout << i;
            cout << ": ";
            cin >> x[i];
        }
        double x1 = find_px(x[1] + 1) - find_px(x[1]);
        double x3 = find_px(x[3] + 1) - find_px(x[3]);
        double x4 = find_px(x[4] + 1) - find_px(x[4]);
        cout << "X1 = ";
        cout << x1;
        cout << "\nX3 = ";
        cout << x3;
        cout << "\nX4 = ";
        cout << x4;

        return 0;
    }
};

