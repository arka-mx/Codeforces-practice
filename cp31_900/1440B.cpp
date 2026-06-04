#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n*k);
    for(int i=0;i<n*k;i++){
        cin>>a[i];
    }
    // sort(a.begin(),a.end());

    int gap = floor(n/2)+1;
    
    long long sum=0;
    int f=0;
    int l=n*k;
    while(f<k){
        // cout<<a[l-gap]<<endl;
        sum+=a[l-gap];
        l-=gap;
        f++;
        
    }
    cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}