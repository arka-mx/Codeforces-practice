#include <bits/stdc++.j>

using namespace std;

void logic(){
   
    string s,t;
    cin>>s>>t;
    int min_length=t.length();
    int l = s.length();
    int count=0;
    int j=0,i=0;
    for(i=0;i<l;i++){
        if(j<t.length() && (s[i]==t[j] || s[i]=='?')){
            s[i]=t[j];
            j++;
        }
    }
    if(j==t.length()){
        cout<<"YES"<<endl;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='?')s[i]='a';
        }
        cout<<s<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}