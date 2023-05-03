//
// Created by MUBINJON AKILZHONOV on 03.05.2023.
//

#include "lab17.h"
#include <iostream>
#include <fstream>
using namespace std;
int lab17(){
    ofstream out;
    out.open("/Users/mubinjon9009/CLionProjects/untitled1/files/text17.txt");
    int n=0;
    cout<<"Input n: ";
    cin>>n;
    int fact=1,all;
    double b =0;
    for(int i(1);i<=n;i++){
        fact=fact*i;
        b=b+(1.0/(fact));
        all=(i*b);
        out<<all<<endl;
    }
    out.close();
}
