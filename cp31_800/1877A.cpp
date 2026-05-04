#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<int> a(n-1);
    int sum=0;
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<-sum<<endl;

    
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}