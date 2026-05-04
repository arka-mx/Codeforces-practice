#include <bits/stdc++.h>
using namespace std;

void logic()
{
    vector<int> a(7);
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
        a[i] = -a[i];
        sum += a[i];
    }

    // finding the minimum
    int mini = INT_MAX;
    for (int i = 0; i < 7; i++)
    {
        mini = min(mini, a[i]);
    }
    cout << sum - 2 * mini << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        logic();
}