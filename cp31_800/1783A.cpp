#include <bits/stdc++.h>
using namespace std;


void logic()
{
    int n;
    cin >> n;
    vector<int> a(n);
    bool allsame = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i != 0)
        {
            if (a[i] != a[i - 1])
                allsame = false;
        }
    }
    if (allsame==true){
        cout<<"NO"<<endl;
    }else{
        for(int i=n-1;i>=1;i--){
            swap(a[i],a[i-1]);
        }
        cout<<"YES"<<endl;
        for(int x : a)
        cout<<x<<" ";
        cout<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        logic();
}