#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<int> a(n);
    int ones=0,zeroes=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)ones++;
        else if(a[i]==0)zeroes++;
    }
    long long ans = ones*pow(2,zeroes);
    
    cout<<ans<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}