#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(j*i>n)
            {
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
        
    }
return 0;
}
