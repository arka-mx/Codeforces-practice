#include <bits/stdc++.h>

using namespace std;

void logic(){
    int n,m,h;
    cin>>n>>m>>h;

    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    vector<int> temp = a;

    int b,c;
    for(int i=1;i<=m;i++){
        cin>>b>>c;
        if(c==0)continue;
        a[b-1]+=c;

        if(a[b-1]>h)
        a=temp;
        
    }
    for( int x : a){
        cout<<x+" ";
    }
    cout<<endl; 
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}