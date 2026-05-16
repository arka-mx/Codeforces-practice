#include <bits/stdc++.h>
using namespace std;

void logic()
{
    long long a, b, n;
    cin >> a >> b >> n;
    vector<long long> x(n);
    sort(x.begin(), x.end());
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    long long bomb_timer =b;
    long long ans=0;
    long long maxi = a-1;
    for (int i = 0; i < n; i++)
    {
        
        if (x[i] <= maxi)
        {
            ans += x[i];
            
        }
        else
        {
        
            ans += a-1;
        }
    }
    ans+=bomb_timer;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        logic();
}