#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int f_odd = 0, f_even = 0, f4 = 0,f3=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            f_even++;
        else if(a[i]%4==3)
            f3++;
        else if(a[i]%2==1)f_odd++;

        if (a[i] % 4 == 0)
            f4++;
    }
    // cout<<f4<<" "<<f_even<<" "<<f_odd<<endl;
    if (k != 4)
    {
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % k == 0)
            {
                mini = 0;
                break;
            }
            else
                mini = min(mini, k - a[i] % k);
        }
        cout << mini << endl;
    }
    else
    {
        if (f_even >= 2 || f4 >= 1)
            cout << 0 << endl;
        else if (f_even == 1)
        {
            if (f_odd >= 1)
                cout << 1 << endl;
            else if(f3>=1)
                cout << 1 << endl;
            else if(f_odd==0)cout<<2<<endl;
        }
        else
        {
            if(f3>=1)cout<<1<<endl;
            else cout<<2<<endl;
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