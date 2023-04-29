#include <iostream>
using namespace std;
class lab8 {
    int getNum(char s){
        int a=s-'0';
        return a;
    }
    int main(){
        int a =2,c=0;
        string answer="";
        string factorial = "93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000";
        string abs=        "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000267650600228229401496703205376";
        for (int i(factorial.length()-1);i>=0;i--){
            int b = getNum(factorial[i])+ getNum(abs[i])+c;
            if(b>=10){
                c=1;
                b=b-10;
            }
            else{
                c=0;
            }
            cout<<b<<endl;
            answer= to_string(b)+answer;
        }
        cout<<answer<<endl;
        return 0;
    }
};
