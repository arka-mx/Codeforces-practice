#include <bits/stdc++.h>
using namespace std;

void sort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size() - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
}
void logic()
{
    int len_a;
    cin >> len_a;
    vector<int> a(len_a);
    int sum = 0;
    for (int i = 0; i < len_a; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a);
    if (sum == len_a * a[0])
    {
        cout << -1 << endl;
    }
    else
    {
        int len_b = 0, len_c = 1;
        vector<int> b;
        vector<int> c;
        
        int i = len_a - 1;

        while (a[i] == a[len_a - 1])
        {
            c.push_back(a[i]);
            i--;
        }
        for (int j = 0; j <= i; j++)
        {
            b.push_back(a[j]);
        }

        cout << b.size() << " " << c.size() << endl;
        for (int i = 0; i < b.size(); i++)
            cout << b[i]<<" ";
        cout << "\n";
        for (int i = 0; i < c.size(); i++)
            cout << c[i]<<" ";
        cout<<"\n";
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        logic();
}