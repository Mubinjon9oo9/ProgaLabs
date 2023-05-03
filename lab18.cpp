//
// Created by MUBINJON AKILZHONOV on 03.05.2023.
//

#include "lab18.h"
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("/Users/mubinjon9009/CLionProjects/untitled1/files/text18.txt");
    int n;
    cout<<"Input n: ";
    cin>>n;
    int u[n+1];
    u[0]=0;
    u[1]=1;
    for (int i(2);i<=n;i++){
        u[i]=u[i-1]+u[i-2];
        cout<<u[i]<<endl;
    }
    for (int i(0);i<=n;i++){
        out<<u[i]<<endl;
    }
    out.close();
}
