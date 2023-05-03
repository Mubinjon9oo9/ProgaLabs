//
// Created by MUBINJON AKILZHONOV on 03.05.2023.
//

#include "lab12.h"
#include <iostream>
using namespace std;
string space(int i) {
    string spc="";
    for (int l(0);l<i;l++){
        spc+=" ";
    }
    return spc;
}
int lab12()
{
    int n=50,a=-1,b=4;
    float h = (b-a)/n;
    for (int i(0);i<=n;i++){
        float x = (a+(i*h));
        float y = ((x-3)/((x*x)+2));

    }

    return 0;
}