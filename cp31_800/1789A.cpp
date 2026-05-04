#include <bits/stdc++.h>
#include <numeric>
using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<int> a(n);
    bool possible =false;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(gcd(a[i],a[j])==1 || gcd(a[i],a[j])==2){
                possible=true;
                break;
            }
        }
    }
    if(possible)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while ((t--))
    {
        logic();
    }
    
}