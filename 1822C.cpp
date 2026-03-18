#include <bits/stdc++.h>
using namespace std;

void logic(){
    long long n;
    cin>>n;
    long long total = 0;
    for(long long i=n;i>=1;i--){
        if(i==n)total+=4*n;
        else if(i==n-1)total+=i;
        else if(i!=1)total+=2*i;
        else total+=3;
    }
    cout<<total<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}