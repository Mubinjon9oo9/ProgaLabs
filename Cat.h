//
// Created by MUBINJON AKILZHONOV on 18.05.2023.
//

#ifndef MAIN_OUT_CAT_H
#define MAIN_OUT_CAT_H
using namespace std;

class Cat {
private:
    int name, health;

public:
    void Feed(int foodCount);
    void Punish(int hit);
    Cat();
    int getName() const;
    int getHealth() const;
};


#endif //MAIN_OUT_CAT_H
