#include <iostream>
#include <fstream>
#include <sstream>
#include "lab3.h"
using namespace std;
int main(){
    ::lab3 l;
    l.start();
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
        while (getline(ss, str, ' ')) {
            switch(a){
                case 0:{
                    text=text+str+" ";
                }
                    break;
                case 1: {
                    text=text+str+".";
                }
                    break;
                case 2: {
                    text=text+str+".\n";
                }
            }
            a++;
        }
        cout<<text;
        return 0;
    }
}