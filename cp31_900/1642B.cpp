#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int a, b, c;
    cin >> a >> b >> c;
    b=2*b;
    int m = 1;
    if (a + c == b)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (a + c > b)
        {
            if ((a + c) % b == 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            
            if((b-max(a,c))%min(a,c)==0 && (b-max(a,c)>0))cout<<"YES"<<endl;
            else if((b-min(a,c))%max(a,c)==0 && (b-min(a,c)>0))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        logic();
}