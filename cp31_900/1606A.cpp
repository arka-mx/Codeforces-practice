#include <bits/stdc++.h>
using namespace std;

void logic(){
    string s;
    cin>>s;

    int ABs=0,BAs=0;
    int n = s.length();
    if(s[0]==s[n-1])
    cout<<s<<endl;
    else{
        if(s[0]=='a' && s[n-1]=='b'){
            s[0]='b';
        }else{
            s[0]='a';
        }
        cout<<s<<endl;
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}