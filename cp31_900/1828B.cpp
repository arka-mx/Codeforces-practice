#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<int> p(n,0);
    for(int i=0;i<n;i++)cin>>p[i];
    
    int mini=0;
    for(int i=0;i<n;i++){
        mini = gcd(abs(p[i]-i-1),mini);
    }
    cout<<mini<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}