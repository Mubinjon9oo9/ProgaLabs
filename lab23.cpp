#include <iostream>
#include "fstream"
#include "lab23.h"
using namespace std;
int lab23::start() {
    int der = 0, met = 0;
    string line;
    setlocale(LC_ALL, "rus");
    ifstream in("/Users/mubinjon9009/CLionProjects/untitled1/files/text23.txt");
    while (getline(in, line)) {
        int num = line[0] - '0';
        if (line.find("Деревянный") < 100 && num == 3)
            der++;
        if (line.find("Металлический") < 100 && num >= 5)
            met++;
    }
    cout << "Деревянные кубики с ребром 3: " << der << endl;
    cout << "Металлические кубики с ребром большим 5: " << met << endl;
}