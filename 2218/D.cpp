#include <bits/stdc++.h>
using namespace std;


void logic()
{
    int n;
    cin >> n;
    long long y=1;
    int i=0;
    while (i < n)
    {
        y=pow(2,i);
        cout<<y<<" ";
        i++;
    }
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        logic();
}