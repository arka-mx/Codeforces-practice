#include <bits/stdc++.h>

using namespace std;

void logic(){
    int n,s,m;
    cin>>n>>s>>m;
    string shower="NO";
    int last_end=0;
    for(int i=0;i<n;i++){
        int start;int end;
        cin>>start;cin>>end;
        if(start-last_end>=s)shower="YES";
        last_end = end;
    }
    if(m-last_end>=s)shower="YES";

    cout<<shower<<endl;
    
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}