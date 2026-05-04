#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char first = s[0], last = s[n - 1];
    if (n == 1)
        cout << 1 << endl;
    else
    {
        while ((first == '0' && last == '1') || (first == '1' && last == '0'))
        {
            s.pop_back();  // remove last
            s.erase(0, 1); // remove first
            if (s.length() <= 1)
                break;
            first = s[0];
            last = s[s.length() - 1];
        }
        cout <<s.length()<< endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        logic();
}