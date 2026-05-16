#include <bits/stdc++.h>
using namespace std;

void logic(){
    long n,q;
    cin>>n>>q;
    vector<long> a(n);
    for(long i=0;i<n;i++)cin>>a[i];
    long l,r,k;
    
    vector<vector<long>> sum(n,vector<long> (n));
    for(long i=0;i<n;i++){
        long s=0;
        for(long j=i;j<n;j++){
            s+=a[j];
            sum[i][j]=s;
        }
    }
    long total_sum = sum[0][n-1];
    cout<<"total sum = "<<total_sum<<endl;
    for(long i=0;i<q;i++){
        cin>>l>>r>>k;
        long s = total_sum%2 + ((r-l+1)*k)%2 - sum[l-1][r-1]%2;
        if(s==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}