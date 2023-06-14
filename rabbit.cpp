//
// Created by MUBINJON AKILZHONOV on 13.06.2023.
//

#include "rabbit.h"
#include "iostream"
#include "fstream"

using namespace std;
int count(int k, int n) {
    if (n == 0)
        return 1;
    int n_count = 0;
    for (int i = 1; i <= min(k, n); ++i)
        n_count += count(k, n - i);
    return n_count;
}
int rabbit::start() {
    ifstream ifst("/Users/mubinjon9009/CLionProjects/untitled1/files/rabbit/input.txt");
    ofstream ofst("/Users/mubinjon9009/CLionProjects/untitled1/files/rabbit/output.txt");
    int k, n;

    ifst >> k >> n;

    ofst << count(k, n);

    ofst.close();
    return 0;
}