#include <iostream>
#include <cmath>
#include "lab1.h"
using namespace std;

double find_px(double y, int n,double x[]) {
    if (n==0){
        return x[n];
    }
    else{
        return x[n] * pow(y, n)+ find_px(y,n-1,x) ;
    }
}
int lab1::start() {
    int n;
    cout<<"Input n: ";
    cin>>n;
    double x[n];
    for (int i(0); i <= n; i++) {
        x[i]=1 + rand() % (10);;
        cout<<"x"<<i<<" = "<<x[i]<<endl;
    }
    double x1 = find_px(x[1] + 1,1,x) - find_px(x[1],1,x);
    double x3 = find_px(x[3] + 1,3,x) - find_px(x[3],3,x);
    double x4 = find_px(x[4] + 1,4,x) - find_px(x[4],4,x);
    double xn = find_px(x[n] + 1,n,x) - find_px(x[n],n,x);
    cout << endl << "X1 = "<<x1<<endl;
    cout << "X3 = "<<x3<<endl;
    cout << "X4 = "<<x4<<endl;
    cout << "Xn = "<<xn<<endl;
    return 0;
}

