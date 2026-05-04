#include<bits/stdc++.h>
using namespace std;


void logic(){
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    int t=0;
    bool possible=false;
    while (x.length()<=32)
    {
        // cout<<x.length()<<endl;   
        if(x.find(s)!=string::npos){
            possible=true;   
            break;
        }

        x=x+x;
        t++;
    }
    if(possible)cout<<t<<endl;
    else cout<<-1<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}