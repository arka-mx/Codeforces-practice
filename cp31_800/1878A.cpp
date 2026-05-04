#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    bool found=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==k)found=true;
    }
    if(found)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}