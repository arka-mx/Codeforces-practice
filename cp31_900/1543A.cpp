#include <bits/stdc++.h>
using namespace std;

void logic()
{
    long long a, b;
    cin >> a >> b;
    long long ops = 0;
    long long diff = 0;

    diff = abs(a - b);
    if (diff == 0)
    {
        cout << 0 << " " << 0 << endl;
    }
    else
    {
        long long r = a % diff;
        ops = min(r, diff - r);
        cout << diff << " " << ops << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        logic();
    // cout<<gcd(0,4)<<endl;
}