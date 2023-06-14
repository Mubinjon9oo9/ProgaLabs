//
// Created by MUBINJON AKILZHONOV on 02.06.2023.
//

#include "lab19.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int compare(const std::string& file1, const std::string& file2) {
    ifstream f(file1);
    ifstream g(file2);
    if (!f.is_open() || !g.is_open()) {
        cout << "Ошибка при открытии файлов" << endl;
        return -1;
    }
    string componentF, componentG;
    int componentNumber = 1;
    while (getline(f, componentF) && getline(g, componentG)) {
        if (componentF != componentG) {
            break;
        }
        componentNumber++;
    }
    cout<<f.eof()<<"\n"<<g.eof();
    if (f.eof() && !g.eof()) {
        return componentNumber;
    } else if (!f.eof() && g.eof()) {
        return componentNumber;
    } else {
        return -1;
    }
}

int lab19::start(){
    string file1 = "/Users/mubinjon9009/CLionProjects/untitled1/files/text19.txt";
    string file2 = "/Users/mubinjon9009/CLionProjects/untitled1/files/text19-1.txt";

    int result = compare(file1, file2);

    if (result == -1) {
        cout << "Файлы идентичны" << endl;
    } else {
        cout << "Файлы различаются в компоненте: " << result << endl;
    }
    return 0;
}