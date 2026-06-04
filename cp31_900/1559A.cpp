#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<int> a(n);
    int x=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        x = x & a[i];
    }
    cout<<x<<endl;
    


}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}