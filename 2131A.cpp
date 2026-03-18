#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    bool decr = false;
    bool incr = false;
    int iterations = 0;
    do
    {
        decr = false;
        incr = false;
        for (int i = 0; i < n; i++)
        {

            if (a[i] > b[i])
            {
                if(decr)break;
                a[i]--;
                decr = true;
            }
            else if (a[i] < b[i])
            {
                a[i]++;
                incr = true;
                if(decr && incr)break;
            }
        }
        iterations++;

    } while (decr);

    cout<<iterations<<endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        logic();
}