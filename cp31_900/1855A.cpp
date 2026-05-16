#include <bits/stdc++.h>
using namespace std;

void logic()
{
    long long n;
    cin >> n;
    long long max_len = 1, len = 0;
    for (long long i = 1; i <= pow(10, 4); i++)
    {
        if (n % i == 0)
            len++;
        else
        {
            max_len = max(max_len, len);
            len = 0;
        }
    }
    max_len = max(max_len, len);
    cout << max_len << endl;
}
// best method is just to check from 1 to k , k being the last integer for which n%k==0, bcoz like if range of [l,r] divides n, then lcm of all the numbers divide n, and like if r-l+1 , i.e. the size of the range is k, then like lcm of k integers apparently divides n, so in that scenario, lcm of 1 to k which has a range lenght of k , must also divide n --> now this is the key concept

int main()
{
    int t;
    cin >> t;
    while (t--)
        logic();
}