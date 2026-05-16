#include <bits/stdc++.h>
using namespace std;

void logic(){
    long long n,k;
    long long x;
    cin>>n>>k>>x;
    long long sum=n*(n+1)/2;
    long long min_sum = k*(k+1)/2;
    long long max_sum = k*(2*n-k+1)/2;
    if(x>=min_sum && x<=max_sum)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}