//
// Created by MUBINJON AKILZHONOV on 03.05.2023.
//
#include "lab20.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int lab20::start() {
    string text="";
    string line;
    setlocale(LC_ALL, "rus");
    ifstream fin("/Users/mubinjon9009/CLionProjects/untitled1/files/text20.txt");
    while(getline(fin,line)){
        string str;
        stringstream ss(line);
        int a=0;
        while (getline(ss, str, ' ')) {
            switch(a){
                case 0:{
                    text=text+str+" ";
                    break;
                }
                case 1: {
                    text=text+str.substr(0,2)+".";
                    break;
                }
                case 2: {
                    text=text+str.substr(0,2)+"., ";
                    break;
                }
            }
            a++;
        }
    }
    ofstream out;
    out.open("/Users/mubinjon9009/CLionProjects/untitled1/files/text20-1.txt");
    out<<text;
    out.close();
    return 0;
}
