//
// Created by MUBINJON AKILZHONOV on 13.06.2023.
//

#include "tree.h"
#include <iostream>
#include <fstream>

using namespace std;
int variants(int p, int t) {
    if (0 == t)
        return 1;
    if (1 == t)
        return p;
    if (p < t)
        return 0;

    int v = 0;
    for (int distance = 0;true; distance++) {
        int used = t + distance*(t-1);
        if (used > p)
            break;
        v += p - used + 1;
    }
    return v;
}

    int tree::start() {
    ifstream inputFile("/Users/mubinjon9009/CLionProjects/untitled1/files/tree/input.txt");
    ofstream outputFile("/Users/mubinjon9009/CLionProjects/untitled1/files/tree/output.txt");

    int p, t;
    inputFile >> p >> t;

    outputFile << variants(p,t);

    inputFile.close();
    outputFile.close();

    return 0;
}
