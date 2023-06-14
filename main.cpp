#include "lab27.h"
#include "lab28.h"
#include "Cat.cpp"
#include "rabbit.h"
#include "Aeroflot.h"
using namespace std;
    void iniCat(){
        ::Cat c;
        while(c.checkDeath()){
            cout<<"-----"<<endl<<"Name, Age, Color, Feed, Punish, Health"<<endl<<"-----"<<endl;
            cout<<"Input command: ";
            string com;
            cin>>com;
            if(com.find("Name")==0){
                cout<<"tree's name is "<<c.getName()<<endl;
            }
            else if(com.find("Health")==0){
                cout<<c.getName()<<"'s health ="<<c.getHealth()<<endl;
            }
            else if(com.find("Age")==0){
                cout<<c.getName()<<" is "<<c.getAge()<<" years old."<<endl;
            }
            else if(com.find("Color")==0){
                cout<<c.getName()<<"'s color is "<<c.getColor()<<endl;
            }
            else if(com.find("Feed")==0){
                int feed;
                cout<<"Input how much you wanna feed: ";
                cin>>feed;
                c.Feed(feed);
                cout<<"Your cat feeded for "<<feed<<endl;
                cout<<c.getName()<<"'s color is "<<c.getColor()<<endl;
            }
            else if(com.find("Punish")==0){
                int punish;
                cout<<"Input how much you wanna hit: ";
                cin>>punish;
                c.Punish(punish);
                cout<<"Your cat hitted for "<<punish<<endl;
                cout<<c.getName()<<"'s color is "<<c.getColor()<<endl;
            }
            else{
                cout<<"Command not found. Try again!"<<endl;
            }
        }
    }
    int main() {
        //iniCat();
        ::rabbit t;
        t.start();
    }
