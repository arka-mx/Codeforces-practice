#include <bits/stdc++.h>
using namespace std;

void logic(){
    string s;
    cin>>s;
    string S=s;
    int f1=0,f0=0;
    int i=0;
    while(i<s.length()){
        int j=i+1;
        if(j>=s.length())break;
        while(s[j]==s[i])j++;
        cout<<j<<" ";
        swap(s[j],s[i]);
        if(j==i+1)i=j+1;
        else i++;
        cout<<s<<endl;
    }
    cout<<s<<endl;
    int index=0;
    for(i=0;i<s.length();i++){
        if(s[i]==S[i]){
            index=i;
            break;
        }
    }
    // cout<<index<<endl;
    int cost = S.length()-index;
    cout<<cost<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        logic();
    }
}