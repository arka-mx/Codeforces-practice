#include <bits/stdc++.h>
using namespace std;

void logic(){
    long long n;
    cin>>n;
    double power = log2(n);
    if(n==1)cout<<"NO"<<endl;
    else if(power==floor(power))cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}