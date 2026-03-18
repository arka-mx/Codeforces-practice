#include <bits/stdc++.h>

using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];

    long long p_max=0;
    
    sort(a.begin(),a.end());
    p_max = max(a[0]*a[1],a[n-1]*a[n-2]);
    cout<<p_max<<endl;
}
int main(){
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        logic();
    }
}