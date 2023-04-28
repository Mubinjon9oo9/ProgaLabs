#include <iostream>
using namespace std;
class lab7 {
    int n;
    int main() {
        cout<<"Input n(n>=2): ";
        cin>>n;
        int *a = new int[n + 1];
        for (int i = 0; i < n + 1; i++)
            a[i] = i;
        for (int p = 2; p < n + 1; p++)
        {
            if (a[p] != 0)
            {
                cout << a[p] << endl;
                for (int j = p*p; j < n + 1; j += p)
                    a[j] = 0;
            }
        }
        return 0;
    }
};
