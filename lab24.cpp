#include <iostream>
#include "fstream"
#include "lab24.h"
using namespace std;
string go(string s){
    int size = s.length();
    string line="";
    for (int i(0);i<size;i++){
        if(s[i]=='0') {
            line += '1';
        }
        else if(s[i]=='1') {
            line += '0';
        }
        else {
            line+=s[i];
        }
    }
    return line;
}

int lab24::start() {
    string line;
    setlocale(LC_ALL, "rus");
    ifstream in("/Users/mubinjon9009/CLionProjects/untitled1/files/text24.txt");
    ofstream out;
    out.open("/Users/mubinjon9009/CLionProjects/untitled1/files/text24-1.txt");
    while(getline(in,line)){
        out<<go(line)<<endl;
    }
    out.close();
}