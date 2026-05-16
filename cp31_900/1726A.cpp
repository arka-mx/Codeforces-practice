#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxi = INT_MIN;
    int mini = INT_MAX;
    int max_index = -1, min_index = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxi)
        {
            maxi = a[i];
            max_index = i;
        }
        if (a[i] < mini)
        {
            mini = a[i];
            min_index = i;
        }
    }
    if (min_index == max_index)
        cout << 0 << endl;
    else
    {
        int ans = 0;
        int n1 = maxi-a[0];
        int n2 = a[n-1]-mini;
        int n3=0;
        for(int i=0;i<n-1;i++){
            n3 = max(a[i]-a[i+1],n3);
        }
        ans = max({n1,n2,n3});
        cout << ans << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        logic();
}