#include <iostream>
using namespace std;
class lab4 {
    int nod(int y,int x){
        while (x != y) {
            if (x>y) {
                x = x-y;
            }
            else {
                y = y-x;
            }
        }
        return x;
    }
    int main() {
        cout<<"Input n: ";
        int n;
        cin >>n;
        for (int i(1);i<n;i++){
            if(nod(i,n)==1){
                cout<<i<<" ";
            }
        }
        return 0;
    }

};
