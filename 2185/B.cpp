#include <bits/stdc++.h>

using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++)
    cin>>a[i];
    int x=a[0];
    //bringing the first element to the front
    for(int i=1;i<n;i++){
        x = max(x,a[i]);
    }
    cout<<n*x<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}