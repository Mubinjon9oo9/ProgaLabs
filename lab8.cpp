#include <iostream>
using namespace std;
class lab8 {
    int main() {
        int n;
        float quantity=0;
        cout<<"Input n(n>=2): ";
        cin>>n;
        int coins[8]={1,2,3,5,10,15,20,50};
        for (int i=7;i>=0;i--){
            if(n<=0){
                break;
            }
            else{
                quantity+=(n/coins[i]);
                n=n%coins[i];
            }
        }
        cout<<quantity;
        return 0;
    }

};
