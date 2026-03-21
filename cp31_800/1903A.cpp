#include <bits/stdc++.h>

using namespace std;

void logic(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    
    for(int i=0;i<n;i++)cin>>a[i];

    if(k==1 && n==1){
        cout<<"YES"<<endl;
    }else if(k==1){
        bool isSorted = is_sorted(a.begin(),a.end());
        if(isSorted)cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}