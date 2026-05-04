#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 1; i <= n; i++)
            cout << 1 << " ";
        cout << endl;
    }
    else
    {
        if (k == 1)
            cout << "NO" << endl;
        else
        {
            vector<int> v;
            int totalf = 0;
            while (k >= 2 && n >= 2)
            {
                if (n % k == 1)
                {
                    k--;
                    continue;
                }
                else
                {
                    int f = n / k;
                    totalf += f;
                    for (int i = 1; i <= f; i++)
                        v.push_back(k);
                    
                    n = n % k;
                    k--;
                }
            }
            if (v.size() == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout << totalf << endl;
                for (int i = 0; i < v.size(); i++)
                    cout << v[i] << " ";
                cout << endl;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        logic();
}