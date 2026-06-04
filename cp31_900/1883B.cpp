#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int odd_f = 0, f = 0;
    unordered_map<char, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[s[i]]++;
    }
    for(auto &it : hash){
        if(it.second%2==1)odd_f++;
    }
    // cout<<odd_f<<endl;
    if (k > odd_f)
    {
        cout << "YES" << endl;
    }
    else if (k < odd_f)
    {
        if (odd_f - k == 1)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        logic();
}