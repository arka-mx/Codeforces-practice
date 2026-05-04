#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> hash(n);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hash[i]=sum;
        sum+=a[i];
    }
    for(int i=1;i<n;i++){
        if(hash[i]==a[i]){
            if(a[i]!=a[0]){
                swap(a[i],a[0]);
            }
        }
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        logic();
}