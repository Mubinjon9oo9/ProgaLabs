//
// Created by MUBINJON AKILZHONOV on 03.05.2023.
//
#include "lab22.h"
#include <iostream>
#include <fstream>
using namespace std;
int st = 100;//Введите колличество строк
string *brand = new string [st];
string *number = new string [st];
string *lastName = new string [st];

void getData(string s,int pos){
    int size = s.length(),a=1;
    string word="";
    for (int i(0);i<=size;i++) {
        if (s[i] == ',' && a == 1) {
            brand[pos] = word;
            word = "";
            a++;
        } else if (s[i] == ',' && a == 2) {
            number[pos] = word;
            word = "";
            a+=1;
        }else if (i==size && a == 3) {
            lastName[pos] = word;
            word = "";
            a++;
        }
        else if (s[i] != ' ' && s[i] != ',') {
            word += s[i];
        }
    }
}

int lab22::start() {
    string line;
    ifstream in("/Users/mubinjon9009/CLionProjects/untitled1/files/text22.txt");
    int a=0;
    while(getline(in,line)){
        getData(line,a);
        a++;
    }
    string n;
    cout<<"AlfaRomeo, BMW, Bugatti, Bentley, Lamborghini, LandRover, Mclaren, Mercedes-Benz , Porsche, Rolls-Royce"<<endl;
    cout<<"Input one of brands: ";
    cin>>n;
    for (int i(0);i< st;i++){
        if(n.find(brand[i])==0) {
            cout<< lastName[i] << ", " << number[i]  << endl;
        }
    }
}
