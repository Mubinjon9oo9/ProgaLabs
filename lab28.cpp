//
// Created by MUBINJON AKILZHONOV on 13.06.2023.
//
#include "iostream"
#include "lab28.h"
using namespace std;
int lab28::start() {
    double arr[10][10];
    double sums[10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            arr[i][j] = 1.0+4.0*rand()/(double)RAND_MAX;
            sums[i]+=arr[i][j];
            cout<<sums[i]<<" ";
        }
        cout<<endl;
    }
    double res [10][10];
    for (int j=0;j<10;j++){
        int a=0;
        for (int i=0;i<10;i++){
            if (sums[i]<sums[j]){
                a++;
            }
        }
        cout<<sums[j]<<" "<<endl;
        for (int i=0;i<10;i++){
            res[9-a][i]=arr[j][i];
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}