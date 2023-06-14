//
// Created by MUBINJON AKILZHONOV on 18.05.2023.
//
#include "iostream"
#include "string"
using namespace std;
class Cat{
    int age,health;
    string name,color;
public:
    Cat(){
        cout<<"Input name for your cat: ";
        cin>>name;
        age=rand()%10+1;
        health=100;
    }

    void Feed(int foodCount) {
        health+=foodCount;
    }
    void Punish(int hit) {
        health-=hit;
    }
    void changeColor(){
        if (health<=0){
            color="white";
        }
        else{
            color="green";
        }
    }
    string getName() {
        return name;
    }
    string getColor(){
        changeColor();
        return color;
    }
    int getAge(){
        return age;
    }
    int getHealth(){
        return health;
    }
    bool checkDeath(){
        if (health<=0){
            return false;
        }
        else{
            return true;
        }
    }
};
