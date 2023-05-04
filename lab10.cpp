#include <iostream>
#include "lab10.h"
using namespace std;
int lab10::start() {{
        int n;
        cout<<"Input n: ";
        cin>>n;
        string m_a="",m_b="",m_c="";
        int a[n][n];
        int b[n][n];
        int c[n][n];
        int ab[n][n];
        int ans[n][n];
        for (int i(0);i<n;i++){
            for (int j(0);j<n;j++){
                a[i][j]=0 + rand() % (9 - 0 + 1);
                b[i][j]=0 + rand() % (9 - 0 + 1);
                c[i][j]=0 + rand() % (9 - 0 + 1);
                m_a+= to_string(a[i][j])+" ";
                m_b+= to_string(b[i][j])+" ";
                m_c+= to_string(c[i][j])+" ";
            }
            m_a+="\n";
            m_b+="\n";
            m_c+="\n";
        }
        cout<<"Матрица А:\n"<<m_a;
        cout<<"Матрица B:\n"<<m_b;
        cout<<"Матрица C:\n"<<m_c;
        for (int i(0);i<n;i++){
            for (int j(0);j<n;j++){
                ab[i][j]=a[i][j]+b[i][j];
            }
        }
        for (int i(0);i<n;i++){
            for (int j(0);j<n;j++){
                ans[i][j] = 0;
                for (int k(0);k<n;k++){
                    ans[i][j] += ab[i][k] * c[k][j];
                }
            }
        }
        cout<<"Answer: "<<endl;
        for (int i(0);i<n;i++){
            for (int j(0);j<n;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
};
