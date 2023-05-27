#include <iostream>
#include "lab5.h"
using namespace std;
int lab5::start() {
    while (true){
        cout << "Input n: ";
        int n;
        cin >> n;
        if(n==0){
            cout<<"BREAK"<<endl;
            break;
        }
        else if (n <= 25) {
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
        return 0;
    }
