#include <iostream>
#include "lab3.h"
using namespace std;
unsigned int f(int n)
{
    if (n==1) {
        return 1;
    }
    if (n==0) {
        return 0;
    }
    return f(n-1)+f(n-2);
}
int lab3::start(){
        int n;
        cout<<"Input n(n>=2): ";
        cin>>n;
        string fib="",nums="";
        for (int i(0);i<=n;i++) {
            nums+= to_string(i)+" ";
            fib += to_string(f(i))+" ";
        }
        cout<<nums<<endl;
        cout<<fib;
        return 0;
}