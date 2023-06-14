//
// Created by MUBINJON AKILZHONOV on 13.06.2023.
//
#include "iostream"
#include "lab27.h"

using namespace std;
int lab27::start() {
    double arr [10];
    for (int i=0;i<10;i++){
        arr[i]=1 + rand() % 100;
    }
    for (int j=0;j<10;j++){
        int a=0;
        for (int i=0;i<10;i++){
            if (arr[i]<arr[j]){
               a++;
            }
        }
        double b=arr[a];
        arr[a]=arr[j];
        arr[j]=b;
        for (double l:arr){
            cout<<l<<" ";
        }
        cout<<endl;
    }

}