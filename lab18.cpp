#include "lab18.h"
#include <iostream>
#include <fstream>
using namespace std;
int linesCount(){
    string line;
    int n=0;
    ifstream fin("/Users/mubinjon9009/CLionProjects/untitled1/files/text18.txt");
    while(getline(fin,line)){
        n++;
    }
    return n;
}
int lab18::start() {
    string line;
    setlocale(LC_ALL, "rus");
    int n=linesCount();
    int u[n];
    ifstream fin("/Users/mubinjon9009/CLionProjects/untitled1/files/text18.txt");
    int i=0;
    while(getline(fin,line)){
        u[i]=stoi(line);
        i++;
    }
    u[n]=u[n-1]+u[n-2];
    ofstream out;
    out.open("/Users/mubinjon9009/CLionProjects/untitled1/files/text18.txt");
    for (int i(0);i<=n;i++){
        out<<u[i]<<endl;
    }
    out.close();
}
