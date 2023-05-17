//
// Created by MUBINJON AKILZHONOV on 03.05.2023.
//
#include "lab21.h"
#include <iostream>
#include <fstream>
using namespace std;
int lab21::start() {
    int more = 0, midm = 0,q=0,q1=0;
    string line,line1;
    setlocale(LC_ALL, "rus");
    ifstream in("/Users/mubinjon9009/CLionProjects/untitled1/files/text21.txt");
    ifstream in1("/Users/mubinjon9009/CLionProjects/untitled1/files/text21.txt");
    while (getline(in, line)) {
        int num = line[0] - '0';
        q += num;
        q1++;
    }
    int a = q/q1;
    cout<<"Среднее колличесвто вещей: "<<a<<endl;
    while (getline(in1, line1)) {
        int num = line1[0] - '0';
        if (num >2)
            more++;
        if (num >= q/q1)
            midm++;
    }
    cout << "Пасажиры с более чем 2 вещами: " << more << endl;
    cout << "Пасажиры c колличеством вещей превыщающий среднее: " << midm << endl;
}
