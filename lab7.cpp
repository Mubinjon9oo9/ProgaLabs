#include <iostream>
using namespace std;
class lab1 {
    int main() {
        int n;
        cout<<"Input n(n>=2): ";
        cin>>n;
        int a[n+1];
        a[0]=0;
        a[1]=1;
        for(int i(0);i<=n;i++){
            if(i>=2){
                a[i]=a[i-1]+a[i-2];
            }
            cout<<i<<"-"<<a[i]<<"\n";
        }
        return 0;
    }
};
