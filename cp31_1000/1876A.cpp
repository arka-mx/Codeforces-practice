#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
        v.push_back({b[i], a[i]});

    sort(v.begin(), v.end());
    // for(int x : a)
    // cout<<x<<" ";
    // cout<<endl;
    // for(int x : b)
    // cout<<x<<" ";
    // cout<<endl;
    long long total = n;
    long long total_cost = 0;
    int i = 0;
    total_cost += p;
    total--;
    // cout << total << endl;
    // cout << total_cost << endl;
    while (total > 0)
    {
        if (v[i].first <= p)
        {
            if (v[i].second <= total)
            {
                // cout<<v[i].second<<" "<<v[i].first<<endl;
                total_cost += v[i].second * v[i].first;
                total -= v[i].second;
            }
            else
            {
                total_cost += v[i].first * total;
                total = 0;
            }
        }
        else
        {
            total_cost += total * p;
            total = 0;
        }
        // cout << total << endl;
        // cout << total_cost << endl;
        i++;
    }
    cout << total_cost << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        logic();
}