#include <iostream>
#include "lab5.h"
using namespace std;
int lab5::start() {
        cout<<"Input n: ";
        int n;
        cin >>n;
        if (n<=25){
            cout<<"YES";
            return 0;
        }
        cout<< "NO";
        return 0;
    }
