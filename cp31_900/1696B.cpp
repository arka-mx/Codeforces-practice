#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int f = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 && a[i] != 0)
            f++;
        else if (a[i] != 0 && a[i - 1] == 0)
            f++;
    }
    cout <<min(f,2) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        logic();
}