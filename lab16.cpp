//
// Created by MUBINJON AKILZHONOV on 03.05.2023.
//

#include "lab16.h"
#include <iostream>
#include "fstream"
using namespace std;
int lab16(){
    int a=0;
    string line;
    setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы
    ifstream fin("/Users/mubinjon9009/CLionProjects/untitled1/files/text16.txt"); // открыли файл для чтения
    while(getline(fin,line)){
        int ti = stoi(line);
        if (ti%2==0&&ti!=0){
            a++;
        }
    }
    cout<<"Колличетсво четных чисел среди компонентов: "<<a;
}