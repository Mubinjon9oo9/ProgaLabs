//
// Created by MUBINJON AKILZHONOV on 03.05.2023.
//

#include "lab20.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int lab20(){
    int index=0;
    string text="";
    string line;
    setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы
    ifstream fin("/Users/mubinjon9009/CLionProjects/untitled1/files/text20.txt"); // открыли файл для чтения
    while(getline(fin,line)){
        string str;
        stringstream ss(line);
        int a=0;
        cout<<line;
        /*
        while (getline(ss, str, ' ')) {
            switch(a){
                case 0:{
                    text+=str+" ";
                }
                break;
                case 1: {
                    text+=str+".";
                }
                break;
                case 2: {
                    text+=str+".\n";
                }
            }
            a++;
        }
        */
        cout<<text;
        return 0;
    }
}
