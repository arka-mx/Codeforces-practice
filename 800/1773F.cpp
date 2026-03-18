#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=n;i++){
        if(a>0)cout<<1<<":"<<0<<endl;
        else if(b>0)cout<<0<<":"<<1<<endl;
        else cout<<0<<":"<<0<<endl;
    }
}