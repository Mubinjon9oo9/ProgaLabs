#include "lab2.h"
#include "iostream"
#include "cmath"
using namespace std;
double square(double x,double y,double z){
    double p = (x + y + z)/2; // нахождение полупериметра треуголника
    return sqrt(p * (p - x) * (p - y) * (p - z));// возвращает площадь треугольника
}
int lab2::start() {
    double a, b, c, d, s;
    while (true) {
        cout << "Input a (1<a<2.5): ";
        cin >> a;
        if (a > 1 && a < 3) {
            break;
        }
    }
    while (true) {
        cout << "Input b (0.5<b<4.5): ";
        cin >> b;
        if (b > 0.5 && b < 4.5) {
            break;
        }
    }
    while (true) {
        cout << "(c+d>2.5)\nInput c:";
        cin >> c;
        cout << "Input d:";
        cin >> d;
        if (a > 1 && a < 2.5) {
            break;
        }
    }
    s = square(1, 2, a) + square(2, 2.5, b) + square(2.5, c, d);// Сумма площади треуголников ABC, ACD и ADE == площадь пятиуголника ABCDE
    cout << s;
    return 0;
}
