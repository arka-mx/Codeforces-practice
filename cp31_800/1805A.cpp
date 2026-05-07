#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<int> a(n);
    int m=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m = m^a[i];
    }

    if(n%2==0){
        if(m==0)cout<<4<<endl;
        else cout<<-1<<endl;
    }else{
        cout<<m<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}