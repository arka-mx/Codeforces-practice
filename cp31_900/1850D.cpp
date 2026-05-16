#include <bits/stdc++.h>
using namespace std;


void logic(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int d=0;
    if(n==1){
        cout<<0<<endl;
    }else{
        int len=0,len_max=0;
        for(int i=0;i<n-1;i++){
            d = a[i+1]-a[i];
            if(d<=k)len++;
            if(d>k){
                len_max =max(len,len_max);
            
                len = 0;
            }
        }
        len_max = max(len,len_max);
        len_max++;
        int ans = n-len_max;
        cout<<ans<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}